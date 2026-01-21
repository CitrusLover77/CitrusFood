#pragma once

#include "StockDTO.h"
using namespace System::Collections::Generic;

namespace CitrusFood {
	public ref class StockService {
	public:
		static List<StockDTO^>^ GetLowStock(int limit);
	};
}