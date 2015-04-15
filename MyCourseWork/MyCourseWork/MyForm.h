#pragma once

//#include "GoldenSection.cpp"
//#include "MyExceptions.cpp"
#include <math.h>
//#include "Extreme.cpp"

using namespace std;

namespace MyCourseWork {


	//MyExceptions excep;


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bResult;
	private: System::Windows::Forms::TextBox^  tFunction;
	protected:


	private: System::Windows::Forms::Label^  lFunction;
	private: System::Windows::Forms::TextBox^  tEps;




	private: System::Windows::Forms::Label^  lEps;

	private: System::Windows::Forms::Label^  lResult;
	private: System::Windows::Forms::TextBox^  tLeftBorder;
	private: System::Windows::Forms::TextBox^  tRightBorder;





	private: System::Windows::Forms::Label^  lLeftBorder;
	private: System::Windows::Forms::Label^  lRightBorder;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;





	protected:

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->bResult = (gcnew System::Windows::Forms::Button());
			this->tFunction = (gcnew System::Windows::Forms::TextBox());
			this->lFunction = (gcnew System::Windows::Forms::Label());
			this->tEps = (gcnew System::Windows::Forms::TextBox());
			this->lEps = (gcnew System::Windows::Forms::Label());
			this->lResult = (gcnew System::Windows::Forms::Label());
			this->tLeftBorder = (gcnew System::Windows::Forms::TextBox());
			this->tRightBorder = (gcnew System::Windows::Forms::TextBox());
			this->lLeftBorder = (gcnew System::Windows::Forms::Label());
			this->lRightBorder = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bResult
			// 
			this->bResult->Location = System::Drawing::Point(366, 76);
			this->bResult->Name = L"bResult";
			this->bResult->Size = System::Drawing::Size(152, 77);
			this->bResult->TabIndex = 0;
			this->bResult->Text = L"Result";
			this->bResult->UseVisualStyleBackColor = true;
			this->bResult->Click += gcnew System::EventHandler(this, &MyForm::bResult_Click);
			// 
			// tFunction
			// 
			this->tFunction->Location = System::Drawing::Point(21, 76);
			this->tFunction->Name = L"tFunction";
			this->tFunction->Size = System::Drawing::Size(298, 22);
			this->tFunction->TabIndex = 1;
			this->tFunction->Text = L"x*x+9";
			// 
			// lFunction
			// 
			this->lFunction->AutoSize = true;
			this->lFunction->Location = System::Drawing::Point(18, 44);
			this->lFunction->Name = L"lFunction";
			this->lFunction->Size = System::Drawing::Size(53, 13);
			this->lFunction->TabIndex = 2;
			this->lFunction->Text = L"Function";
			// 
			// tEps
			// 
			this->tEps->Location = System::Drawing::Point(62, 184);
			this->tEps->Name = L"tEps";
			this->tEps->Size = System::Drawing::Size(257, 22);
			this->tEps->TabIndex = 4;
			this->tEps->Text = L"0,01";
			// 
			// lEps
			// 
			this->lEps->AutoSize = true;
			this->lEps->Location = System::Drawing::Point(18, 187);
			this->lEps->Name = L"lEps";
			this->lEps->Size = System::Drawing::Size(25, 13);
			this->lEps->TabIndex = 5;
			this->lEps->Text = L"Eps";
			// 
			// lResult
			// 
			this->lResult->AutoSize = true;
			this->lResult->Location = System::Drawing::Point(379, 184);
			this->lResult->Name = L"lResult";
			this->lResult->Size = System::Drawing::Size(0, 13);
			this->lResult->TabIndex = 6;
			// 
			// tLeftBorder
			// 
			this->tLeftBorder->Location = System::Drawing::Point(49, 121);
			this->tLeftBorder->Name = L"tLeftBorder";
			this->tLeftBorder->Size = System::Drawing::Size(93, 22);
			this->tLeftBorder->TabIndex = 7;
			this->tLeftBorder->Text = L"-10";
			// 
			// tRightBorder
			// 
			this->tRightBorder->Location = System::Drawing::Point(219, 121);
			this->tRightBorder->Name = L"tRightBorder";
			this->tRightBorder->Size = System::Drawing::Size(100, 22);
			this->tRightBorder->TabIndex = 8;
			this->tRightBorder->Text = L"10";
			// 
			// lLeftBorder
			// 
			this->lLeftBorder->AutoSize = true;
			this->lLeftBorder->Location = System::Drawing::Point(18, 124);
			this->lLeftBorder->Name = L"lLeftBorder";
			this->lLeftBorder->Size = System::Drawing::Size(17, 13);
			this->lLeftBorder->TabIndex = 9;
			this->lLeftBorder->Text = L"A:";
			// 
			// lRightBorder
			// 
			this->lRightBorder->AutoSize = true;
			this->lRightBorder->Location = System::Drawing::Point(178, 124);
			this->lRightBorder->Name = L"lRightBorder";
			this->lRightBorder->Size = System::Drawing::Size(17, 13);
			this->lRightBorder->TabIndex = 10;
			this->lRightBorder->Text = L"B:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(272, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(91, 44);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(181, 44);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 13;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(544, 274);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lRightBorder);
			this->Controls->Add(this->lLeftBorder);
			this->Controls->Add(this->tRightBorder);
			this->Controls->Add(this->tLeftBorder);
			this->Controls->Add(this->lResult);
			this->Controls->Add(this->lEps);
			this->Controls->Add(this->tEps);
			this->Controls->Add(this->lFunction);
			this->Controls->Add(this->tFunction);
			this->Controls->Add(this->bResult);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void bResult_Click(System::Object^  sender, System::EventArgs^  e)
	{

				 /*GoldenSection g;

				 //try
				 //{
				 g.setFunction(MyConvert::toString(tFunction->Text));
				 //}
				 //catch (const MyExceptions::notValidBrackets)
				 g.setEps(MyConvert::toDouble(tEps->Text));

				 g.setLeftBorder(MyConvert::toDouble(tLeftBorder->Text));
				 g.setRightBorder(MyConvert::toDouble(tRightBorder->Text));

				 g.findMin();
				 double a = g.goldenResult.getMin();
				 lResult->Text = a.ToString() + "\n";
				 g.findMax();
				 a = g.goldenResult.getMax();
				 lResult->Text += (round(a * 10000000) / 10000000.0).ToString() + "\n";
				 */

				/* Extreme extreme;
				 extreme.setEps(MyConvert::toDouble(tEps->Text));
				 extreme.setFunction(MyConvert::toString(tFunction->Text));
				 extreme.setLeftBorder(MyConvert::toDouble(tLeftBorder->Text));
				 extreme.setRightBorder(MyConvert::toDouble(tRightBorder->Text));
				 extreme.findExtremes();
				 double val = extreme.valueOfMin;
				 */
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
