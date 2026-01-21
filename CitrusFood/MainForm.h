#pragma once

namespace CitrusFood {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void);

		void SetActiveButton(Button^ activeButton);
		Color COLOR_BTN_NORMAL = Color::White;
		Color COLOR_BTN_ACTIVE = Color::FromArgb(255, 170, 91);
		Color COLOR_TEXT_NORMAL = Color::Black;
		Color COLOR_TEXT_ACTIVE = Color::FromArgb(255, 130, 102);
	private: System::Windows::Forms::Panel^ TopBar;
	public:

	private: System::Windows::Forms::Panel^ SideBar;
	public:

	private: System::Windows::Forms::Panel^ ContentPanel;


	private: System::Windows::Forms::Button^ buttonMenu;
	private: System::Windows::Forms::Button^ buttonDashboard;
	private: System::Windows::Forms::Button^ buttonVentas;
	private: System::Windows::Forms::Button^ buttonGastos;
	private: System::Windows::Forms::Button^ buttonPedidos;
	private: System::Windows::Forms::Button^ buttonCombos;
	private: System::Windows::Forms::Button^ buttonIngredientes;
	private: System::Windows::Forms::Button^ buttonProductos;
	private: System::Windows::Forms::Button^ buttonClientes;
	private: System::Windows::Forms::Label^ labelNombre;



	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:
























	protected:

	private:

		Form^ currentForm;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TopBar = (gcnew System::Windows::Forms::Panel());
			this->labelNombre = (gcnew System::Windows::Forms::Label());
			this->SideBar = (gcnew System::Windows::Forms::Panel());
			this->buttonMenu = (gcnew System::Windows::Forms::Button());
			this->buttonDashboard = (gcnew System::Windows::Forms::Button());
			this->buttonVentas = (gcnew System::Windows::Forms::Button());
			this->buttonGastos = (gcnew System::Windows::Forms::Button());
			this->buttonPedidos = (gcnew System::Windows::Forms::Button());
			this->buttonCombos = (gcnew System::Windows::Forms::Button());
			this->buttonIngredientes = (gcnew System::Windows::Forms::Button());
			this->buttonProductos = (gcnew System::Windows::Forms::Button());
			this->buttonClientes = (gcnew System::Windows::Forms::Button());
			this->ContentPanel = (gcnew System::Windows::Forms::Panel());
			this->TopBar->SuspendLayout();
			this->SideBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// TopBar
			// 
			this->TopBar->Controls->Add(this->labelNombre);
			this->TopBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->TopBar->Location = System::Drawing::Point(0, 0);
			this->TopBar->Name = L"TopBar";
			this->TopBar->Size = System::Drawing::Size(1348, 50);
			this->TopBar->TabIndex = 0;
			this->TopBar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::TopBar_Paint);
			// 
			// labelNombre
			// 
			this->labelNombre->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNombre->Location = System::Drawing::Point(0, 0);
			this->labelNombre->Name = L"labelNombre";
			this->labelNombre->Size = System::Drawing::Size(1348, 50);
			this->labelNombre->TabIndex = 2;
			this->labelNombre->Text = L"CitrusFood";
			this->labelNombre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SideBar
			// 
			this->SideBar->Controls->Add(this->buttonMenu);
			this->SideBar->Controls->Add(this->buttonDashboard);
			this->SideBar->Controls->Add(this->buttonVentas);
			this->SideBar->Controls->Add(this->buttonGastos);
			this->SideBar->Controls->Add(this->buttonPedidos);
			this->SideBar->Controls->Add(this->buttonCombos);
			this->SideBar->Controls->Add(this->buttonIngredientes);
			this->SideBar->Controls->Add(this->buttonProductos);
			this->SideBar->Controls->Add(this->buttonClientes);
			this->SideBar->Dock = System::Windows::Forms::DockStyle::Left;
			this->SideBar->Location = System::Drawing::Point(0, 50);
			this->SideBar->Name = L"SideBar";
			this->SideBar->Size = System::Drawing::Size(241, 671);
			this->SideBar->TabIndex = 1;
			// 
			// buttonMenu
			// 
			this->buttonMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->buttonMenu->Location = System::Drawing::Point(38, 267);
			this->buttonMenu->Name = L"buttonMenu";
			this->buttonMenu->Size = System::Drawing::Size(165, 40);
			this->buttonMenu->TabIndex = 17;
			this->buttonMenu->Text = L"MENU";
			this->buttonMenu->UseVisualStyleBackColor = true;
			this->buttonMenu->Click += gcnew System::EventHandler(this, &MainForm::buttonMenu_Click);
			// 
			// buttonDashboard
			// 
			this->buttonDashboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDashboard->Location = System::Drawing::Point(38, 109);
			this->buttonDashboard->Name = L"buttonDashboard";
			this->buttonDashboard->Size = System::Drawing::Size(165, 40);
			this->buttonDashboard->TabIndex = 16;
			this->buttonDashboard->Text = L"DASHBOARD";
			this->buttonDashboard->UseVisualStyleBackColor = true;
			this->buttonDashboard->Click += gcnew System::EventHandler(this, &MainForm::buttonDashboard_Click);
			// 
			// buttonVentas
			// 
			this->buttonVentas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->buttonVentas->Location = System::Drawing::Point(38, 205);
			this->buttonVentas->Name = L"buttonVentas";
			this->buttonVentas->Size = System::Drawing::Size(165, 40);
			this->buttonVentas->TabIndex = 15;
			this->buttonVentas->Text = L"VENTAS";
			this->buttonVentas->UseVisualStyleBackColor = true;
			this->buttonVentas->Click += gcnew System::EventHandler(this, &MainForm::buttonVentas_Click);
			// 
			// buttonGastos
			// 
			this->buttonGastos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->buttonGastos->Location = System::Drawing::Point(38, 521);
			this->buttonGastos->Name = L"buttonGastos";
			this->buttonGastos->Size = System::Drawing::Size(165, 40);
			this->buttonGastos->TabIndex = 14;
			this->buttonGastos->Text = L"GASTOS";
			this->buttonGastos->UseVisualStyleBackColor = true;
			this->buttonGastos->Click += gcnew System::EventHandler(this, &MainForm::buttonGastos_Click);
			// 
			// buttonPedidos
			// 
			this->buttonPedidos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->buttonPedidos->Location = System::Drawing::Point(38, 157);
			this->buttonPedidos->Name = L"buttonPedidos";
			this->buttonPedidos->Size = System::Drawing::Size(165, 40);
			this->buttonPedidos->TabIndex = 13;
			this->buttonPedidos->Text = L"PEDIDOS";
			this->buttonPedidos->UseVisualStyleBackColor = true;
			this->buttonPedidos->Click += gcnew System::EventHandler(this, &MainForm::buttonPedidos_Click);
			// 
			// buttonCombos
			// 
			this->buttonCombos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->buttonCombos->Location = System::Drawing::Point(38, 363);
			this->buttonCombos->Name = L"buttonCombos";
			this->buttonCombos->Size = System::Drawing::Size(165, 40);
			this->buttonCombos->TabIndex = 12;
			this->buttonCombos->Text = L"COMBOS";
			this->buttonCombos->UseVisualStyleBackColor = true;
			this->buttonCombos->Click += gcnew System::EventHandler(this, &MainForm::buttonCombos_Click);
			// 
			// buttonIngredientes
			// 
			this->buttonIngredientes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonIngredientes->Location = System::Drawing::Point(38, 411);
			this->buttonIngredientes->Name = L"buttonIngredientes";
			this->buttonIngredientes->Size = System::Drawing::Size(165, 40);
			this->buttonIngredientes->TabIndex = 11;
			this->buttonIngredientes->Text = L"INGREDIENTES";
			this->buttonIngredientes->UseVisualStyleBackColor = true;
			this->buttonIngredientes->Click += gcnew System::EventHandler(this, &MainForm::buttonIngredientes_Click);
			// 
			// buttonProductos
			// 
			this->buttonProductos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->buttonProductos->Location = System::Drawing::Point(38, 315);
			this->buttonProductos->Name = L"buttonProductos";
			this->buttonProductos->Size = System::Drawing::Size(165, 40);
			this->buttonProductos->TabIndex = 10;
			this->buttonProductos->Text = L"PRODUCTOS";
			this->buttonProductos->UseVisualStyleBackColor = true;
			this->buttonProductos->Click += gcnew System::EventHandler(this, &MainForm::buttonProductos_Click);
			// 
			// buttonClientes
			// 
			this->buttonClientes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
			this->buttonClientes->Location = System::Drawing::Point(38, 473);
			this->buttonClientes->Name = L"buttonClientes";
			this->buttonClientes->Size = System::Drawing::Size(165, 40);
			this->buttonClientes->TabIndex = 9;
			this->buttonClientes->Text = L"CLIENTES";
			this->buttonClientes->UseVisualStyleBackColor = true;
			this->buttonClientes->Click += gcnew System::EventHandler(this, &MainForm::buttonClientes_Click);
			// 
			// ContentPanel
			// 
			this->ContentPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ContentPanel->Location = System::Drawing::Point(241, 50);
			this->ContentPanel->Name = L"ContentPanel";
			this->ContentPanel->Size = System::Drawing::Size(1107, 671);
			this->ContentPanel->TabIndex = 2;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1348, 721);
			this->Controls->Add(this->ContentPanel);
			this->Controls->Add(this->SideBar);
			this->Controls->Add(this->TopBar);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->TopBar->ResumeLayout(false);
			this->SideBar->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void buttonDashboard_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonPedidos_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonVentas_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonMenu_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonProductos_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCombos_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonIngredientes_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonClientes_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonGastos_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TopBar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
