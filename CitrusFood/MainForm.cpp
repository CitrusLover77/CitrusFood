#include "MainForm.h"
#include "ViewManager.h"
#include "DashboardView.h"
using namespace CitrusFood;
using namespace System::Windows::Forms;
using namespace System;
MainForm::MainForm(void)
{
	InitializeComponent();
	ContentPanel->BringToFront();
	ContentPanel->BackColor = Color::FromArgb(254, 241, 232);//Beige claro
	TopBar->BackColor = Color::FromArgb(255, 170, 91);//Naranja 
	SideBar->BackColor = Color::FromArgb(255, 130, 102);//Rosa
	//this->TopLevel = false;
	//labelDate->Text = DateTime::Now.ToString("dd/MM/yyyy HH-mm");
	}
void MainForm::SetActiveButton(Button^ activeButton) {
	//CONTROL ES LA CLASE MADRE DE LAS HERRAMIENTAS DEL WINFORMS
	for each(Control ^ ctrl in SideBar->Controls) { 
		Button^ btn = dynamic_cast<Button^>(ctrl);
		if (btn != nullptr) {
			btn->BackColor = COLOR_BTN_NORMAL;
			btn->ForeColor = COLOR_TEXT_NORMAL;
	}
	}
	activeButton->BackColor = COLOR_BTN_ACTIVE;
	activeButton->ForeColor = COLOR_TEXT_ACTIVE;
}

void MainForm::buttonDashboard_Click(System::Object^ sender, System::EventArgs^ e) {
	SetActiveButton(buttonDashboard);

	DashboardView^ dashboard = gcnew DashboardView();
	ViewManager::Load(ContentPanel, dashboard);
}

void MainForm::buttonPedidos_Click(System::Object^ sender, System::EventArgs^ e) {
	SetActiveButton(buttonPedidos);
	//LoadView(gcnew PedidosView());
}
void MainForm::buttonVentas_Click(System::Object^ sender, System::EventArgs^ e) {
	SetActiveButton(buttonVentas);
	//LoadView(gcnew VentasView());
}
void MainForm::buttonMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	SetActiveButton(buttonMenu);
	//LoadView(gcnew MenuView());
}
void MainForm::buttonProductos_Click(System::Object^ sender, System::EventArgs^ e) {
	SetActiveButton(buttonProductos);
	//LoadView(gcnew ProductosView());
}
void MainForm::buttonCombos_Click(System::Object^ sender, System::EventArgs^ e) {
	SetActiveButton(buttonCombos);
	//LoadView(gcnew CombosView());
}
void MainForm::buttonIngredientes_Click(System::Object^ sender, System::EventArgs^ e) {
	SetActiveButton(buttonIngredientes);
	//LoadView(gcnew IngredientesView());
}
void MainForm::buttonClientes_Click(System::Object^ sender, System::EventArgs^ e) {
	SetActiveButton(buttonClientes);
	//LoadView(gcnew ClientesView());
}
void MainForm::buttonGastos_Click(System::Object^ sender, System::EventArgs^ e) {
	SetActiveButton(buttonGastos);
	//LoadView(gcnew GastosView());
}