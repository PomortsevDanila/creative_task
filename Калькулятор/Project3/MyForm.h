#pragma once
#include <ctime>
#include <iostream>
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
private: System::Windows::Forms::TextBox^ txtKoef4;
private: System::Windows::Forms::TextBox^ txtKoef7;
private: System::Windows::Forms::TextBox^ txtKoef8;
private: System::Windows::Forms::TextBox^ txtKoef9;
private: System::Windows::Forms::TextBox^ txtKoef5;
private: System::Windows::Forms::TextBox^ txtKoef2;
private: System::Windows::Forms::TextBox^ txtKoef3;
private: System::Windows::Forms::TextBox^ txtKoef6;
private: System::Windows::Forms::TextBox^ txtKoef1;
private: System::Windows::Forms::Label^ koef2;
private: System::Windows::Forms::Label^ koef3;
private: System::Windows::Forms::Label^ koef4;
private: System::Windows::Forms::Label^ koef7;
private: System::Windows::Forms::Label^ koef5;
private: System::Windows::Forms::Label^ koef8;
private: System::Windows::Forms::Label^ koef6;
private: System::Windows::Forms::Label^ koef9;
private: System::Windows::Forms::TextBox^ result1;
private: System::Windows::Forms::TextBox^ result2;
private: System::Windows::Forms::TextBox^ result3;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ Otvet;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ koef1;
private: System::Windows::Forms::Button^ Clear;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ ResultKoef1;
private: System::Windows::Forms::TextBox^ ResultKoef2;
private: System::Windows::Forms::TextBox^ ResultKoef3;
private: System::Windows::Forms::TextBox^ det1;
private: System::Windows::Forms::TextBox^ det2;
private: System::Windows::Forms::TextBox^ det3;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ allDet1;
private: System::Windows::Forms::TextBox^ allDet2;
private: System::Windows::Forms::TextBox^ allDet3;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtKoef4 = (gcnew System::Windows::Forms::TextBox());
			this->txtKoef7 = (gcnew System::Windows::Forms::TextBox());
			this->txtKoef8 = (gcnew System::Windows::Forms::TextBox());
			this->txtKoef9 = (gcnew System::Windows::Forms::TextBox());
			this->txtKoef5 = (gcnew System::Windows::Forms::TextBox());
			this->txtKoef2 = (gcnew System::Windows::Forms::TextBox());
			this->txtKoef3 = (gcnew System::Windows::Forms::TextBox());
			this->txtKoef6 = (gcnew System::Windows::Forms::TextBox());
			this->txtKoef1 = (gcnew System::Windows::Forms::TextBox());
			this->koef1 = (gcnew System::Windows::Forms::Label());
			this->koef2 = (gcnew System::Windows::Forms::Label());
			this->koef3 = (gcnew System::Windows::Forms::Label());
			this->koef4 = (gcnew System::Windows::Forms::Label());
			this->koef7 = (gcnew System::Windows::Forms::Label());
			this->koef5 = (gcnew System::Windows::Forms::Label());
			this->koef8 = (gcnew System::Windows::Forms::Label());
			this->koef6 = (gcnew System::Windows::Forms::Label());
			this->koef9 = (gcnew System::Windows::Forms::Label());
			this->result1 = (gcnew System::Windows::Forms::TextBox());
			this->result2 = (gcnew System::Windows::Forms::TextBox());
			this->result3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Otvet = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ResultKoef1 = (gcnew System::Windows::Forms::TextBox());
			this->ResultKoef2 = (gcnew System::Windows::Forms::TextBox());
			this->ResultKoef3 = (gcnew System::Windows::Forms::TextBox());
			this->det1 = (gcnew System::Windows::Forms::TextBox());
			this->det2 = (gcnew System::Windows::Forms::TextBox());
			this->det3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->allDet1 = (gcnew System::Windows::Forms::TextBox());
			this->allDet2 = (gcnew System::Windows::Forms::TextBox());
			this->allDet3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtKoef4
			// 
			this->txtKoef4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->txtKoef4->Location = System::Drawing::Point(66, 126);
			this->txtKoef4->Multiline = true;
			this->txtKoef4->Name = L"txtKoef4";
			this->txtKoef4->Size = System::Drawing::Size(77, 37);
			this->txtKoef4->TabIndex = 0;
			this->txtKoef4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// txtKoef7
			// 
			this->txtKoef7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->txtKoef7->Location = System::Drawing::Point(66, 188);
			this->txtKoef7->Multiline = true;
			this->txtKoef7->Name = L"txtKoef7";
			this->txtKoef7->Size = System::Drawing::Size(77, 37);
			this->txtKoef7->TabIndex = 19;
			// 
			// txtKoef8
			// 
			this->txtKoef8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->txtKoef8->Location = System::Drawing::Point(226, 188);
			this->txtKoef8->Multiline = true;
			this->txtKoef8->Name = L"txtKoef8";
			this->txtKoef8->Size = System::Drawing::Size(77, 37);
			this->txtKoef8->TabIndex = 20;
			// 
			// txtKoef9
			// 
			this->txtKoef9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->txtKoef9->Location = System::Drawing::Point(387, 188);
			this->txtKoef9->Multiline = true;
			this->txtKoef9->Name = L"txtKoef9";
			this->txtKoef9->Size = System::Drawing::Size(77, 37);
			this->txtKoef9->TabIndex = 21;
			// 
			// txtKoef5
			// 
			this->txtKoef5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->txtKoef5->Location = System::Drawing::Point(226, 126);
			this->txtKoef5->Multiline = true;
			this->txtKoef5->Name = L"txtKoef5";
			this->txtKoef5->Size = System::Drawing::Size(77, 37);
			this->txtKoef5->TabIndex = 22;
			// 
			// txtKoef2
			// 
			this->txtKoef2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->txtKoef2->Location = System::Drawing::Point(226, 66);
			this->txtKoef2->Multiline = true;
			this->txtKoef2->Name = L"txtKoef2";
			this->txtKoef2->Size = System::Drawing::Size(77, 37);
			this->txtKoef2->TabIndex = 23;
			// 
			// txtKoef3
			// 
			this->txtKoef3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->txtKoef3->Location = System::Drawing::Point(388, 66);
			this->txtKoef3->Multiline = true;
			this->txtKoef3->Name = L"txtKoef3";
			this->txtKoef3->Size = System::Drawing::Size(77, 37);
			this->txtKoef3->TabIndex = 24;
			// 
			// txtKoef6
			// 
			this->txtKoef6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->txtKoef6->Location = System::Drawing::Point(388, 126);
			this->txtKoef6->Multiline = true;
			this->txtKoef6->Name = L"txtKoef6";
			this->txtKoef6->Size = System::Drawing::Size(77, 37);
			this->txtKoef6->TabIndex = 25;
			// 
			// txtKoef1
			// 
			this->txtKoef1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->txtKoef1->Location = System::Drawing::Point(66, 66);
			this->txtKoef1->Multiline = true;
			this->txtKoef1->Name = L"txtKoef1";
			this->txtKoef1->Size = System::Drawing::Size(77, 37);
			this->txtKoef1->TabIndex = 26;
			// 
			// koef1
			// 
			this->koef1->AutoEllipsis = true;
			this->koef1->AutoSize = true;
			this->koef1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->koef1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->koef1->Location = System::Drawing::Point(149, 65);
			this->koef1->Name = L"koef1";
			this->koef1->Size = System::Drawing::Size(65, 38);
			this->koef1->TabIndex = 27;
			this->koef1->Text = L"x +";
			// 
			// koef2
			// 
			this->koef2->AutoSize = true;
			this->koef2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->koef2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->koef2->Location = System::Drawing::Point(312, 65);
			this->koef2->Name = L"koef2";
			this->koef2->Size = System::Drawing::Size(65, 38);
			this->koef2->TabIndex = 28;
			this->koef2->Text = L"y +";
			// 
			// koef3
			// 
			this->koef3->AutoSize = true;
			this->koef3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->koef3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->koef3->Location = System::Drawing::Point(489, 66);
			this->koef3->Name = L"koef3";
			this->koef3->Size = System::Drawing::Size(65, 38);
			this->koef3->TabIndex = 29;
			this->koef3->Text = L"z =";
			// 
			// koef4
			// 
			this->koef4->AutoSize = true;
			this->koef4->BackColor = System::Drawing::SystemColors::HighlightText;
			this->koef4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->koef4->Location = System::Drawing::Point(149, 126);
			this->koef4->Name = L"koef4";
			this->koef4->Size = System::Drawing::Size(65, 38);
			this->koef4->TabIndex = 30;
			this->koef4->Text = L"x +";
			// 
			// koef7
			// 
			this->koef7->AutoSize = true;
			this->koef7->BackColor = System::Drawing::SystemColors::HighlightText;
			this->koef7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->koef7->Location = System::Drawing::Point(149, 187);
			this->koef7->Name = L"koef7";
			this->koef7->Size = System::Drawing::Size(65, 38);
			this->koef7->TabIndex = 31;
			this->koef7->Text = L"x +";
			// 
			// koef5
			// 
			this->koef5->AutoSize = true;
			this->koef5->BackColor = System::Drawing::SystemColors::HighlightText;
			this->koef5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->koef5->Location = System::Drawing::Point(312, 125);
			this->koef5->Name = L"koef5";
			this->koef5->Size = System::Drawing::Size(65, 38);
			this->koef5->TabIndex = 32;
			this->koef5->Text = L"y +";
			// 
			// koef8
			// 
			this->koef8->AutoSize = true;
			this->koef8->BackColor = System::Drawing::SystemColors::HighlightText;
			this->koef8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->koef8->Location = System::Drawing::Point(311, 187);
			this->koef8->Name = L"koef8";
			this->koef8->Size = System::Drawing::Size(65, 38);
			this->koef8->TabIndex = 33;
			this->koef8->Text = L"y +";
			// 
			// koef6
			// 
			this->koef6->AutoSize = true;
			this->koef6->BackColor = System::Drawing::SystemColors::HighlightText;
			this->koef6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->koef6->Location = System::Drawing::Point(489, 125);
			this->koef6->Name = L"koef6";
			this->koef6->Size = System::Drawing::Size(65, 38);
			this->koef6->TabIndex = 34;
			this->koef6->Text = L"z =";
			// 
			// koef9
			// 
			this->koef9->AutoSize = true;
			this->koef9->BackColor = System::Drawing::SystemColors::HighlightText;
			this->koef9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->koef9->Location = System::Drawing::Point(489, 187);
			this->koef9->Name = L"koef9";
			this->koef9->Size = System::Drawing::Size(65, 38);
			this->koef9->TabIndex = 35;
			this->koef9->Text = L"z =";
			// 
			// result1
			// 
			this->result1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->result1->Location = System::Drawing::Point(574, 67);
			this->result1->Multiline = true;
			this->result1->Name = L"result1";
			this->result1->Size = System::Drawing::Size(77, 37);
			this->result1->TabIndex = 36;
			// 
			// result2
			// 
			this->result2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->result2->Location = System::Drawing::Point(574, 127);
			this->result2->Multiline = true;
			this->result2->Name = L"result2";
			this->result2->Size = System::Drawing::Size(77, 37);
			this->result2->TabIndex = 37;
			// 
			// result3
			// 
			this->result3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->result3->Location = System::Drawing::Point(574, 188);
			this->result3->Multiline = true;
			this->result3->Name = L"result3";
			this->result3->Size = System::Drawing::Size(77, 37);
			this->result3->TabIndex = 38;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(61, 334);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 29);
			this->label12->TabIndex = 45;
			this->label12->Text = L"Ответ:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(62, 9);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(531, 29);
			this->label13->TabIndex = 46;
			this->label13->Text = L"Заполните систему линейных уравнений";
			// 
			// Otvet
			// 
			this->Otvet->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Otvet->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Otvet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Otvet->Location = System::Drawing::Point(708, 106);
			this->Otvet->Name = L"Otvet";
			this->Otvet->Size = System::Drawing::Size(167, 39);
			this->Otvet->TabIndex = 47;
			this->Otvet->Text = L"Решить";
			this->Otvet->UseVisualStyleBackColor = false;
			this->Otvet->Click += gcnew System::EventHandler(this, &MyForm::Otvet_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(60, 382);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 38);
			this->label1->TabIndex = 48;
			this->label1->Text = L"x =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(60, 435);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 38);
			this->label2->TabIndex = 49;
			this->label2->Text = L"y =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(60, 491);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 38);
			this->label3->TabIndex = 50;
			this->label3->Text = L"z =";
			// 
			// Clear
			// 
			this->Clear->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Clear->Location = System::Drawing::Point(708, 151);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(167, 39);
			this->Clear->TabIndex = 52;
			this->Clear->Text = L"Очистить";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(-10, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 135);
			this->label4->TabIndex = 54;
			this->label4->Text = L"{";
			// 
			// ResultKoef1
			// 
			this->ResultKoef1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ResultKoef1->Location = System::Drawing::Point(156, 382);
			this->ResultKoef1->Multiline = true;
			this->ResultKoef1->Name = L"ResultKoef1";
			this->ResultKoef1->ReadOnly = true;
			this->ResultKoef1->Size = System::Drawing::Size(242, 37);
			this->ResultKoef1->TabIndex = 55;
			// 
			// ResultKoef2
			// 
			this->ResultKoef2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ResultKoef2->Location = System::Drawing::Point(156, 436);
			this->ResultKoef2->Multiline = true;
			this->ResultKoef2->Name = L"ResultKoef2";
			this->ResultKoef2->ReadOnly = true;
			this->ResultKoef2->Size = System::Drawing::Size(242, 37);
			this->ResultKoef2->TabIndex = 56;
			// 
			// ResultKoef3
			// 
			this->ResultKoef3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ResultKoef3->Location = System::Drawing::Point(156, 490);
			this->ResultKoef3->Multiline = true;
			this->ResultKoef3->Name = L"ResultKoef3";
			this->ResultKoef3->ReadOnly = true;
			this->ResultKoef3->Size = System::Drawing::Size(242, 37);
			this->ResultKoef3->TabIndex = 57;
			// 
			// det1
			// 
			this->det1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->det1->Location = System::Drawing::Point(744, 280);
			this->det1->Multiline = true;
			this->det1->Name = L"det1";
			this->det1->ReadOnly = true;
			this->det1->Size = System::Drawing::Size(82, 37);
			this->det1->TabIndex = 58;
			// 
			// det2
			// 
			this->det2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->det2->Location = System::Drawing::Point(744, 409);
			this->det2->Multiline = true;
			this->det2->Name = L"det2";
			this->det2->ReadOnly = true;
			this->det2->Size = System::Drawing::Size(82, 37);
			this->det2->TabIndex = 59;
			// 
			// det3
			// 
			this->det3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->det3->Location = System::Drawing::Point(744, 535);
			this->det3->Multiline = true;
			this->det3->Name = L"det3";
			this->det3->ReadOnly = true;
			this->det3->Size = System::Drawing::Size(82, 37);
			this->det3->TabIndex = 60;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(727, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 135);
			this->label5->TabIndex = 61;
			this->label5->Text = L"_";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(726, 334);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 135);
			this->label6->TabIndex = 62;
			this->label6->Text = L"_";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(726, 461);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 135);
			this->label7->TabIndex = 63;
			this->label7->Text = L"_";
			// 
			// allDet1
			// 
			this->allDet1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->allDet1->Location = System::Drawing::Point(744, 341);
			this->allDet1->Multiline = true;
			this->allDet1->Name = L"allDet1";
			this->allDet1->ReadOnly = true;
			this->allDet1->Size = System::Drawing::Size(82, 37);
			this->allDet1->TabIndex = 64;
			// 
			// allDet2
			// 
			this->allDet2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->allDet2->Location = System::Drawing::Point(744, 470);
			this->allDet2->Multiline = true;
			this->allDet2->Name = L"allDet2";
			this->allDet2->ReadOnly = true;
			this->allDet2->Size = System::Drawing::Size(82, 37);
			this->allDet2->TabIndex = 65;
			// 
			// allDet3
			// 
			this->allDet3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->allDet3->Location = System::Drawing::Point(744, 596);
			this->allDet3->Multiline = true;
			this->allDet3->Name = L"allDet3";
			this->allDet3->ReadOnly = true;
			this->allDet3->Size = System::Drawing::Size(82, 37);
			this->allDet3->TabIndex = 66;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(659, 301);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 25);
			this->label8->TabIndex = 67;
			this->label8->Text = L"Δ1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(659, 423);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 25);
			this->label9->TabIndex = 68;
			this->label9->Text = L"Δ2";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(659, 555);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 25);
			this->label10->TabIndex = 69;
			this->label10->Text = L"Δ3";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(663, 336);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(27, 25);
			this->label11->TabIndex = 70;
			this->label11->Text = L"Δ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(663, 464);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(27, 25);
			this->label14->TabIndex = 71;
			this->label14->Text = L"Δ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(663, 595);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(27, 25);
			this->label15->TabIndex = 72;
			this->label15->Text = L"Δ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(648, 267);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(63, 69);
			this->label16->TabIndex = 73;
			this->label16->Text = L"_";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(648, 524);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(63, 69);
			this->label17->TabIndex = 74;
			this->label17->Text = L"_";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(648, 392);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(63, 69);
			this->label18->TabIndex = 75;
			this->label18->Text = L"_";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(702, 310);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(37, 38);
			this->label19->TabIndex = 76;
			this->label19->Text = L"=";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(702, 435);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(37, 38);
			this->label20->TabIndex = 77;
			this->label20->Text = L"=";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(701, 568);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(37, 38);
			this->label21->TabIndex = 78;
			this->label21->Text = L"=";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HighlightText;
			this->ClientSize = System::Drawing::Size(896, 650);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->allDet3);
			this->Controls->Add(this->allDet2);
			this->Controls->Add(this->allDet1);
			this->Controls->Add(this->det3);
			this->Controls->Add(this->det2);
			this->Controls->Add(this->det1);
			this->Controls->Add(this->ResultKoef3);
			this->Controls->Add(this->ResultKoef2);
			this->Controls->Add(this->ResultKoef1);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Otvet);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->result3);
			this->Controls->Add(this->result2);
			this->Controls->Add(this->result1);
			this->Controls->Add(this->koef9);
			this->Controls->Add(this->koef6);
			this->Controls->Add(this->koef8);
			this->Controls->Add(this->koef5);
			this->Controls->Add(this->koef7);
			this->Controls->Add(this->koef4);
			this->Controls->Add(this->koef3);
			this->Controls->Add(this->koef2);
			this->Controls->Add(this->koef1);
			this->Controls->Add(this->txtKoef1);
			this->Controls->Add(this->txtKoef6);
			this->Controls->Add(this->txtKoef3);
			this->Controls->Add(this->txtKoef2);
			this->Controls->Add(this->txtKoef5);
			this->Controls->Add(this->txtKoef9);
			this->Controls->Add(this->txtKoef8);
			this->Controls->Add(this->txtKoef7);
			this->Controls->Add(this->txtKoef4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ operators;
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	// Проверка на заполненность текстбоксов
private: System::Void Otvet_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtKoef1->Text == "" || txtKoef2->Text == "" || txtKoef3->Text == "" || txtKoef4->Text == "" || txtKoef5->Text == "" ||
		txtKoef6->Text == "" || txtKoef7->Text == "" || txtKoef8->Text == "" || txtKoef9->Text == "" || result1->Text == "" || 
		result2->Text == "" || result3->Text == "") {
		MessageBox::Show("Звполните все поля", "ERROR!!!");
	}
	// Нахождение и записывание значений коефицентов в текст боксы
	else {	
		double kf_11 = Convert::ToDouble(txtKoef1->Text);
		double kf_12 = Convert::ToDouble(txtKoef2->Text);
		double kf_13 = Convert::ToDouble(txtKoef3->Text);
		double kf_21 = Convert::ToDouble(txtKoef4->Text);
		double kf_22 = Convert::ToDouble(txtKoef5->Text);
		double kf_23 = Convert::ToDouble(txtKoef6->Text);
		double kf_31 = Convert::ToDouble(txtKoef7->Text);
		double kf_32 = Convert::ToDouble(txtKoef8->Text);
		double kf_33 = Convert::ToDouble(txtKoef9->Text);
		double rs_1 = Convert::ToDouble(result1->Text);
		double rs_2 = Convert::ToDouble(result2->Text);
		double rs_3 = Convert::ToDouble(result3->Text);
		// Решение методом Крамера
		double allDet = (kf_11 * kf_22 * kf_33 + kf_12 * kf_23 * kf_31 + kf_21 * kf_32 * kf_13) - (kf_13 * kf_22 * kf_31 + kf_12 * kf_21 * kf_33 + kf_11 * kf_23 * kf_32);
		double DetFS = (rs_1 * kf_22 * kf_33 + kf_12 * kf_23 * rs_3 + rs_2 * kf_32 * kf_13) - (kf_13 * kf_22 * rs_3 + kf_12 * rs_2 * kf_33 + rs_1 * kf_23 * kf_32);
		double DetSC = (kf_11 * rs_2 * kf_33 + rs_1 * kf_23 * kf_31 + kf_21 * rs_3 * kf_13) - (kf_13 * rs_2 * kf_31 + rs_1 * kf_21 * kf_33 + kf_11 * kf_23 * rs_3);
		double DetTH = (kf_11 * kf_22 * rs_3 + kf_12 * rs_2 * kf_31 + kf_21 * kf_32 * rs_1) - (rs_1 * kf_22 * kf_31 + kf_12 * kf_21 * rs_3 + kf_11 * rs_2 * kf_32);
		// Запись значений в текстбоксы ответов
		ResultKoef1->Text = Convert::ToString(DetFS / allDet);
		ResultKoef2->Text = Convert::ToString(DetSC / allDet);
		ResultKoef3->Text = Convert::ToString(DetTH / allDet);
		// Запись значений в текстбоксы определителей 
		det1->Text = Convert::ToString(DetFS);
		det2->Text = Convert::ToString(DetSC);
		det3->Text = Convert::ToString(DetTH);
		allDet1->Text = Convert::ToString(allDet);
		allDet2->Text = Convert::ToString(allDet);
		allDet3->Text = Convert::ToString(allDet);
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
	// Кнопка очистки
private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
	txtKoef1->Text = "";
	txtKoef2->Text = "";
	txtKoef3->Text = "";
	txtKoef4->Text = "";
	txtKoef5->Text = "";
	txtKoef6->Text = "";
	txtKoef7->Text = "";
	txtKoef8->Text = "";
	txtKoef9->Text = "";

	result1->Text = "";
	result2->Text = "";
	result3->Text = "";

	ResultKoef1->Text = "";
	ResultKoef2->Text = "";
	ResultKoef3->Text = "";

	det1->Text = "";
	det2->Text = "";
	det3->Text = "";

	allDet1->Text = "";
	allDet2->Text = "";
	allDet3->Text = "";
}
};
}
