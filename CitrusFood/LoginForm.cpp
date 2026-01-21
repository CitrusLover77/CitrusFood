#include "LoginForm.h"
#include "UiMessageHelper.h"
#include "AuthService.h"
#include "MainForm.h"
//Constructor
CitrusFood::LoginForm::LoginForm(void)
{
	InitializeComponent();

}

//Button login
void CitrusFood::LoginForm::buttonIngresar_Click(System::Object^ sender, System::EventArgs^e) {
    String^ user = textBoxUser->Text->Trim();
    String^ password = maskedTextBoxPassword->Text->Trim();

    if (user == "" || password == "")
    {
        UiMessageHelper::Warning("Complete los campos");
        return;
    }

    if (AuthService::Login(user, password))
    {
        UiMessageHelper::Success("Login correcto");
        this->DialogResult = System::Windows::Forms::DialogResult::OK;
        this->Close();
    }
    else
    {
        UiMessageHelper::Error("Usuario o contraseña incorrectos");
    }
}
