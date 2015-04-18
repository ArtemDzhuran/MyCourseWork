#pragma once

#include "GoldenSection.h"
#include "MyExceptions.h"
#include <math.h>
#include "Extreme.h"

using namespace std;

namespace MyCourseWork {


	MyExceptions excep;


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

	private: System::Windows::Forms::TextBox^  tFunction;
	protected:


	private: System::Windows::Forms::Label^  lFunction;
	private: System::Windows::Forms::TextBox^  tEps;




	private: System::Windows::Forms::Label^  lEps;



	private: System::Windows::Forms::TextBox^  tLeftBorder;
	private: System::Windows::Forms::TextBox^  tRightBorder;





	private: System::Windows::Forms::Label^  lLeftBorder;
	private: System::Windows::Forms::Label^  lRightBorder;
	private: System::Windows::Forms::Button^  bMul;

	private: System::Windows::Forms::Button^  bMinus;

	private: System::Windows::Forms::Button^  bPlus;



	private: System::Windows::Forms::Button^  bDiv;
	private: System::Windows::Forms::Button^  bTan;


	private: System::Windows::Forms::Button^  bCtan;

	private: System::Windows::Forms::Button^  bSin;
	private: System::Windows::Forms::Button^  bCos;
	private: System::Windows::Forms::Button^  bLeftBracket;



	private: System::Windows::Forms::Button^  bRightBracket;

	private: System::Windows::Forms::Button^  bPow;

	private: System::Windows::Forms::Button^  bLn;
	private: System::Windows::Forms::Button^  bNull;

	private: System::Windows::Forms::Button^  bOne;
	private: System::Windows::Forms::Button^  bTwo;





	private: System::Windows::Forms::Button^  bThree;
	private: System::Windows::Forms::Button^  bFour;


	private: System::Windows::Forms::Button^  bFive;

	private: System::Windows::Forms::Button^  bSix;

	private: System::Windows::Forms::Button^  bSeven;
	private: System::Windows::Forms::Button^  bEight;
	private: System::Windows::Forms::Button^  bNine;
	private: System::Windows::Forms::Button^  bComa;




	private: System::Windows::Forms::Button^  bSqrt;
	private: System::Windows::Forms::Button^  bBack;


