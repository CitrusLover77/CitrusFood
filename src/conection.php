<?php
$conn = pg_connect(sprintf(
    "host=%s  dbname=%s user=%s password=%s ",
    $_ENV['DB_HOST'],
    $_ENV['DB_NAME'],
    $_ENV['DB_USER'],
    $_ENV['DB_PASSWORD']

));
if (!$conn) {
    echo json_encode([
        "status" => "error",
        "message" => "Error connecting to the database: " . pg_last_error()
    ]);
    exit;
}