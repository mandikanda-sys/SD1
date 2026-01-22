#pragma once

namespace SD1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::VisualBasic;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String^ EncryptDecrypt(String^ text, String^ key) {
			if (String::IsNullOrEmpty(key)) return text;


			array<wchar_t>^ buffer = text->ToCharArray();
			for (int i = 0; i < buffer->Length; i++) {
				buffer[i] = buffer[i] ^ key[i % key->Length];
			}
			return gcnew String(buffer);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ securityToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ encryptionKeyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->securityToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->encryptionKeyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fFileToolStripMenuItem,
					this->securityToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(632, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MainForm::menuStrip1_ItemClicked);
			// 
			// fFileToolStripMenuItem
			// 
			this->fFileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fFileToolStripMenuItem->Name = L"fFileToolStripMenuItem";
			this->fFileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fFileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::exitToolStripMenuItem_Click);
			// 
			// securityToolStripMenuItem
			// 
			this->securityToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->encryptionKeyToolStripMenuItem });
			this->securityToolStripMenuItem->Name = L"securityToolStripMenuItem";
			this->securityToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->securityToolStripMenuItem->Text = L"Security";
			// 
			// encryptionKeyToolStripMenuItem
			// 
			this->encryptionKeyToolStripMenuItem->Name = L"encryptionKeyToolStripMenuItem";
			this->encryptionKeyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->encryptionKeyToolStripMenuItem->Text = L"Encryption Key";
			this->encryptionKeyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::encryptionKeyToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(0, 24);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(632, 334);
			this->textBox1->TabIndex = 1;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(632, 358);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";


		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ content = System::IO::File::ReadAllText(openFileDialog->FileName);
			textBox1->Text = content;
		}
	}
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
	saveFileDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";


	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		System::IO::File::WriteAllText(saveFileDialog->FileName, textBox1->Text);
	}
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	MessageBox::Show("SD1 version 1.0\nCreator: Tresor Manueno Dikanda\nOrganization: VVK",
		"About SD1", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
String^ encryptionKey;

private: System::Void encryptionKeyToolStripMenuItem_Click(
	System::Object^ sender, System::EventArgs^ e) {

	Form^ keyForm = gcnew Form();
	keyForm->Text = "Encryption Key";
	keyForm->Width = 300;
	keyForm->Height = 150;

	TextBox^ keyBox = gcnew TextBox();
	keyBox->Dock = DockStyle::Top;

	Button^ okButton = gcnew Button();
	okButton->Text = "OK";
	okButton->Dock = DockStyle::Bottom;
	okButton->DialogResult =
		System::Windows::Forms::DialogResult::OK;

	keyForm->Controls->Add(keyBox);
	keyForm->Controls->Add(okButton);
	keyForm->AcceptButton = okButton;

	if (keyForm->ShowDialog() ==
		System::Windows::Forms::DialogResult::OK) {

		encryptionKey = keyBox->Text;
	}
}



};
}
