#pragma once
#include <math.h>

namespace lab2_1 {

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

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ process;
	private: System::Windows::Forms::TextBox^ resultBox;
	private: System::Windows::Forms::TextBox^ xBox;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->process = (gcnew System::Windows::Forms::Button());
			this->resultBox = (gcnew System::Windows::Forms::TextBox());
			this->xBox = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(280, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Використання оператора розгалуження if";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(245, 173);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Войцехівска Ольга";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"x = ";
			// 
			// process
			// 
			this->process->Location = System::Drawing::Point(115, 108);
			this->process->Name = L"process";
			this->process->Size = System::Drawing::Size(114, 23);
			this->process->TabIndex = 4;
			this->process->Text = L"Обчислити";
			this->process->UseVisualStyleBackColor = true;
			this->process->Click += gcnew System::EventHandler(this, &MyForm::process_Click);
			// 
			// resultBox
			// 
			this->resultBox->Location = System::Drawing::Point(170, 80);
			this->resultBox->Name = L"resultBox";
			this->resultBox->Size = System::Drawing::Size(168, 22);
			this->resultBox->TabIndex = 5;
			// 
			// xBox
			// 
			this->xBox->Location = System::Drawing::Point(44, 80);
			this->xBox->Name = L"xBox";
			this->xBox->Size = System::Drawing::Size(100, 22);
			this->xBox->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(61, 29);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(277, 45);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"y = cos(x^2), якщо x < 0\r\ny = ln(x + 1), якщо x >= 0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(377, 216);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->xBox);
			this->Controls->Add(this->resultBox);
			this->Controls->Add(this->process);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void process_Click(System::Object^ sender, System::EventArgs^ e) {
	double x = Convert::ToDouble(this->xBox->Text);
	double y;
	if (x < -1) {
		y = cos(x * x);
		;		this->resultBox->AppendText("result: " + y.ToString());
	}
	else {
		y = exp(-(x * x));
		this->resultBox->AppendText("result: " + y.ToString());
	}
}


};
}
