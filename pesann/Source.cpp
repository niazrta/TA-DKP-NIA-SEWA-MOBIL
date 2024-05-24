#include "DaftarKendaraanForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    SewaKendaraan::DaftarKendaraanForm form;
    Application::Run(% form);
}

System::Void SewaKendaraan::DaftarKendaraanForm::backButton_Click(System::Object^ sender, System::EventArgs^ e) {
    // Kembali ke formulir sebelumnya (misalnya: LoginForm)
    LoginForm^ loginForm = gcnew LoginForm();
    loginForm->Show();
    this->Hide(); // Menyembunyikan formulir ini
}
