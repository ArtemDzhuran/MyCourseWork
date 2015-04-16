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


