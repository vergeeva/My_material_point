#pragma once
#include "My_Point.h"

namespace SuperPoint {
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
		MyForm(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			A = gcnew my_material_point(100, 100, 100);
			B = gcnew my_material_point(100, 100, 100);
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm() {
			if (components)
			{
				delete components;
			}
		}
		my_material_point^ A;
		my_material_point^ B;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;







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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 174);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"x=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(65, 169);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(44, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(65, 197);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(44, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox2_KeyDown_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 202);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"y=";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(7, 259);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(112, 22);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(65, 225);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(44, 22);
			this->textBox4->TabIndex = 9;
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox4_KeyDown);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 228);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"масса: ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(191, 197);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(44, 22);
			this->textBox5->TabIndex = 11;
			this->textBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox5_KeyDown);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(191, 169);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(44, 22);
			this->textBox6->TabIndex = 12;
			this->textBox6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox6_KeyDown);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(191, 225);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(44, 22);
			this->textBox7->TabIndex = 13;
			this->textBox7->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox7_KeyDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(154, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 17);
			this->label4->TabIndex = 14;
			this->label4->Text = L"x=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(154, 202);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 17);
			this->label5->TabIndex = 15;
			this->label5->Text = L"y=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(130, 228);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"масса: ";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(147, 259);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(112, 22);
			this->textBox8->TabIndex = 17;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(37, 69);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(234, 17);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Какая из точек больше по массе\?";
			// 
			// textBox10
			// 
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(175, 109);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(77, 22);
			this->textBox10->TabIndex = 20;
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(40, 109);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(69, 22);
			this->textBox9->TabIndex = 19;
			// 
			// textBox11
			// 
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(133, 109);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(22, 22);
			this->textBox11->TabIndex = 21;
			// 
			// textBox12
			// 
			this->textBox12->Enabled = false;
			this->textBox12->Location = System::Drawing::Point(147, 312);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(112, 22);
			this->textBox12->TabIndex = 22;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->Enabled = false;
			this->textBox13->Location = System::Drawing::Point(7, 312);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(112, 22);
			this->textBox13->TabIndex = 23;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 284);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(231, 17);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Расстояние от начала координат";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(46, 50);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(22, 17);
			this->label9->TabIndex = 26;
			this->label9->Text = L"x=";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(124, 50);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(23, 17);
			this->label10->TabIndex = 27;
			this->label10->Text = L"y=";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(153, 50);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(44, 22);
			this->textBox14->TabIndex = 28;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(74, 50);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(44, 22);
			this->textBox15->TabIndex = 29;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(9, 29);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(215, 25);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Для двух объектов:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(652, 29);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(286, 25);
			this->label12->TabIndex = 31;
			this->label12->Text = L"Для нескольких объектов:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(49, 116);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 32);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Добавить в список";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(46, 88);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(55, 17);
			this->label13->TabIndex = 33;
			this->label13->Text = L"масса: ";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(103, 88);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(104, 22);
			this->textBox16->TabIndex = 34;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(546, 69);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(493, 269);
			this->dataGridView1->TabIndex = 35;
			// 
			// Column1
			// 
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"№";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->Frozen = true;
			this->Column2->HeaderText = L"Кооординаты";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->Frozen = true;
			this->Column3->HeaderText = L"Масса";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// textBox17
			// 
			this->textBox17->Enabled = false;
			this->textBox17->Location = System::Drawing::Point(793, 344);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(145, 22);
			this->textBox17->TabIndex = 36;
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(665, 348);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(112, 18);
			this->label14->TabIndex = 37;
			this->label14->Text = L"Наибольший:";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->textBox16);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox15);
			this->groupBox1->Controls->Add(this->textBox14);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Location = System::Drawing::Point(296, 109);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(244, 191);
			this->groupBox1->TabIndex = 38;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L" ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(83, 149);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(121, 17);
			this->label15->TabIndex = 39;
			this->label15->Text = L"Введите данные:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(71, 18);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(121, 17);
			this->label16->TabIndex = 40;
			this->label16->Text = L"Введите данные:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(1067, 388);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Материальная точка";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void textBox1_KeyDown_1(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == 13 && textBox1->Text != "") //Второе условие, чтобы не было исключений,
	{
		A->X = Convert::ToDouble(this->textBox1->Text); //когда в пустом окне нажимается enter
		this->textBox3->Text = A->ToString();
		this->textBox13->Text = Convert::ToString(A->Distance());
	}
}
private: System::Void textBox2_KeyDown_1(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == 13 && textBox2->Text != "")
	{
		A->Y = Convert::ToDouble(this->textBox2->Text);
		this->textBox3->Text = A->ToString();
		this->textBox13->Text = Convert::ToString(A->Distance());
	}
}

private: System::Void textBox4_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == 13 && textBox4->Text != "")
	{
		A->M = Convert::ToDouble(this->textBox4->Text);
		this->textBox9->Text = A->ToString_m();
		if (A < B) { this->textBox11->Text = "<"; }
		else
		{
			if (A == B)
				this->textBox11->Text = "=";

			else
			{
				this->textBox11->Text = ">";
			}
		}
	}
}
private: System::Void textBox6_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == 13 && textBox6->Text != "") //Второе условие, чтобы не было исключений,
	{
		B->X = Convert::ToDouble(this->textBox6->Text); //когда в пустом окне нажимается enter
		this->textBox8->Text = B->ToString();
		float j;
		this->textBox12->Text = Convert::ToString(B->Distance());
	}
}
private: System::Void textBox7_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == 13 && textBox7->Text != "")
	{
		B->M = Convert::ToDouble(this->textBox7->Text);
		this->textBox10->Text = B->ToString_m();
		if (A < B) { this->textBox11->Text = "<"; }
		else
		{
			if (A == B)
				this->textBox11->Text = "=";

			else
			{
				this->textBox11->Text = ">";
			}
		}
	}
}
private: System::Void textBox5_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == 13 && textBox5->Text != "")
	{
		B->Y = Convert::ToDouble(this->textBox5->Text);
		this->textBox8->Text = B->ToString();
		this->textBox12->Text = Convert::ToString(B->Distance());
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->textBox3->Text = A->ToString();
	this->textBox9->Text = A->ToString_m();
	this->textBox8->Text = B->ToString();
	this->textBox10->Text = B->ToString_m();
	this->textBox13->Text = Convert::ToString(A->Distance());
	this->textBox12->Text = Convert::ToString(B->Distance());
	if (A < B) { this->textBox11->Text = "<"; }
	else
	{
		if (A == B)
			this->textBox11->Text = "=";

		else
		{
			this->textBox11->Text = ">";
		}
	}
}



};
}
