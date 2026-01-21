#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace CitrusFood {
	public ref class StockDTO {
	public:
		String^ ingredientName;
		int quantity;

		StockDTO(String^ ingredientName, int quantity) {
			this->ingredientName = ingredientName;
			this->quantity = quantity;
		}
	};
}