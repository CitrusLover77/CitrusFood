#pragma once
using namespace System::Windows::Forms;
namespace CitrusFood {
	public ref class ViewManager abstract sealed
	{
	public:
		static void Load(Panel^ container, UserControl^ view);
	};
}