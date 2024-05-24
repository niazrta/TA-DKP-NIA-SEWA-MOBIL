#pragma once

namespace SewaKendaraan {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class DaftarKendaraanForm : public System::Windows::Forms::Form {
    public:
        daftarKendaraanForm(void) {
            InitializeComponent();
        }

    protected:
        ~DaftarKendaraanForm() {
            if (components) {
                delete components;
            }
        }

    private: System::Windows::Forms::Button^ backButton;

    private: System::ComponentModel::Container^ components;

           void InitializeComponent(void) {
               this->backButton = gcnew System::Windows::Forms::Button();
               this->SuspendLayout();
               // 
               // backButton
               // 
               this->backButton->Location = System::Drawing::Point(65, 35);
               this->backButton->Name = L"backButton";
               this->backButton->Size = System::Drawing::Size(75, 23);
               this->backButton->TabIndex = 0;
               this->backButton->Text = L"Kembali";
               this->backButton->UseVisualStyleBackColor = true;
               this->backButton->Click += gcnew System::EventHandler(this, &DaftarKendaraanForm::backButton_Click);
               // 
               // DaftarKendaraanForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(240, 180);

