#pragma once
#include <map>
#include <string>
#include <iostream>
#include <conio.h>
#include "ParserResult.h"
#include <ctype.h>
#include <stdlib.h>
#include "MyExceptions.h"
#include "MyConvert.h"

using namespace std;

class MathParser //Клас, який аналізує рядок і рахує його значення
{

public:
	MyExceptions e;
	

private:
	map<string, double> variables;
	bool negativeVariable = false;

			//метод, який переводить у радіани 
	double toRadians(double angle);

			//конструктор без параметрів
	public: MathParser();

			//встановлюємо значення змінної
	public: void setVariable(string variableName, double variableValue);
	
			//отримуємо значення змінної
	public: double getVariable(string variableName);
	
			//метод в який передаємо рядок для визначення значення
	public: double Parse(string s);

			//пошуку плюсу мінусу та обчислення
	private: Result PlusMinus(string s);

			 //пошук дужок	 
	private: Result Bracket(string s);

			 // пошук функції або змінної	 
	private: Result FunctionVariable(string s);

			 //множення, ділення або пошук степеня та обчислення результату	 
	private: Result MulDiv(string s);
		
			 //пошук числа
	private: Result Num(string s);
	
			 // Визначення всіх функцій які ми можемо використовувати 
	private: Result processFunction(string func, Result r);

};

