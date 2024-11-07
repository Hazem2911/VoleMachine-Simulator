#pragma once
#include <msclr\marshal_cppstd.h>
#include"source.cpp"
namespace guiTest {

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;














	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ fetchbutton4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ decodebutton5;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ excutebutton;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ addressmemory;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ hexmemory;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ floatmemory;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ addressregister;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ hexregister;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ floatregister;












	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->addressmemory = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hexmemory = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->floatmemory = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->addressregister = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hexregister = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->floatregister = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->fetchbutton4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->decodebutton5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->excutebutton = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(175, 638);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(202, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"store";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->addressmemory,
					this->hexmemory, this->floatmemory
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 51);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(245, 439);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// addressmemory
			// 
			this->addressmemory->HeaderText = L"Address";
			this->addressmemory->Name = L"addressmemory";
			// 
			// hexmemory
			// 
			this->hexmemory->HeaderText = L"Hex";
			this->hexmemory->Name = L"hexmemory";
			// 
			// floatmemory
			// 
			this->floatmemory->HeaderText = L"Float";
			this->floatmemory->Name = L"floatmemory";
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->addressregister,
					this->hexregister, this->floatregister
			});
			this->dataGridView2->Location = System::Drawing::Point(300, 51);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(236, 439);
			this->dataGridView2->TabIndex = 2;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// addressregister
			// 
			this->addressregister->HeaderText = L"Address";
			this->addressregister->Name = L"addressregister";
			// 
			// hexregister
			// 
			this->hexregister->HeaderText = L"Hex";
			this->hexregister->Name = L"hexregister";
			// 
			// floatregister
			// 
			this->floatregister->HeaderText = L"Float";
			this->floatregister->Name = L"floatregister";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(45, 498);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(197, 41);
			this->button2->TabIndex = 3;
			this->button2->Text = L"clear memory";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(315, 498);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(197, 41);
			this->button3->TabIndex = 4;
			this->button3->Text = L"clear register";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(175, 586);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(74, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(255, 586);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"starting point ";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(175, 612);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(635, 70);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(142, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// fetchbutton4
			// 
			this->fetchbutton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fetchbutton4->Location = System::Drawing::Point(635, 96);
			this->fetchbutton4->Name = L"fetchbutton4";
			this->fetchbutton4->Size = System::Drawing::Size(142, 38);
			this->fetchbutton4->TabIndex = 10;
			this->fetchbutton4->Text = L"fetch";
			this->fetchbutton4->UseVisualStyleBackColor = true;
			this->fetchbutton4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(603, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(210, 29);
			this->label3->TabIndex = 11;
			this->label3->Text = L"instruction resigter";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(617, 178);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(205, 20);
			this->textBox4->TabIndex = 12;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(679, 259);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(41, 20);
			this->textBox7->TabIndex = 16;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(615, 258);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 18);
			this->label4->TabIndex = 17;
			this->label4->Text = L"opcode";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// decodebutton5
			// 
			this->decodebutton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decodebutton5->Location = System::Drawing::Point(635, 204);
			this->decodebutton5->Name = L"decodebutton5";
			this->decodebutton5->Size = System::Drawing::Size(142, 38);
			this->decodebutton5->TabIndex = 18;
			this->decodebutton5->Text = L"Decode";
			this->decodebutton5->UseVisualStyleBackColor = true;
			this->decodebutton5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(613, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(190, 29);
			this->label2->TabIndex = 22;
			this->label2->Text = L"program counter";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(763, 288);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(41, 20);
			this->textBox5->TabIndex = 23;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(763, 259);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(41, 20);
			this->textBox6->TabIndex = 24;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(763, 314);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(41, 20);
			this->textBox8->TabIndex = 25;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// excutebutton
			// 
			this->excutebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->excutebutton->Location = System::Drawing::Point(635, 477);
			this->excutebutton->Name = L"excutebutton";
			this->excutebutton->Size = System::Drawing::Size(142, 38);
			this->excutebutton->TabIndex = 26;
			this->excutebutton->Text = L"Excute";
			this->excutebutton->UseVisualStyleBackColor = true;
			this->excutebutton->Click += gcnew System::EventHandler(this, &MyForm::excutebutton_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(726, 261);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 18);
			this->label5->TabIndex = 27;
			this->label5->Text = L"R : ";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(726, 290);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 18);
			this->label6->TabIndex = 28;
			this->label6->Text = L"X : ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(726, 316);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 18);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Y : ";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(635, 533);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(142, 38);
			this->button5->TabIndex = 31;
			this->button5->Text = L"Run till halt";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(617, 354);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(179, 106);
			this->richTextBox1->TabIndex = 32;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(52, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(158, 29);
			this->label8->TabIndex = 33;
			this->label8->Text = L"Main Memory";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(286, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(272, 29);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Control  Processing Unit";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(910, 747);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->excutebutton);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->decodebutton5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->fetchbutton4);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ currentText;
		int start;

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i <= 255; i++)
		{
			String^ address = i.ToString("X2");
			String^ hex = "00";
			String^ Float = "00";

			dataGridView1->Rows->Add(address, hex, Float);
		}
		for (int i = 0; i <= 15; i++)
		{
			String^ address = i < 10 ? i.ToString() : Convert::ToChar(i + 55).ToString();
			String^ hex = "00";
			String^ Float = "00";


			dataGridView2->Rows->Add(address, hex, Float);
		}
		textBox1->Text = "00";
		textBox3->Text = "00";
	}
		   //clear memory button
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Clear();
		for (int i = 0; i <= 255; i++)
		{
			String^ address = i.ToString("X2");
			String^ hex = "00";

			dataGridView1->Rows->Add(address, hex);
		}
		mm.clear_memory();



	}
		   /* clear regester button */
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		dataGridView2->Rows->Clear();
		for (int i = 0; i <= 15; i++)
		{
			String^ address = i < 10 ? i.ToString() : Convert::ToChar(i + 55).ToString();
			String^ hex = "00";


			dataGridView2->Rows->Add(address, hex);
		}
		reg.clear_regester();

	}
		   //starting point text
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->MaxLength = 2;
	}
		   //label starting button
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //fetch button
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ pointingpoint = textBox3->Text;
		std::string pointingpoint2 = someFunction(pointingpoint);
		point = ALU::hextodec(pointingpoint2);

		cc.fetch(point, mm);
		point += 2;
		textBox4->Text = c_system(cc.get_ir());
		textBox3->Text = c_system(ALU::dectohex(point));


	}

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //data grid table for regester
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   // decode button
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {



		// Prepare variables to hold the decoded instruction parts
		std::string opcode, R, X, Y, textbox;

		// Decode the fetched instruction
		cc.decode(opcode, R, X, Y, textbox);

		// Display each part in the corresponding textboxes
		textBox7->Text = gcnew System::String(opcode.c_str()); // opcode
		textBox6->Text = gcnew System::String(R.c_str());      // r
		textBox5->Text = gcnew System::String(X.c_str());      // x
		textBox8->Text = gcnew System::String(Y.c_str());      // y

		//// Optionally, set the decoded explanation in another textbox
		richTextBox1->Text = gcnew System::String(textbox.c_str()); // Optional explanation of instruction
	}


	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   // store  button
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ startingpoint = textBox1->Text;
		std::string startpoint2 = someFunction(startingpoint);    // Convert System::String^ to std::string
		start = ALU::hextodec(startpoint2);
		currentText = textBox2->Text;
		mama = someFunction(currentText);
		add(start, mama, mm);
		dataGridView1->Rows->Clear();
		for (int i = 0; i <= 255; i++)
		{
			String^ address = i.ToString("X2");
			String^ hex = mm.get_cell(i);

			dataGridView1->Rows->Add(address, hex);

		}
		start += 2;
		std::string ss = ALU::dectohex(start);
		textBox1->Text = c_system(ss);
		textBox2->Clear();




	}//store button
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
		   /*run till halt*/
	private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::MessageBox::Show("Make sure that you include a c000 .",
			"preventing infinty loop",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
		bool ok = true;  // Use a flag to control execution until the halt instruction
		int instructionAddress = point;  // Initialize the starting point from the 'point' variable

		// Loop to execute instructions until the halt instruction "C000" is encountered
		while (ok) {
			// Fetch the instruction at the current address
			cc.fetch(instructionAddress, mm);

			// Display the current instruction in the instruction register textbox
			textBox4->Text = c_system(cc.get_ir());

			// Check if the fetched instruction is "C000" (halt)
			if (cc.get_ir() == "C000") {
				ok = false;  // Stop execution if halt instruction is encountered
				break;
			}

			// Decode and execute the current instruction
			cc.execute(mm, reg, ok);

			// Clear and refresh the GUI to show the current state of memory and registers
			dataGridView1->Rows->Clear();
			dataGridView2->Rows->Clear();

			for (int i = 0; i <= 255; i++) {
				String^ address = i.ToString("X2");
				String^ hex = mm.get_cell(i);
				String^ Float = "00";  // Adjust if there's an actual float representation

				dataGridView1->Rows->Add(address, hex, Float);
			}

			for (int i = 0; i <= 15; i++) {
				String^ address = i < 10 ? i.ToString() : Convert::ToChar(i + 55).ToString();
				String^ hex = reg.get_cell(i);
				String^ Float = "00";  // Adjust if there's an actual float representation

				dataGridView2->Rows->Add(address, hex, Float);
			}

			// Move to the next instruction address (increment by 2, or by the size of each instruction)
			instructionAddress += 2;
		}

		// Update the address display after execution is complete
		textBox3->Text = c_system(ALU::dectohex(instructionAddress));

		// Display a message to indicate that execution has stopped
		System::Windows::Forms::MessageBox::Show("CPU execution has been halted.",
			"Execution Complete",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox2->MaxLength = 4;

	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox3->MaxLength = 2;

		//for two input maximum






	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   //excute button
	private: System::Void excutebutton_Click(System::Object^ sender, System::EventArgs^ e) {
		cc.execute(mm, reg, ok);
		dataGridView1->Rows->Clear();
		dataGridView2->Rows->Clear();
		for (int i = 0; i <= 255; i++)
		{
			String^ address = i.ToString("X2");
			String^ hex = mm.get_cell(i);
			String^ Float = "00";

			dataGridView1->Rows->Add(address, hex, Float);
		}
		for (int i = 0; i <= 15; i++)
		{
			String^ address = i < 10 ? i.ToString() : Convert::ToChar(i + 55).ToString();
			String^ hex = reg.get_cell(i);
			String^ Float = "00";


			dataGridView2->Rows->Add(address, hex, Float);
		}
		textBox3->Text = c_system(ALU::dectohex(point));
		System::Windows::Forms::MessageBox::Show("CPU execution has been halted.",
			"succesfully",
			MessageBoxButtons::OK,
			MessageBoxIcon::Question);


	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
