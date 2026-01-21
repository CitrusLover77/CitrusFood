#pragma once
using namespace System;
using namespace System::Windows::Forms;

ref class UiMessageHelper
{
public:
    static void Success(String^ msg)
    {
        MessageBox::Show(msg, "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }

    static void Error(String^ msg)
    {
        MessageBox::Show(msg, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

    static void Warning(String^ msg)
    {
        MessageBox::Show(msg, "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }

    static DialogResult Confirm(String^ msg)
    {
        return MessageBox::Show(
            msg,
            "Confirmar",
            MessageBoxButtons::YesNo,
            MessageBoxIcon::Warning
        );
    }
};