	private: System::Windows::Forms::Button^  bClear;
	private: System::Windows::Forms::Button^  bXVariable;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::RadioButton^  rbMin;
private: System::Windows::Forms::Label^  lDerivative;
private: System::Windows::Forms::Button^  bResult;
private: System::Windows::Forms::RadioButton^  rbMax;
private: System::Windows::Forms::Label^  lGoldenSection;
private: System::Windows::Forms::Label^  lDerivativeResult;
private: System::Windows::Forms::Label^  lGoldenResult;















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tFunction = (gcnew System::Windows::Forms::TextBox());
			this->lFunction = (gcnew System::Windows::Forms::Label());
			this->tEps = (gcnew System::Windows::Forms::TextBox());
			this->lEps = (gcnew System::Windows::Forms::Label());
			this->tLeftBorder = (gcnew System::Windows::Forms::TextBox());
			this->tRightBorder = (gcnew System::Windows::Forms::TextBox());
			this->lLeftBorder = (gcnew System::Windows::Forms::Label());
			this->lRightBorder = (gcnew System::Windows::Forms::Label());
			this->bMul = (gcnew System::Windows::Forms::Button());
			this->bMinus = (gcnew System::Windows::Forms::Button());
			this->bPlus = (gcnew System::Windows::Forms::Button());
			this->bDiv = (gcnew System::Windows::Forms::Button());
			this->bTan = (gcnew System::Windows::Forms::Button());
			this->bCtan = (gcnew System::Windows::Forms::Button());
			this->bSin = (gcnew System::Windows::Forms::Button());
			this->bCos = (gcnew System::Windows::Forms::Button());
			this->bLeftBracket = (gcnew System::Windows::Forms::Button());
			this->bRightBracket = (gcnew System::Windows::Forms::Button());
			this->bPow = (gcnew System::Windows::Forms::Button());
			this->bLn = (gcnew System::Windows::Forms::Button());
			this->bNull = (gcnew System::Windows::Forms::Button());
			this->bOne = (gcnew System::Windows::Forms::Button());
			this->bTwo = (gcnew System::Windows::Forms::Button());
			this->bThree = (gcnew System::Windows::Forms::Button());
			this->bFour = (gcnew System::Windows::Forms::Button());
			this->bFive = (gcnew System::Windows::Forms::Button());
			this->bSix = (gcnew System::Windows::Forms::Button());
			this->bSeven = (gcnew System::Windows::Forms::Button());
			this->bEight = (gcnew System::Windows::Forms::Button());
			this->bNine = (gcnew System::Windows::Forms::Button());
			this->bComa = (gcnew System::Windows::Forms::Button());
			this->bSqrt = (gcnew System::Windows::Forms::Button());
			this->bBack = (gcnew System::Windows::Forms::Button());
			this->bClear = (gcnew System::Windows::Forms::Button());
			this->bXVariable = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->rbMin = (gcnew System::Windows::Forms::RadioButton());
			this->lDerivative = (gcnew System::Windows::Forms::Label());
			this->bResult = (gcnew System::Windows::Forms::Button());
			this->rbMax = (gcnew System::Windows::Forms::RadioButton());
			this->lGoldenSection = (gcnew System::Windows::Forms::Label());
			this->lDerivativeResult = (gcnew System::Windows::Forms::Label());
			this->lGoldenResult = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tFunction
			// 
			this->tFunction->Enabled = false;
			this->tFunction->Location = System::Drawing::Point(62, 13);
			this->tFunction->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tFunction->Name = L"tFunction";
			this->tFunction->Size = System::Drawing::Size(386, 23);
			this->tFunction->TabIndex = 1;
			this->tFunction->Text = L"-2+3*x";
			// 
			// lFunction
			// 
			this->lFunction->AutoSize = true;
			this->lFunction->Location = System::Drawing::Point(9, 16);
			this->lFunction->Name = L"lFunction";
			this->lFunction->Size = System::Drawing::Size(47, 18);
			this->lFunction->TabIndex = 2;
			this->lFunction->Text = L"F(x) = ";
			// 
			// tEps
			// 
			this->tEps->Location = System::Drawing::Point(328, 52);
			this->tEps->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tEps->Name = L"tEps";
			this->tEps->Size = System::Drawing::Size(120, 23);
			this->tEps->TabIndex = 4;
			this->tEps->Text = L"0,001";
			// 
			// lEps
			// 
			this->lEps->AutoSize = true;
			this->lEps->Location = System::Drawing::Point(283, 55);
			this->lEps->Name = L"lEps";
			this->lEps->Size = System::Drawing::Size(33, 18);
			this->lEps->TabIndex = 5;
			this->lEps->Text = L"Eps:";
			// 
			// tLeftBorder
			// 
			this->tLeftBorder->Location = System::Drawing::Point(62, 53);
			this->tLeftBorder->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tLeftBorder->Name = L"tLeftBorder";
			this->tLeftBorder->Size = System::Drawing::Size(85, 23);
			this->tLeftBorder->TabIndex = 7;
			this->tLeftBorder->Text = L"-10";
			// 
			// tRightBorder
			// 
			this->tRightBorder->Location = System::Drawing::Point(199, 52);
			this->tRightBorder->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tRightBorder->Name = L"tRightBorder";
			this->tRightBorder->Size = System::Drawing::Size(78, 23);
			this->tRightBorder->TabIndex = 8;
			this->tRightBorder->Text = L"10";
			// 
			// lLeftBorder
			// 
			this->lLeftBorder->AutoSize = true;
			this->lLeftBorder->Location = System::Drawing::Point(12, 55);
			this->lLeftBorder->Name = L"lLeftBorder";
			this->lLeftBorder->Size = System::Drawing::Size(21, 18);
			this->lLeftBorder->TabIndex = 9;
			this->lLeftBorder->Text = L"A:";
			// 
			// lRightBorder
			// 
			this->lRightBorder->AutoSize = true;
			this->lRightBorder->Location = System::Drawing::Point(153, 55);
			this->lRightBorder->Name = L"lRightBorder";
			this->lRightBorder->Size = System::Drawing::Size(20, 18);
			this->lRightBorder->TabIndex = 10;
			this->lRightBorder->Text = L"B:";
			// 
			// bMul
			// 
			this->bMul->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bMul->Location = System::Drawing::Point(129, 11);
			this->bMul->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bMul->Name = L"bMul";
			this->bMul->Size = System::Drawing::Size(57, 32);
			this->bMul->TabIndex = 11;
			this->bMul->Text = L"*";
			this->bMul->UseVisualStyleBackColor = true;
			this->bMul->Click += gcnew System::EventHandler(this, &MyForm::bMul_Click);
			// 
			// bMinus
			// 
			this->bMinus->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bMinus->Location = System::Drawing::Point(66, 11);
			this->bMinus->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bMinus->Name = L"bMinus";
			this->bMinus->Size = System::Drawing::Size(57, 32);
			this->bMinus->TabIndex = 12;
			this->bMinus->Text = L"-";
			this->bMinus->UseVisualStyleBackColor = true;
			this->bMinus->Click += gcnew System::EventHandler(this, &MyForm::bMinus_Click);
			// 
			// bPlus
			// 
			this->bPlus->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bPlus->Location = System::Drawing::Point(3, 11);
			this->bPlus->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bPlus->Name = L"bPlus";
			this->bPlus->Size = System::Drawing::Size(57, 32);
			this->bPlus->TabIndex = 13;
			this->bPlus->Text = L"+";
			this->bPlus->UseVisualStyleBackColor = true;
			this->bPlus->Click += gcnew System::EventHandler(this, &MyForm::bPlus_Click);
			// 
			// bDiv
			// 
			this->bDiv->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bDiv->Location = System::Drawing::Point(192, 11);
			this->bDiv->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bDiv->Name = L"bDiv";
			this->bDiv->Size = System::Drawing::Size(57, 32);
			this->bDiv->TabIndex = 15;
			this->bDiv->Text = L"/";
			this->bDiv->UseVisualStyleBackColor = true;
			this->bDiv->Click += gcnew System::EventHandler(this, &MyForm::bDiv_Click);
			// 
			// bTan
			// 
			this->bTan->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bTan->Location = System::Drawing::Point(129, 91);
			this->bTan->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bTan->Name = L"bTan";
			this->bTan->Size = System::Drawing::Size(57, 32);
			this->bTan->TabIndex = 16;
			this->bTan->Text = L"tan";
			this->bTan->UseVisualStyleBackColor = true;
			this->bTan->Click += gcnew System::EventHandler(this, &MyForm::bTan_Click);
			// 
			// bCtan
			// 
			this->bCtan->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bCtan->Location = System::Drawing::Point(192, 91);
			this->bCtan->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bCtan->Name = L"bCtan";
			this->bCtan->Size = System::Drawing::Size(57, 32);
			this->bCtan->TabIndex = 17;
			this->bCtan->Text = L"ctan";
			this->bCtan->UseVisualStyleBackColor = true;
			this->bCtan->Click += gcnew System::EventHandler(this, &MyForm::bCtan_Click);
			// 
			// bSin
			// 
			this->bSin->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bSin->Location = System::Drawing::Point(2, 91);
			this->bSin->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bSin->Name = L"bSin";
			this->bSin->Size = System::Drawing::Size(57, 32);
			this->bSin->TabIndex = 18;
			this->bSin->Text = L"sin";
			this->bSin->UseVisualStyleBackColor = true;
			this->bSin->Click += gcnew System::EventHandler(this, &MyForm::bSin_Click);
			// 
			// bCos
			// 
			this->bCos->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bCos->Location = System::Drawing::Point(66, 91);
			this->bCos->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bCos->Name = L"bCos";
			this->bCos->Size = System::Drawing::Size(57, 32);
			this->bCos->TabIndex = 19;
			this->bCos->Text = L"cos";
			this->bCos->UseVisualStyleBackColor = true;
			this->bCos->Click += gcnew System::EventHandler(this, &MyForm::bCos_Click);
			// 
			// bLeftBracket
			// 
			this->bLeftBracket->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bLeftBracket->Location = System::Drawing::Point(2, 51);
			this->bLeftBracket->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bLeftBracket->Name = L"bLeftBracket";
			this->bLeftBracket->Size = System::Drawing::Size(57, 32);
			this->bLeftBracket->TabIndex = 20;
			this->bLeftBracket->Text = L"(";
			this->bLeftBracket->UseVisualStyleBackColor = true;
			this->bLeftBracket->Click += gcnew System::EventHandler(this, &MyForm::bLeftBracket_Click);
			// 
			// bRightBracket
			// 
			this->bRightBracket->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bRightBracket->Location = System::Drawing::Point(66, 51);
			this->bRightBracket->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bRightBracket->Name = L"bRightBracket";
			this->bRightBracket->Size = System::Drawing::Size(57, 32);
			this->bRightBracket->TabIndex = 21;
			this->bRightBracket->Text = L")";
			this->bRightBracket->UseVisualStyleBackColor = true;
			this->bRightBracket->Click += gcnew System::EventHandler(this, &MyForm::bRightBracket_Click);
			// 
			// bPow
			// 
			this->bPow->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bPow->Location = System::Drawing::Point(129, 51);
			this->bPow->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bPow->Name = L"bPow";
			this->bPow->Size = System::Drawing::Size(57, 32);
			this->bPow->TabIndex = 22;
			this->bPow->Text = L"^";
			this->bPow->UseVisualStyleBackColor = true;
			this->bPow->Click += gcnew System::EventHandler(this, &MyForm::bPow_Click);
			// 
			// bLn
			// 
			this->bLn->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bLn->Location = System::Drawing::Point(66, 131);
			this->bLn->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bLn->Name = L"bLn";
			this->bLn->Size = System::Drawing::Size(57, 32);
			this->bLn->TabIndex = 23;
			this->bLn->Text = L"ln";
			this->bLn->UseVisualStyleBackColor = true;
			this->bLn->Click += gcnew System::EventHandler(this, &MyForm::bLn_Click);
			// 
			// bNull
			// 
			this->bNull->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bNull->Location = System::Drawing::Point(3, 131);
			this->bNull->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bNull->Name = L"bNull";
			this->bNull->Size = System::Drawing::Size(112, 32);
			this->bNull->TabIndex = 24;
			this->bNull->Text = L"0";
			this->bNull->UseVisualStyleBackColor = true;
			this->bNull->Click += gcnew System::EventHandler(this, &MyForm::bNull_Click);
			// 
			// bOne
			// 
			this->bOne->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bOne->Location = System::Drawing::Point(3, 11);
			this->bOne->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bOne->Name = L"bOne";
			this->bOne->Size = System::Drawing::Size(53, 32);
			this->bOne->TabIndex = 25;
			this->bOne->Text = L"1";
			this->bOne->UseVisualStyleBackColor = true;
			this->bOne->Click += gcnew System::EventHandler(this, &MyForm::bOne_Click);
			// 
			// bTwo
			// 
			this->bTwo->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bTwo->Location = System::Drawing::Point(62, 11);
			this->bTwo->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bTwo->Name = L"bTwo";
			this->bTwo->Size = System::Drawing::Size(53, 32);
			this->bTwo->TabIndex = 26;
			this->bTwo->Text = L"2";
			this->bTwo->UseVisualStyleBackColor = true;
			this->bTwo->Click += gcnew System::EventHandler(this, &MyForm::bTwo_Click);
			// 
			// bThree
			// 
			this->bThree->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bThree->Location = System::Drawing::Point(121, 11);
			this->bThree->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bThree->Name = L"bThree";
			this->bThree->Size = System::Drawing::Size(53, 32);
			this->bThree->TabIndex = 27;
			this->bThree->Text = L"3";
			this->bThree->UseVisualStyleBackColor = true;
			this->bThree->Click += gcnew System::EventHandler(this, &MyForm::bThree_Click);
			// 
			// bFour
			// 
			this->bFour->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bFour->Location = System::Drawing::Point(3, 51);
			this->bFour->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bFour->Name = L"bFour";
			this->bFour->Size = System::Drawing::Size(53, 32);
			this->bFour->TabIndex = 28;
			this->bFour->Text = L"4";
			this->bFour->UseVisualStyleBackColor = true;
			this->bFour->Click += gcnew System::EventHandler(this, &MyForm::bFour_Click);
			// 
			// bFive
			// 
			this->bFive->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bFive->Location = System::Drawing::Point(62, 51);
			this->bFive->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bFive->Name = L"bFive";
			this->bFive->Size = System::Drawing::Size(53, 32);
			this->bFive->TabIndex = 29;
			this->bFive->Text = L"5";
			this->bFive->UseVisualStyleBackColor = true;
			this->bFive->Click += gcnew System::EventHandler(this, &MyForm::bFive_Click);
			// 
			// bSix
			// 
			this->bSix->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bSix->Location = System::Drawing::Point(121, 51);
			this->bSix->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bSix->Name = L"bSix";
			this->bSix->Size = System::Drawing::Size(53, 32);
			this->bSix->TabIndex = 30;
			this->bSix->Text = L"6";
			this->bSix->UseVisualStyleBackColor = true;
			this->bSix->Click += gcnew System::EventHandler(this, &MyForm::bSix_Click);
			// 
			// bSeven
			// 
			this->bSeven->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bSeven->Location = System::Drawing::Point(3, 91);
			this->bSeven->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bSeven->Name = L"bSeven";
			this->bSeven->Size = System::Drawing::Size(53, 32);
			this->bSeven->TabIndex = 31;
			this->bSeven->Text = L"7";
			this->bSeven->UseVisualStyleBackColor = true;
			this->bSeven->Click += gcnew System::EventHandler(this, &MyForm::bSeven_Click);
			// 
			// bEight
			// 
			this->bEight->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bEight->Location = System::Drawing::Point(62, 91);
			this->bEight->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bEight->Name = L"bEight";
			this->bEight->Size = System::Drawing::Size(53, 32);
			this->bEight->TabIndex = 32;
			this->bEight->Text = L"8";
			this->bEight->UseVisualStyleBackColor = true;
			this->bEight->Click += gcnew System::EventHandler(this, &MyForm::bEight_Click);
			// 
			// bNine
			// 
			this->bNine->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bNine->Location = System::Drawing::Point(121, 91);
			this->bNine->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bNine->Name = L"bNine";
			this->bNine->Size = System::Drawing::Size(53, 32);
			this->bNine->TabIndex = 33;
			this->bNine->Text = L"9";
			this->bNine->UseVisualStyleBackColor = true;
			this->bNine->Click += gcnew System::EventHandler(this, &MyForm::bNine_Click);
			// 
			// bComa
			// 
			this->bComa->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bComa->Location = System::Drawing::Point(121, 131);
			this->bComa->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bComa->Name = L"bComa";
			this->bComa->Size = System::Drawing::Size(53, 32);
			this->bComa->TabIndex = 34;
			this->bComa->Text = L",";
			this->bComa->UseVisualStyleBackColor = true;
			this->bComa->Click += gcnew System::EventHandler(this, &MyForm::bComa_Click);
			// 
			// bSqrt
			// 
			this->bSqrt->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bSqrt->Location = System::Drawing::Point(2, 131);
			this->bSqrt->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bSqrt->Name = L"bSqrt";
			this->bSqrt->Size = System::Drawing::Size(57, 32);
			this->bSqrt->TabIndex = 35;
			this->bSqrt->Text = L"sqrt";
			this->bSqrt->UseVisualStyleBackColor = true;
			this->bSqrt->Click += gcnew System::EventHandler(this, &MyForm::bSqrt_Click);
			// 
			// bBack
			// 
			this->bBack->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bBack->Location = System::Drawing::Point(129, 131);
			this->bBack->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bBack->Name = L"bBack";
			this->bBack->Size = System::Drawing::Size(57, 32);
			this->bBack->TabIndex = 36;
			this->bBack->Text = L"back";
			this->bBack->UseVisualStyleBackColor = true;
			this->bBack->Click += gcnew System::EventHandler(this, &MyForm::bBack_Click);
			// 
			// bClear
			// 
			this->bClear->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bClear->Location = System::Drawing::Point(192, 131);
			this->bClear->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bClear->Name = L"bClear";
			this->bClear->Size = System::Drawing::Size(57, 32);
			this->bClear->TabIndex = 37;
			this->bClear->Text = L"clear";
			this->bClear->UseVisualStyleBackColor = true;
			this->bClear->Click += gcnew System::EventHandler(this, &MyForm::bClear_Click);
			// 
			// bXVariable
			// 
			this->bXVariable->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bXVariable->Location = System::Drawing::Point(192, 51);
			this->bXVariable->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bXVariable->Name = L"bXVariable";
			this->bXVariable->Size = System::Drawing::Size(57, 32);
			this->bXVariable->TabIndex = 38;
			this->bXVariable->Text = L"x";
			this->bXVariable->UseVisualStyleBackColor = true;
			this->bXVariable->Click += gcnew System::EventHandler(this, &MyForm::bXVariable_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->bDiv);
			this->panel1->Controls->Add(this->bClear);
			this->panel1->Controls->Add(this->bXVariable);
			this->panel1->Controls->Add(this->bBack);
			this->panel1->Controls->Add(this->bPlus);
			this->panel1->Controls->Add(this->bSqrt);
			this->panel1->Controls->Add(this->bMinus);
			this->panel1->Controls->Add(this->bMul);
			this->panel1->Controls->Add(this->bLeftBracket);
			this->panel1->Controls->Add(this->bRightBracket);
			this->panel1->Controls->Add(this->bPow);
			this->panel1->Controls->Add(this->bSin);
			this->panel1->Controls->Add(this->bCos);
			this->panel1->Controls->Add(this->bTan);
			this->panel1->Controls->Add(this->bCtan);
			this->panel1->Controls->Add(this->bLn);
			this->panel1->Location = System::Drawing::Point(199, 83);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(258, 173);
			this->panel1->TabIndex = 39;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->bNull);
			this->panel2->Controls->Add(this->bOne);
			this->panel2->Controls->Add(this->bComa);
			this->panel2->Controls->Add(this->bTwo);
			this->panel2->Controls->Add(this->bNine);
			this->panel2->Controls->Add(this->bThree);
			this->panel2->Controls->Add(this->bEight);
			this->panel2->Controls->Add(this->bFour);
			this->panel2->Controls->Add(this->bSeven);
			this->panel2->Controls->Add(this->bFive);
			this->panel2->Controls->Add(this->bSix);
			this->panel2->Location = System::Drawing::Point(12, 83);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(181, 173);
			this->panel2->TabIndex = 40;
			// 
			// rbMin
			// 
			this->rbMin->AutoSize = true;
			this->rbMin->Location = System::Drawing::Point(641, 16);
			this->rbMin->Name = L"rbMin";
			this->rbMin->Size = System::Drawing::Size(109, 22);
			this->rbMin->TabIndex = 43;
			this->rbMin->Text = L"Find Minimum";
			this->rbMin->UseVisualStyleBackColor = true;
			this->rbMin->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbMin_CheckedChanged);
			// 
			// lDerivative
			// 
			this->lDerivative->AutoSize = true;
			this->lDerivative->Location = System::Drawing::Point(496, 148);
			this->lDerivative->Name = L"lDerivative";
			this->lDerivative->Size = System::Drawing::Size(122, 18);
			this->lDerivative->TabIndex = 14;
			this->lDerivative->Text = L"Derivative method:";
			// 
			// bResult
			// 
			this->bResult->Location = System::Drawing::Point(499, 214);
			this->bResult->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bResult->Name = L"bResult";
			this->bResult->Size = System::Drawing::Size(251, 32);
			this->bResult->TabIndex = 0;
			this->bResult->Text = L"Result";
			this->bResult->UseVisualStyleBackColor = true;
			this->bResult->Click += gcnew System::EventHandler(this, &MyForm::bResult_Click);
			// 
			// rbMax
			// 
			this->rbMax->AutoSize = true;
			this->rbMax->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rbMax.BackgroundImage")));
			this->rbMax->Checked = true;
			this->rbMax->Location = System::Drawing::Point(491, 16);
			this->rbMax->Name = L"rbMax";
			this->rbMax->Size = System::Drawing::Size(112, 22);
			this->rbMax->TabIndex = 42;
			this->rbMax->TabStop = true;
			this->rbMax->Text = L"Find Maximum";
			this->rbMax->UseVisualStyleBackColor = true;
			this->rbMax->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbMax_CheckedChanged);
			// 
			// lGoldenSection
			// 
			this->lGoldenSection->AutoSize = true;
			this->lGoldenSection->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lGoldenSection.Image")));
			this->lGoldenSection->Location = System::Drawing::Point(496, 83);
			this->lGoldenSection->Name = L"lGoldenSection";
			this->lGoldenSection->Size = System::Drawing::Size(147, 18);
			this->lGoldenSection->TabIndex = 6;
			this->lGoldenSection->Text = L"Golden section method:";
			// 
			// lDerivativeResult
			// 
			this->lDerivativeResult->AutoSize = true;
			this->lDerivativeResult->Location = System::Drawing::Point(496, 174);
			this->lDerivativeResult->Name = L"lDerivativeResult";
			this->lDerivativeResult->Size = System::Drawing::Size(0, 18);
			this->lDerivativeResult->TabIndex = 44;
			// 
			// lGoldenResult
			// 
			this->lGoldenResult->AutoSize = true;
			this->lGoldenResult->Location = System::Drawing::Point(496, 108);
			this->lGoldenResult->Name = L"lGoldenResult";
			this->lGoldenResult->Size = System::Drawing::Size(0, 18);
			this->lGoldenResult->TabIndex = 45;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(762, 282);
			this->Controls->Add(this->lGoldenResult);
			this->Controls->Add(this->lDerivativeResult);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->lDerivative);
			this->Controls->Add(this->lGoldenSection);
			this->Controls->Add(this->rbMin);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->bResult);
			this->Controls->Add(this->rbMax);
			this->Controls->Add(this->lRightBorder);
			this->Controls->Add(this->lLeftBorder);
			this->Controls->Add(this->tRightBorder);
			this->Controls->Add(this->tLeftBorder);
			this->Controls->Add(this->lEps);
			this->Controls->Add(this->tEps);
			this->Controls->Add(this->lFunction);
			this->Controls->Add(this->tFunction);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->Text = L"Calculator of searching maximum and minimum";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void bResult_Click(System::Object^  sender, System::EventArgs^  e)
	{
		

		GoldenSection goldenSection;
		Extreme extreme;


		if (tLeftBorder->Text == "" || tRightBorder->Text == "" || tEps->Text == "" || tFunction->Text == "")
		{
			MessageBox::Show("Error: empty fields");
		}
		else
		if (!excep.isValidBrackets(MyConvert::toString(tFunction->Text)))
		{
			MessageBox::Show("Error:not valid brackets");
		}
		else 
		if (!excep.isCorrectBorders(MyConvert::toDouble(tLeftBorder->Text), MyConvert::toDouble(tRightBorder->Text)))
		{
			MessageBox::Show("Error:left border is less than right border");
		}
		
		else
		{
			goldenSection.setFunction(MyConvert::toString(tFunction->Text));

			extreme.setFunction(MyConvert::toString(tFunction->Text));


			goldenSection.setEps(MyConvert::toDouble(tEps->Text));

			extreme.setEps(MyConvert::toDouble(tEps->Text));

			goldenSection.setLeftBorder(MyConvert::toDouble(tLeftBorder->Text));
			goldenSection.setRightBorder(MyConvert::toDouble(tRightBorder->Text));

			extreme.setLeftBorder(MyConvert::toDouble(tLeftBorder->Text));
			extreme.setRightBorder(MyConvert::toDouble(tRightBorder->Text));

			

			if (rbMax->Checked)
			{
				try
				{

					goldenSection.findMax();
					double tmp = goldenSection.result.getXMax();
					lGoldenResult->Text = "";
					lGoldenResult->Text += "F(" + round(tmp * 100000 / 100000.00).ToString() + ") = ";
					tmp = goldenSection.result.getMax();
					lGoldenResult->Text += round(tmp * 100000 / 100000.00).ToString() + "\n";

					bool foundExcep = false;
					extreme.findExtremes();
					try
					{
						extreme.findMax();
					}
					catch (...)
					{
						lDerivativeResult->Text = "Not found derivatives equal to zero";
						foundExcep = true;
						
					}
					if (!foundExcep)
					{
						tmp = extreme.result.getXMax();
						lDerivativeResult->Text = "";
						lDerivativeResult->Text += "F(" + (tmp * 1000000 / 1000000.00).ToString() + ") = ";
						tmp = extreme.result.getMax();
						lDerivativeResult->Text += (tmp * 1000000 / 1000000.00).ToString() + "\n";
					}
					
				}
				catch (...)
				{
					MessageBox::Show("Error:unexpected error occured");
					
				}

			}
			else
			{
				try
				{
					goldenSection.findMin();
					double tmp = goldenSection.result.getXMin();
					lGoldenResult->Text = "";
					lGoldenResult->Text = "F(" + (tmp * 1000000 / 1000000.0).ToString() + ") = ";
					tmp = goldenSection.result.getMin();
					lGoldenResult->Text += (tmp * 1000000 / 1000000.0).ToString();

					bool foundExcep = false;
					extreme.findExtremes();
					try
					{
						extreme.findMin();
					}
					catch (...)
					{
						lDerivativeResult->Text = "Not found derivatives equal to zero";
						foundExcep = true;
					}
					if (!foundExcep)
					{
						tmp = extreme.result.getXMin();
						lDerivativeResult->Text = "";
						lDerivativeResult->Text += "F(" + (tmp * 1000000 / 1000000.0).ToString() + ") = ";
						tmp = extreme.result.getMin();
						lDerivativeResult->Text += (tmp * 1000000 / 1000000.0).ToString();
					}
				}
				catch (...)
				{
					MessageBox::Show("Error:unexpected error occured");
				}
			}
		}
	  
	}
				 

	private: System::Void bOne_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "1";
	}
	private: System::Void bTwo_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "2";
	}
	private: System::Void bThree_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "3";
	}
	private: System::Void bFour_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "4";
	}
	private: System::Void bFive_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "5";
	}
	private: System::Void bSix_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "6";
	}
	private: System::Void bSeven_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "7";
	}
	private: System::Void bEight_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "8";
	}
	private: System::Void bNine_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "9";
	}
	private: System::Void bNull_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "0";
	}
	private: System::Void bComa_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += ",";
	}
	private: System::Void bPlus_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "+";
	}
	private: System::Void bMinus_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "-";
	}
	private: System::Void bMul_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "*";
	}
	private: System::Void bDiv_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "/";
	}
	private: System::Void bLeftBracket_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "(";
	}
	private: System::Void bRightBracket_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += ")";
	}
	private: System::Void bPow_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "^";
	}
	private: System::Void bXVariable_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "x";
	}
	private: System::Void bSin_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "sin(";
	}
	private: System::Void bCos_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "cos(";
	}
	private: System::Void bTan_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "tan(";
	}
	private: System::Void bCtan_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "ctan(";
	}
	private: System::Void bSqrt_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "sqrt(";
	}
	private: System::Void bLn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		tFunction->Text += "ln(";
	}
	private: System::Void bBack_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		string tmp;
		tmp = MyConvert::toString(tFunction->Text);
		if (tmp.length() != 0)
		{
			tmp = tmp.erase(tmp.length() - 1, 1);
		}
		
		tFunction->Text = MyConvert::toSysString(tmp);
	}
	private: System::Void bClear_Click(System::Object^  sender, System::EventArgs^  e) 
	{
				 tFunction->Text = "";
	}


	private: System::Void rbMax_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		rbMin->Checked = false;
		
	}
	private: System::Void rbMin_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		rbMax->Checked = false;
		
	}

};

};

