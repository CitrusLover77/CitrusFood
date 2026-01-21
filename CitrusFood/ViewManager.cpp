#include "ViewManager.h"
using namespace System::Windows::Forms;
using namespace CitrusFood;

void ViewManager::Load(Panel^ container, UserControl^ view)
{
	container->Controls->Clear();
	view->Dock = DockStyle::Fill;
	container->Controls->Add(view);
}
