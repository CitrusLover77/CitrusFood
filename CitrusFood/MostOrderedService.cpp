#include "MostOrderedService.h"
#include "MostOrderedDTO.h"
#include "UiMessageHelper.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Net;
using namespace System::IO;
using namespace System::Web::Script::Serialization;
using namespace CitrusFood;

List<MostOrderedDTO^>^ MostOrderedService::GetMostOrdered(int limit) {
	List<MostOrderedDTO^>^ list = gcnew List<MostOrderedDTO^>();


	try {
	
		//URL de la api
		String^ url = "http://localhost/CitrusFood/src/most_orderer.php=" + limit;

		//Crear un request HTTP(donde envio la solicitud para traer un recurso
		HttpWebRequest^ request = (HttpWebRequest^)WebRequest::Create(url);
		request->Method = "GET";
		request->ContentType = "application/json";

		//Ejecuto el request

		HttpWebResponse^ response = (HttpWebResponse^)request->GetResponse();
		//StreamReader permite leer eficientemente datos de texto, carácter por carácter o línea por línea, desde un flujo de bytes
		StreamReader^ reader = gcnew StreamReader(response->GetResponseStream());

		//Leer el JSON como String
		String^ json = reader->ReadToEnd();

		reader->Close();
		response->Close();

		//Parsear el json
		JavaScriptSerializer^ serializer = gcnew JavaScriptSerializer();

		//Aca se espera un array de objectos
		array<Object^>^ data = (array<Object^>^)serializer->DeserializeObject(json);

		//Se convierte el Json al dto

		for each (Object ^ item in data) {
			Dictionary<String^, Object^>^ row = (Dictionary<String^, Object^>^)item;

			String^ name = row["name"]->ToString();
			int total = Convert::ToInt32(row["total"]);

			list->Add(gcnew MostOrderedDTO(name, total));
		}

	}catch(Exception^ ex) {
		//para ver error
		UiMessageHelper::Error("Error en MostOrderedService:" + ex->Message);
	}
	return list;
}