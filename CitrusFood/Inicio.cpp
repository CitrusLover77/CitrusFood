#include "LoginForm.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

using namespace CitrusFood;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    CitrusFood::LoginForm^ login = gcnew CitrusFood::LoginForm();

    if (login->ShowDialog() == DialogResult::OK)
    {
        Application::Run(gcnew MainForm());
    }

    return 0;
}
