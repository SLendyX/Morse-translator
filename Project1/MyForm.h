#pragma once
#include <cstring>
#include <cctype>
#include <string>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(209, 267);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14));
			this->richTextBox1->Location = System::Drawing::Point(99, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(322, 96);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13));
			this->richTextBox2->Location = System::Drawing::Point(99, 146);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(322, 100);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(18, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Morse";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->Location = System::Drawing::Point(20, 183);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Text";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 115);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(59, 24);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Switch";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(455, 322);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(471, 361);
			this->MinimumSize = System::Drawing::Size(471, 361);
			this->Name = L"MyForm";
			this->Text = L"MorseTranslator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->richTextBox1->Text = L"";
		this->richTextBox2->Text = L"";
	}

	

	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text == "Text") {
			std::string morse[50] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", ".." ,".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----",".-.-.-" ,"--..--", "..--..", ".----.", "-..-.", "---...", "-.-.-.", "-....-" ,"-...-", "-.-.--", "-.--.", "-.--.-", "/", "|" };
			char abc[] = "abcdefghijklmnopqrstuvwxyz1234567890.,?\':;+-=!() |";
			String^ text = richTextBox1->Text;
			this->richTextBox2->Text = L"";
			for (int i = 0; i < text->Length; i++) {

				int poz = 49;
				char lit = text[i];

				if (lit >= 'A' && lit <= 'Z')
					lit += 32;

				for (int j = 0; j < 50; j++)
					if (lit == abc[j])
						poz = j;

				String^ cuv = gcnew String(morse[poz].c_str());

				this->richTextBox2->Text += cuv;
				this->richTextBox2->Text += " ";
			}
		}
		else {
			std::string morse[51] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", ".." ,".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----",".-.-.-" ,"--..--", "..--..", ".----.", "-..-.", "---...", "-.-.-.", "-....-" ,"-...-", "-.-.--", "-.--.", "-.--.-", "/", "|", "" };
			char abc[] = "abcdefghijklmnopqrstuvwxyz1234567890.,?\':;+-=!() |\0";
			String^ text = richTextBox1->Text;
			this->richTextBox2->Text = L"";

			for (int i = 0; i < text->Length; i++) {
				char cuv1[7] = "";
				int j = 0;

				while (text[i] != ' ' && text[i] != '/') {
					cuv1[j] = text[i];
					i++, j++;
					if (i >= text->Length)
						break;
				}
				int poz = 50;

				for (j = 0; j < 51; j++)
					if (cuv1 == morse[j])
						poz = j;

				char lit = abc[poz];
				std::string str;
				if (lit >= 'a' && lit <= 'z')
					lit -= ' ';
				str += lit;

				String^ cuv = gcnew String(str.c_str());

				this->richTextBox2->Text += cuv;
				if (i >= text->Length)
					break;
				if (text[i] == '/')
					this->richTextBox2->Text += " ";
			}
		}


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "Morse") {
		label1->Text = L"Text";
		label2->Text = L"Morse";
		this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13));
		this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14));
	}
	else {
		label2->Text = L"Text";
		label1->Text = L"Morse";
		this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13));
		this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14));
	}

	
}
};
}
//49
//string morse[] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", ".." ,".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----", ".-.-.-", "--..--", "..--..", ".----.", "-..-.", "---...", "-.-.-.", "-....-", "-...-", "-.-.--", "-.--.", "-.--.-", "|" };
//char abc[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '.', ',', '?', '\'' , ':', ';', '+', '-', '=', '!', '(', ')', '|' };
