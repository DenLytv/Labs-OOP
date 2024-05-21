#pragma once
#include <cmath>

namespace Lab81 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	protected:

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbFactNum;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lbFactRes;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbTaylorN;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbTaylorX;

	private: System::Windows::Forms::Button^ btnTailor;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lbTaylorResult;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lbBuiltInresult;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ tbFirtsCat;
	private: System::Windows::Forms::TextBox^ tbSecondCat;
	private: System::Windows::Forms::Button^ btnTriangle;




	private: System::Windows::Forms::Label^ lbTriangle;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;





	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbFactNum = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbFactRes = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbTaylorN = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbTaylorX = (gcnew System::Windows::Forms::TextBox());
			this->btnTailor = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lbTaylorResult = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lbBuiltInresult = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tbFirtsCat = (gcnew System::Windows::Forms::TextBox());
			this->tbSecondCat = (gcnew System::Windows::Forms::TextBox());
			this->btnTriangle = (gcnew System::Windows::Forms::Button());
			this->lbTriangle = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(249, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter a positive integer (< 21)";
			// 
			// tbFactNum
			// 
			this->tbFactNum->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbFactNum->Location = System::Drawing::Point(263, 13);
			this->tbFactNum->Name = L"tbFactNum";
			this->tbFactNum->Size = System::Drawing::Size(297, 22);
			this->tbFactNum->TabIndex = 2;
			this->tbFactNum->TextChanged += gcnew System::EventHandler(this, &MainForm::tbFactNum_TextChanged);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(8, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 22);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Result:";
			// 
			// lbFactRes
			// 
			this->lbFactRes->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbFactRes->AutoSize = true;
			this->lbFactRes->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbFactRes->Location = System::Drawing::Point(80, 45);
			this->lbFactRes->Name = L"lbFactRes";
			this->lbFactRes->Size = System::Drawing::Size(0, 22);
			this->lbFactRes->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(11, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(368, 22);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Enter number of members of the series (< 31)";
			// 
			// tbTaylorN
			// 
			this->tbTaylorN->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbTaylorN->Location = System::Drawing::Point(389, 11);
			this->tbTaylorN->Name = L"tbTaylorN";
			this->tbTaylorN->Size = System::Drawing::Size(171, 22);
			this->tbTaylorN->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(9, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(151, 22);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Enter real number";
			// 
			// tbTaylorX
			// 
			this->tbTaylorX->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbTaylorX->Location = System::Drawing::Point(166, 44);
			this->tbTaylorX->Name = L"tbTaylorX";
			this->tbTaylorX->Size = System::Drawing::Size(394, 22);
			this->tbTaylorX->TabIndex = 9;
			// 
			// btnTailor
			// 
			this->btnTailor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnTailor->Location = System::Drawing::Point(13, 145);
			this->btnTailor->Name = L"btnTailor";
			this->btnTailor->Size = System::Drawing::Size(547, 61);
			this->btnTailor->TabIndex = 11;
			this->btnTailor->Text = L"Calculate";
			this->btnTailor->UseVisualStyleBackColor = true;
			this->btnTailor->Click += gcnew System::EventHandler(this, &MainForm::btnTailor_Click);
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(11, 78);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 22);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Result:";
			// 
			// lbTaylorResult
			// 
			this->lbTaylorResult->AutoSize = true;
			this->lbTaylorResult->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbTaylorResult->Location = System::Drawing::Point(83, 78);
			this->lbTaylorResult->Name = L"lbTaylorResult";
			this->lbTaylorResult->Size = System::Drawing::Size(0, 22);
			this->lbTaylorResult->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(11, 111);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(221, 22);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Result by built-in function:";
			// 
			// lbBuiltInresult
			// 
			this->lbBuiltInresult->AutoSize = true;
			this->lbBuiltInresult->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbBuiltInresult->Location = System::Drawing::Point(232, 110);
			this->lbBuiltInresult->Name = L"lbBuiltInresult";
			this->lbBuiltInresult->Size = System::Drawing::Size(0, 22);
			this->lbBuiltInresult->TabIndex = 15;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(8, 6);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(140, 22);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Enter first cathet";
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(8, 41);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(163, 22);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Enter second cathet";
			// 
			// tbFirtsCat
			// 
			this->tbFirtsCat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbFirtsCat->Location = System::Drawing::Point(154, 6);
			this->tbFirtsCat->Name = L"tbFirtsCat";
			this->tbFirtsCat->Size = System::Drawing::Size(406, 22);
			this->tbFirtsCat->TabIndex = 19;
			// 
			// tbSecondCat
			// 
			this->tbSecondCat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbSecondCat->Location = System::Drawing::Point(179, 41);
			this->tbSecondCat->Name = L"tbSecondCat";
			this->tbSecondCat->Size = System::Drawing::Size(381, 22);
			this->tbSecondCat->TabIndex = 20;
			// 
			// btnTriangle
			// 
			this->btnTriangle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnTriangle->Location = System::Drawing::Point(12, 111);
			this->btnTriangle->Name = L"btnTriangle";
			this->btnTriangle->Size = System::Drawing::Size(548, 95);
			this->btnTriangle->TabIndex = 22;
			this->btnTriangle->Text = L"Calculate";
			this->btnTriangle->UseVisualStyleBackColor = true;
			this->btnTriangle->Click += gcnew System::EventHandler(this, &MainForm::btnTriangle_Click);
			// 
			// lbTriangle
			// 
			this->lbTriangle->AutoSize = true;
			this->lbTriangle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbTriangle->Location = System::Drawing::Point(74, 75);
			this->lbTriangle->Name = L"lbTriangle";
			this->lbTriangle->Size = System::Drawing::Size(0, 22);
			this->lbTriangle->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(8, 75);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(66, 22);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Result:";
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(581, 242);
			this->tabControl1->TabIndex = 25;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->tbFactNum);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->lbFactRes);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(573, 213);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Factorial";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->lbBuiltInresult);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->tbTaylorN);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->tbTaylorX);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->lbTaylorResult);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->btnTailor);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(573, 213);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Taylor";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->btnTriangle);
			this->tabPage3->Controls->Add(this->lbTriangle);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->tbSecondCat);
			this->tabPage3->Controls->Add(this->tbFirtsCat);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(573, 213);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Triangle area";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(576, 235);
			this->Controls->Add(this->tabControl1);
			this->MinimumSize = System::Drawing::Size(594, 282);
			this->Name = L"MainForm";
			this->Text = L"Math operations";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tbFactNum_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			int num = System::Convert::ToInt32(tbFactNum->Text);
			if (num > 20) throw "";
			MathLibrary::MathFunc mathFunc;
			lbFactRes->Text = System::Convert::ToString(mathFunc.factorial(num));
		}
		catch (System::FormatException^) {
			lbFactRes->Text = "You've entered invalid value. Please enter a positive integer";
		}
		catch (...) {
			lbFactRes->Text = "You've entered invalid value. Please enter a positive integer";
		}
	}
	private: System::Void btnTailor_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int n = System::Convert::ToInt32(tbTaylorN->Text);
			double x = System::Convert::ToDouble(tbTaylorX->Text);
			if (n > 30) throw "";
			MathLibrary::MathFunc mathFunc;
			lbTaylorResult->Text = System::Convert::ToString(mathFunc.taylor(x, n));
			lbBuiltInresult->Text = System::Convert::ToString(cos(x));
		}
		catch (System::FormatException^) {
			lbTaylorResult->Text = "You've entered invalid values.";
			lbBuiltInresult->Text = "You've entered invalid values.";
		}
		catch (...) {
			lbTaylorResult->Text = "You've entered invalid values.";
			lbBuiltInresult->Text = "You've entered invalid values.";
		}
	}
	private: System::Void btnTriangle_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			double cat1 = System::Convert::ToDouble(tbFirtsCat->Text);
			double cat2 = System::Convert::ToDouble(tbSecondCat->Text);
			MathLibrary::MathFunc mathFunc;
			lbTriangle->Text = System::Convert::ToString(mathFunc.calcTriangleArea(cat1, cat2));
		}
		catch (System::FormatException^) {
			lbTriangle->Text = "You've entered invalid values.";
		}
	}
	};
}
