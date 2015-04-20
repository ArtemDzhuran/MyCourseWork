#include "MyExceptions.h"

		//конструктор без параметрів
MyExceptions::MyExceptions()
{

}

		
		//Перевірка чи в числі лише одна кома
const char* MyExceptions::notValidNum() { return "Not valid number"; }

		//Перевірка чи є в рядку число
const char* MyExceptions::canNotGetValidNum()  { return "Can't get valid number"; }

		//Перевірка правильного значення аргументу функції
const char* MyExceptions::notValidArgument()  { return "Not valid argument"; }

		//Перевірка того, що знайшли екстремуми
const char* MyExceptions::noZeroDerivative() { return "Not found derivatives equal to zero"; }

		//Ділення на нуль
const char* MyExceptions::divisionByZero() { return "Division by zero"; }
		
		//Перевірка того, що кількість дужок які закриваються і відкриваються однакова
bool MyExceptions::isValidBrackets(string s)
{
	int openBrackets = 0;
	int closeBrackets = 0;
	for (unsigned int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
			openBrackets++;
		if (s[i] == ')')
			closeBrackets++;
	}

	if (openBrackets != closeBrackets)
	{
		return false;
	}

	return true;
}

		//Перевірка правильності вводу меж визначення функції
bool MyExceptions::isCorrectBorders(double leftBorder, double rightBorder)
{
	return leftBorder < rightBorder;
}