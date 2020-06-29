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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"x=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(65, 106);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(44, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(65, 144);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(44, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox2_KeyDown_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"y=";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(7, 226);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(112, 22);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(65, 181);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(44, 22);
			this->textBox4->TabIndex = 9;
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox4_KeyDown);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"масса: ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(191, 144);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(44, 22);
			this->textBox5->TabIndex = 11;
			this->textBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox5_KeyDown);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(191, 106);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(44, 22);
			this->textBox6->TabIndex = 12;
			this->textBox6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox6_KeyDown);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(191, 181);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(44, 22);
			this->textBox7->TabIndex = 13;
			this->textBox7->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox7_KeyDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(154, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 17);
			this->label4->TabIndex = 14;
			this->label4->Text = L"x=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(153, 144);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 17);
			this->label5->TabIndex = 15;
			this->label5->Text = L"y=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(130, 186);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"масса: ";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(147, 226);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(112, 22);
			this->textBox8->TabIndex = 17;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(37, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(234, 17);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Какая из точек больше по массе\?";
			// 
			// textBox10
			// 
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(182, 42);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(77, 22);
			this->textBox10->TabIndex = 20;
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(40, 42);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(69, 22);
			this->textBox9->TabIndex = 19;
			// 
			// textBox11
			// 
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(133, 42);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(22, 22);
			this->textBox11->TabIndex = 21;
			// 
			// textBox12
			// 
			this->textBox12->Enabled = false;
			this->textBox12->Location = System::Drawing::Point(147, 285);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(112, 22);
			this->textBox12->TabIndex = 22;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->Enabled = false;
			this->textBox13->Location = System::Drawing::Point(7, 285);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(112, 22);
			this->textBox13->TabIndex = 23;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 265);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(231, 17);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Расстояние от начала координат";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(285, 324);
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
