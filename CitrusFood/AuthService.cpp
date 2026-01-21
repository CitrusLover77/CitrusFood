#include "AuthService.h"
using namespace System::Net;
using namespace System::Text;
using namespace System::IO;
bool AuthService::Login(String^ user, String^ password) {
	try {
		//URL DEL API
		String^ url = "http://localhost/CitrusFood/src/login.php";

		//CREACION DE PETICION HTTP
		HttpWebRequest^ request = (HttpWebRequest^)WebRequest::Create(url);
		//DEFINO EL METODO Y EL CONTENT TYPE
		request->Method = "POST";
		request->ContentType = "application/json";

		//CREACION DEL JSON

		String^ json = "{ \"username\": \"" + user + "\",\"password\":\""+password+"\"}";

		//CONVERTIRMOS EL TEXTO A BYTES
		array<Byte>^ data = Encoding::UTF8->GetBytes(json);
		request->ContentLength = data->Length;

		//ENVIAR EL JSON
		Stream^ stream = request->GetRequestStream();
	    stream->Write(data, 0, data->Length);
		stream->Close();

		//Leer la respuesta
		HttpWebResponse^ response =
			(HttpWebResponse^)request->GetResponse();

		StreamReader^ reader =
			gcnew StreamReader(response->GetResponseStream());

		String^ result = reader->ReadToEnd();

		//Si la API dice "success", el login está bien
		return result->Contains("success");
	}
	catch (Exception^)
	{
		//Si algo falla (API caída, error, etc.)
		return false;
	}
}