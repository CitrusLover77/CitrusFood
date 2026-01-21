#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace CitrusFood {

	/// <summary>
	/// Resumen de DashboardView
	/// </summary>
	public ref class DashboardView : UserControl
	{
	public:
		DashboardView(void) {
			InitializeComponent();
			loadLowStock();
			mostOrdered();

			//Colors
			
			Color naranja = Color::FromArgb(255, 170, 91);
			Color rosa = Color::FromArgb(255, 130, 102);

			// UI
			Color fondoPrincipal = Color::FromArgb(245, 245, 245);
			Color card = Color::FromArgb(255, 255, 255);
			Color sidebar = Color::FromArgb(255, 150, 125);


			//Borders
			panelGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			panelGridView->BackColor = Color::White;
			panelGridView->Padding = System::Windows::Forms::Padding(2);

			panelUltimosPedidos->BorderStyle = System::Windows::Forms::BorderStyle::None;
			panelUltimosPedidos->BackColor = fondoPrincipal;

			dataGridViewPedidos->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewPedidos->CellBorderStyle = DataGridViewCellBorderStyle::SingleHorizontal;
			dataGridViewPedidos->GridColor = Color::FromArgb(230, 230, 230);

			panelStockActions->BorderStyle = System::Windows::Forms::BorderStyle::None;
			panelStockActions->BackColor = Color::White;
			panelStockActions->Padding = System::Windows::Forms::Padding(2);

			panelStockActions->BorderStyle = System::Windows::Forms::BorderStyle::None;
			panelStockActions->BackColor = Color::White;
			panelStockActions->Padding = System::Windows::Forms::Padding(2);
			tableLayoutPanelButton->BackColor = Color::White;
			tableLayoutPanelTop->BackColor = Color::White;

		}
		void loadLowStock();
		void mostOrdered();
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~DashboardView()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:









	private: System::Windows::Forms::Panel^ panelStockActions;


	private: System::Windows::Forms::Panel^ panelUltimosPedidos;
	private: System::Windows::Forms::Panel^ panelCentro;





	private: System::Windows::Forms::Panel^ panelHoy;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelTop;

	private: System::Windows::Forms::Label^ labelGastosSemanas;
	private: System::Windows::Forms::Label^ labelVentasSemana;
	private: System::Windows::Forms::Label^ labelVentasHoy;
	private: System::Windows::Forms::Label^ labelGastosHoy;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelButton;
	private: System::Windows::Forms::Label^ labelStock5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelStock1;
	private: System::Windows::Forms::Label^ labelStock3;
	private: System::Windows::Forms::Label^ labelStock2;
	private: System::Windows::Forms::Label^ labelStock4;
	private: System::Windows::Forms::Label^ labelMasPedidos5;

	private: System::Windows::Forms::Label^ labelMasPedidos4;

	private: System::Windows::Forms::Label^ labelMasPedidos3;

	private: System::Windows::Forms::Label^ labelMasPedidos;
	private: System::Windows::Forms::Label^ labelMasPedidos1;
	private: System::Windows::Forms::Label^ labelMasPedidos2;
	private: System::Windows::Forms::Label^ labelUltimosPedidos;
	private: System::Windows::Forms::Panel^ panelGridView;
	private: System::Windows::Forms::DataGridView^ dataGridViewPedidos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hora;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pedido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Total;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estado;




































































	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panelStockActions = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanelButton = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelMasPedidos5 = (gcnew System::Windows::Forms::Label());
			this->labelMasPedidos4 = (gcnew System::Windows::Forms::Label());
			this->labelMasPedidos3 = (gcnew System::Windows::Forms::Label());
			this->labelMasPedidos = (gcnew System::Windows::Forms::Label());
			this->labelStock5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelStock1 = (gcnew System::Windows::Forms::Label());
			this->labelStock3 = (gcnew System::Windows::Forms::Label());
			this->labelStock2 = (gcnew System::Windows::Forms::Label());
			this->labelStock4 = (gcnew System::Windows::Forms::Label());
			this->labelMasPedidos1 = (gcnew System::Windows::Forms::Label());
			this->labelMasPedidos2 = (gcnew System::Windows::Forms::Label());
			this->panelUltimosPedidos = (gcnew System::Windows::Forms::Panel());
			this->labelUltimosPedidos = (gcnew System::Windows::Forms::Label());
			this->panelCentro = (gcnew System::Windows::Forms::Panel());
			this->panelHoy = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanelTop = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelGastosSemanas = (gcnew System::Windows::Forms::Label());
			this->labelVentasSemana = (gcnew System::Windows::Forms::Label());
			this->labelVentasHoy = (gcnew System::Windows::Forms::Label());
			this->labelGastosHoy = (gcnew System::Windows::Forms::Label());
			this->panelGridView = (gcnew System::Windows::Forms::Panel());
			this->dataGridViewPedidos = (gcnew System::Windows::Forms::DataGridView());
			this->Hora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pedido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panelStockActions->SuspendLayout();
			this->tableLayoutPanelButton->SuspendLayout();
			this->panelUltimosPedidos->SuspendLayout();
			this->panelHoy->SuspendLayout();
			this->tableLayoutPanelTop->SuspendLayout();
			this->panelGridView->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPedidos))->BeginInit();
			this->SuspendLayout();
			// 
			// panelStockActions
			// 
			this->panelStockActions->BackColor = System::Drawing::SystemColors::Control;
			this->panelStockActions->Controls->Add(this->tableLayoutPanelButton);
			this->panelStockActions->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelStockActions->Location = System::Drawing::Point(0, 366);
			this->panelStockActions->Name = L"panelStockActions";
			this->panelStockActions->Size = System::Drawing::Size(668, 121);
			this->panelStockActions->TabIndex = 8;
			// 
			// tableLayoutPanelButton
			// 
			this->tableLayoutPanelButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->tableLayoutPanelButton->ColumnCount = 2;
			this->tableLayoutPanelButton->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelButton->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelButton->Controls->Add(this->labelMasPedidos5, 1, 5);
			this->tableLayoutPanelButton->Controls->Add(this->labelMasPedidos4, 1, 4);
			this->tableLayoutPanelButton->Controls->Add(this->labelMasPedidos3, 1, 3);
			this->tableLayoutPanelButton->Controls->Add(this->labelMasPedidos, 1, 0);
			this->tableLayoutPanelButton->Controls->Add(this->labelStock5, 0, 5);
			this->tableLayoutPanelButton->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanelButton->Controls->Add(this->labelStock1, 0, 1);
			this->tableLayoutPanelButton->Controls->Add(this->labelStock3, 0, 3);
			this->tableLayoutPanelButton->Controls->Add(this->labelStock2, 0, 2);
			this->tableLayoutPanelButton->Controls->Add(this->labelStock4, 0, 4);
			this->tableLayoutPanelButton->Controls->Add(this->labelMasPedidos1, 1, 1);
			this->tableLayoutPanelButton->Controls->Add(this->labelMasPedidos2, 1, 2);
			this->tableLayoutPanelButton->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanelButton->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanelButton->Name = L"tableLayoutPanelButton";
			this->tableLayoutPanelButton->RowCount = 6;
			this->tableLayoutPanelButton->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				16.49011F)));
			this->tableLayoutPanelButton->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				16.49495F)));
			this->tableLayoutPanelButton->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				16.49495F)));
			this->tableLayoutPanelButton->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				16.49495F)));
			this->tableLayoutPanelButton->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				16.49495F)));
			this->tableLayoutPanelButton->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				17.53011F)));
			this->tableLayoutPanelButton->Size = System::Drawing::Size(668, 121);
			this->tableLayoutPanelButton->TabIndex = 0;
			// 
			// labelMasPedidos5
			// 
			this->labelMasPedidos5->AutoSize = true;
			this->labelMasPedidos5->Location = System::Drawing::Point(337, 95);
			this->labelMasPedidos5->Name = L"labelMasPedidos5";
			this->labelMasPedidos5->Size = System::Drawing::Size(121, 16);
			this->labelMasPedidos5->TabIndex = 11;
			this->labelMasPedidos5->Text = L"labelMasPedidos5";
			// 
			// labelMasPedidos4
			// 
			this->labelMasPedidos4->AutoSize = true;
			this->labelMasPedidos4->Location = System::Drawing::Point(337, 76);
			this->labelMasPedidos4->Name = L"labelMasPedidos4";
			this->labelMasPedidos4->Size = System::Drawing::Size(121, 16);
			this->labelMasPedidos4->TabIndex = 10;
			this->labelMasPedidos4->Text = L"labelMasPedidos4";
			// 
			// labelMasPedidos3
			// 
			this->labelMasPedidos3->AutoSize = true;
			this->labelMasPedidos3->Location = System::Drawing::Point(337, 57);
			this->labelMasPedidos3->Name = L"labelMasPedidos3";
			this->labelMasPedidos3->Size = System::Drawing::Size(121, 16);
			this->labelMasPedidos3->TabIndex = 9;
			this->labelMasPedidos3->Text = L"labelMasPedidos3";
			// 
			// labelMasPedidos
			// 
			this->labelMasPedidos->AutoSize = true;
			this->labelMasPedidos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMasPedidos->Location = System::Drawing::Point(337, 0);
			this->labelMasPedidos->Name = L"labelMasPedidos";
			this->labelMasPedidos->Size = System::Drawing::Size(109, 16);
			this->labelMasPedidos->TabIndex = 6;
			this->labelMasPedidos->Text = L"MAS PEDIDAS";
			// 
			// labelStock5
			// 
			this->labelStock5->AutoSize = true;
			this->labelStock5->Location = System::Drawing::Point(3, 95);
			this->labelStock5->Name = L"labelStock5";
			this->labelStock5->Size = System::Drawing::Size(78, 16);
			this->labelStock5->TabIndex = 5;
			this->labelStock5->Text = L"labelStock5";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BAJO STOCK";
			// 
			// labelStock1
			// 
			this->labelStock1->AutoSize = true;
			this->labelStock1->Location = System::Drawing::Point(3, 19);
			this->labelStock1->Name = L"labelStock1";
			this->labelStock1->Size = System::Drawing::Size(78, 16);
			this->labelStock1->TabIndex = 1;
			this->labelStock1->Text = L"labelStock1";
			// 
			// labelStock3
			// 
			this->labelStock3->AutoSize = true;
			this->labelStock3->Location = System::Drawing::Point(3, 57);
			this->labelStock3->Name = L"labelStock3";
			this->labelStock3->Size = System::Drawing::Size(78, 16);
			this->labelStock3->TabIndex = 3;
			this->labelStock3->Text = L"labelStock2";
			// 
			// labelStock2
			// 
			this->labelStock2->AutoSize = true;
			this->labelStock2->Location = System::Drawing::Point(3, 38);
			this->labelStock2->Name = L"labelStock2";
			this->labelStock2->Size = System::Drawing::Size(78, 16);
			this->labelStock2->TabIndex = 2;
			this->labelStock2->Text = L"labelStock2";
			// 
			// labelStock4
			// 
			this->labelStock4->AutoSize = true;
			this->labelStock4->Location = System::Drawing::Point(3, 76);
			this->labelStock4->Name = L"labelStock4";
			this->labelStock4->Size = System::Drawing::Size(78, 16);
			this->labelStock4->TabIndex = 4;
			this->labelStock4->Text = L"labelStock4";
			// 
			// labelMasPedidos1
			// 
			this->labelMasPedidos1->AutoSize = true;
			this->labelMasPedidos1->Location = System::Drawing::Point(337, 19);
			this->labelMasPedidos1->Name = L"labelMasPedidos1";
			this->labelMasPedidos1->Size = System::Drawing::Size(121, 16);
			this->labelMasPedidos1->TabIndex = 7;
			this->labelMasPedidos1->Text = L"labelMasPedidos1";
			// 
			// labelMasPedidos2
			// 
			this->labelMasPedidos2->AutoSize = true;
			this->labelMasPedidos2->Location = System::Drawing::Point(337, 38);
			this->labelMasPedidos2->Name = L"labelMasPedidos2";
			this->labelMasPedidos2->Size = System::Drawing::Size(121, 16);
			this->labelMasPedidos2->TabIndex = 8;
			this->labelMasPedidos2->Text = L"labelMasPedidos2";
			// 
			// panelUltimosPedidos
			// 
			this->panelUltimosPedidos->Controls->Add(this->panelGridView);
			this->panelUltimosPedidos->Controls->Add(this->labelUltimosPedidos);
			this->panelUltimosPedidos->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelUltimosPedidos->Location = System::Drawing::Point(0, 70);
			this->panelUltimosPedidos->Name = L"panelUltimosPedidos";
			this->panelUltimosPedidos->Size = System::Drawing::Size(668, 296);
			this->panelUltimosPedidos->TabIndex = 9;
			// 
			// labelUltimosPedidos
			// 
			this->labelUltimosPedidos->Dock = System::Windows::Forms::DockStyle::Top;
			this->labelUltimosPedidos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUltimosPedidos->Location = System::Drawing::Point(0, 0);
			this->labelUltimosPedidos->Name = L"labelUltimosPedidos";
			this->labelUltimosPedidos->Size = System::Drawing::Size(668, 48);
			this->labelUltimosPedidos->TabIndex = 0;
			this->labelUltimosPedidos->Text = L"ULTIMOS PEDIDOS";
			this->labelUltimosPedidos->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelCentro
			// 
			this->panelCentro->Location = System::Drawing::Point(0, 73);
			this->panelCentro->Name = L"panelCentro";
			this->panelCentro->Size = System::Drawing::Size(667, 316);
			this->panelCentro->TabIndex = 1;
			// 
			// panelHoy
			// 
			this->panelHoy->BackColor = System::Drawing::SystemColors::Info;
			this->panelHoy->Controls->Add(this->tableLayoutPanelTop);
			this->panelHoy->Controls->Add(this->panelCentro);
			this->panelHoy->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelHoy->Location = System::Drawing::Point(0, 0);
			this->panelHoy->Name = L"panelHoy";
			this->panelHoy->Size = System::Drawing::Size(668, 70);
			this->panelHoy->TabIndex = 0;
			// 
			// tableLayoutPanelTop
			// 
			this->tableLayoutPanelTop->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->tableLayoutPanelTop->ColumnCount = 2;
			this->tableLayoutPanelTop->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelTop->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelTop->Controls->Add(this->labelGastosSemanas, 1, 1);
			this->tableLayoutPanelTop->Controls->Add(this->labelVentasSemana, 1, 0);
			this->tableLayoutPanelTop->Controls->Add(this->labelVentasHoy, 0, 0);
			this->tableLayoutPanelTop->Controls->Add(this->labelGastosHoy, 0, 1);
			this->tableLayoutPanelTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanelTop->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanelTop->Name = L"tableLayoutPanelTop";
			this->tableLayoutPanelTop->RowCount = 2;
			this->tableLayoutPanelTop->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelTop->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelTop->Size = System::Drawing::Size(668, 70);
			this->tableLayoutPanelTop->TabIndex = 11;
			// 
			// labelGastosSemanas
			// 
			this->labelGastosSemanas->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelGastosSemanas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGastosSemanas->Location = System::Drawing::Point(337, 35);
			this->labelGastosSemanas->Name = L"labelGastosSemanas";
			this->labelGastosSemanas->Size = System::Drawing::Size(328, 35);
			this->labelGastosSemanas->TabIndex = 9;
			this->labelGastosSemanas->Text = L"GASTOS SEMANA: $-";
			this->labelGastosSemanas->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelVentasSemana
			// 
			this->labelVentasSemana->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelVentasSemana->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelVentasSemana->Location = System::Drawing::Point(337, 0);
			this->labelVentasSemana->Name = L"labelVentasSemana";
			this->labelVentasSemana->Size = System::Drawing::Size(328, 35);
			this->labelVentasSemana->TabIndex = 10;
			this->labelVentasSemana->Text = L"VENTAS SEMANA: $-";
			this->labelVentasSemana->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelVentasHoy
			// 
			this->labelVentasHoy->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelVentasHoy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelVentasHoy->Location = System::Drawing::Point(3, 0);
			this->labelVentasHoy->Name = L"labelVentasHoy";
			this->labelVentasHoy->Size = System::Drawing::Size(328, 35);
			this->labelVentasHoy->TabIndex = 2;
			this->labelVentasHoy->Text = L"VENTAS HOY: $-";
			this->labelVentasHoy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelGastosHoy
			// 
			this->labelGastosHoy->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelGastosHoy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGastosHoy->Location = System::Drawing::Point(3, 35);
			this->labelGastosHoy->Name = L"labelGastosHoy";
			this->labelGastosHoy->Size = System::Drawing::Size(328, 35);
			this->labelGastosHoy->TabIndex = 3;
			this->labelGastosHoy->Text = L"GASTOS HOY: $-";
			this->labelGastosHoy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelGridView
			// 
			this->panelGridView->Controls->Add(this->dataGridViewPedidos);
			this->panelGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelGridView->Location = System::Drawing::Point(0, 48);
			this->panelGridView->Name = L"panelGridView";
			this->panelGridView->Size = System::Drawing::Size(668, 248);
			this->panelGridView->TabIndex = 1;
			// 
			// dataGridViewPedidos
			// 
			this->dataGridViewPedidos->AllowUserToAddRows = false;
			this->dataGridViewPedidos->AllowUserToDeleteRows = false;
			this->dataGridViewPedidos->AllowUserToResizeColumns = false;
			this->dataGridViewPedidos->AllowUserToResizeRows = false;
			this->dataGridViewPedidos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewPedidos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPedidos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Hora,
					this->Pedido, this->Total, this->Estado
			});
			this->dataGridViewPedidos->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewPedidos->Location = System::Drawing::Point(0, 0);
			this->dataGridViewPedidos->Name = L"dataGridViewPedidos";
			this->dataGridViewPedidos->ReadOnly = true;
			this->dataGridViewPedidos->RowHeadersVisible = false;
			this->dataGridViewPedidos->RowHeadersWidth = 51;
			this->dataGridViewPedidos->RowTemplate->Height = 24;
			this->dataGridViewPedidos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridViewPedidos->Size = System::Drawing::Size(668, 248);
			this->dataGridViewPedidos->TabIndex = 103;
			// 
			// Hora
			// 
			this->Hora->HeaderText = L"Hora";
			this->Hora->MinimumWidth = 6;
			this->Hora->Name = L"Hora";
			this->Hora->ReadOnly = true;
			// 
			// Pedido
			// 
			this->Pedido->HeaderText = L"Pedido";
			this->Pedido->MinimumWidth = 6;
			this->Pedido->Name = L"Pedido";
			this->Pedido->ReadOnly = true;
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->MinimumWidth = 6;
			this->Total->Name = L"Total";
			this->Total->ReadOnly = true;
			// 
			// Estado
			// 
			this->Estado->HeaderText = L"Estado";
			this->Estado->MinimumWidth = 6;
			this->Estado->Name = L"Estado";
			this->Estado->ReadOnly = true;
			// 
			// DashboardView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Controls->Add(this->panelUltimosPedidos);
			this->Controls->Add(this->panelStockActions);
			this->Controls->Add(this->panelHoy);
			this->Name = L"DashboardView";
			this->Size = System::Drawing::Size(668, 487);
			this->panelStockActions->ResumeLayout(false);
			this->tableLayoutPanelButton->ResumeLayout(false);
			this->tableLayoutPanelButton->PerformLayout();
			this->panelUltimosPedidos->ResumeLayout(false);
			this->panelHoy->ResumeLayout(false);
			this->tableLayoutPanelTop->ResumeLayout(false);
			this->panelGridView->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPedidos))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
};
}
