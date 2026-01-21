<?php
require_once __DIR__ . '/_headers.php';
error_reporting(E_ALL);

// ======================================================
//  CARGA DE DEPENDENCIAS Y VARIABLES DE ENTORNO
// ======================================================
require __DIR__ . '/../vendor/autoload.php';

//=======================================================
// INTENTA CARGAR EL DOTENV
//=======================================================
try {
    Dotenv\Dotenv::createImmutable(__DIR__ . '/../')->load();
} catch (exception $e) {
    echo json_encode([
        "status" => "error",
        "message" => "Error loading environment variables: " . $e->getMessage()
    ]);
    exit;
}
// ======================================================
//  CONEXIÓN A LA BASE DE DATOS
// ======================================================
require_once __DIR__ . '/conection.php';


// ======================================================
//  LEER JSON DE ENTRADA
// ======================================================
$input = json_decode(file_get_contents("php://input"), true) ?? [];
// ======================================================
//  MÉTODO POST
// ======================================================
if ($_SERVER['REQUEST_METHOD'] !== 'POST') {
    http_response_code(405);
    echo json_encode([
        "status" => "error",
        "message" => "Method not allowed"
    ]);
    exit;
}

// ======================================================
//  LEER JSON
// ======================================================
$input = json_decode(file_get_contents("php://input"), true);

$username = $input['username'] ?? null;
$password = $input['password'] ?? null;

if (!$username || !$password) {
    http_response_code(400);
    echo json_encode([
        "status" => "error",
        "message" => "Username and password required"
    ]);
    exit;
}

// ======================================================
//  QUERY SEGURA
// ======================================================
pg_prepare(
    $conn,
    "login_query",
    "SELECT id, username, password FROM login WHERE username = $1 LIMIT 1"
);

$result = pg_execute($conn, "login_query", [$username]);
$user = pg_fetch_assoc($result);

// ======================================================
//  VALIDACIÓN
// ======================================================
if (!$user || $user['password'] !== $password) {
    http_response_code(401);
    echo json_encode([
        "status" => "error",
        "message" => "Invalid credentials"
    ]);
    exit;
}

// ======================================================
//  OK
// ======================================================
echo json_encode([
    "status" => "success",
    "message" => "Login successful",
    "user_id" => $user['id']
]);
exit;