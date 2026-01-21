#pragma once

#include "MostOrderedDTO.h"
using namespace System::Collections::Generic;

namespace CitrusFood {
	public ref class MostOrderedService {
	public:
		static List<MostOrderedDTO^>^ GetMostOrdered(int limit);
	};
}