#pragma once

namespace CitrusFood {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void);
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ labelLogin;

	private: System::Windows::Forms::TextBox^ textBoxUser;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxPassword;
	private: System::Windows::Forms::Button^ buttonIngresar;




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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->buttonIngresar = (gcnew System::Windows::Forms::Button());
			this->textBoxUser = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBoxPassword = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelLogin = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->buttonIngresar);
			this->panel1->Controls->Add(this->textBoxUser);
			this->panel1->Controls->Add(this->maskedTextBoxPassword);
			this->panel1->Controls->Add(this->labelLogin);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(482, 453);
			this->panel1->TabIndex = 0;
			// 
			// buttonIngresar
			// 
			this->buttonIngresar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonIngresar->Location = System::Drawing::Point(148, 316);
			this->buttonIngresar->Name = L"buttonIngresar";
			this->buttonIngresar->Size = System::Drawing::Size(185, 50);
			this->buttonIngresar->TabIndex = 2;
			this->buttonIngresar->Text = L"Ingresar";
			this->buttonIngresar->UseVisualStyleBackColor = true;
			this->buttonIngresar->Click += gcnew System::EventHandler(this, &LoginForm::buttonIngresar_Click);
			// 
			// textBoxUser
			// 
			this->textBoxUser->Location = System::Drawing::Point(111, 128);
			this->textBoxUser->Name = L"textBoxUser";
			this->textBoxUser->Size = System::Drawing::Size(272, 22);
			this->textBoxUser->TabIndex = 0;
			// 
			// maskedTextBoxPassword
			// 
			this->maskedTextBoxPassword->Location = System::Drawing::Point(111, 205);
			this->maskedTextBoxPassword->Name = L"maskedTextBoxPassword";
			this->maskedTextBoxPassword->Size = System::Drawing::Size(272, 22);
			this->maskedTextBoxPassword->TabIndex = 1;
			this->maskedTextBoxPassword->UseSystemPasswordChar = true;
			// 
			// labelLogin
			// 
			this->labelLogin->AutoSize = true;
			this->labelLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLogin->Location = System::Drawing::Point(105, 45);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(272, 32);
			this->labelLogin->TabIndex = 0;
			this->labelLogin->Text = L"INICIO DE SESION";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 453);
			this->Controls->Add(this->panel1);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void buttonIngresar_Click(System::Object^ sender, System::EventArgs^ e);
};
}
