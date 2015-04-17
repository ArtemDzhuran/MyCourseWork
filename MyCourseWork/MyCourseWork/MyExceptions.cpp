#include "MyExceptions.h"

		//конструктор без параметрів
MyExceptions::MyExceptions()
{

}

		//Перевірка того, що кількість дужок які закриваються і відкриваються однакова
const char* MyExceptions::notValidBrackets() { return "Not valid brackets"; }

		//Перевірка чи в числі лише одна кома
const char* MyExceptions::notValidNum() { return "Not valid number"; }

		//Перевірка чи є в рядку число
const char* MyExceptions::canNotGetValidNum()  { return "Can't get valid number"; }

		//Перевірка правильного значення аргументу функції
const char* MyExceptions::notValidArgument()  { return "Not valid argument"; }

		//Ділення на нуль
const char* MyExceptions::divisionByZero() { return "Division by zero"; }

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

bool MyExceptions::isCorrectBorders(double leftBorder, double rightBorder)
{
	return leftBorder < rightBorder;
}