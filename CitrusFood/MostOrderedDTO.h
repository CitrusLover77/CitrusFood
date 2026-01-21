#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace CitrusFood {
	public ref class MostOrderedDTO {
	public:
		String^ productName;
		int orderCount;

		MostOrderedDTO(String^ productName, int orderCount) {
			this->productName = productName;
			this->orderCount = orderCount;
		}
	};
}