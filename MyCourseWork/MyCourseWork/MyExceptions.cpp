#include "MyExceptions.h"


MyExceptions::MyExceptions()
{
}

//Перевірка того, що кількість дужок які закриваються і відкриваються однакова
const char* MyExceptions::notValidBrackets()  _NOEXCEPT{ return "Not valid brackets"; }

//Перевірка чи в числі лише одна кома
const char* MyExceptions::notValidNum()  _NOEXCEPT{ return "Not valid number"; }

//Перевірка чи є в рядку число
const char* MyExceptions::canNotGetValidNum()  _NOEXCEPT{ return "Can't get valid number"; }

//Перевірка правильного значення аргументу функції
const char* MyExceptions::notValidArgument()  _NOEXCEPT{ return "Not valid argument"; }

//Ділення на нуль
const char* MyExceptions::divisionByZero()  _NOEXCEPT{ return "Division by zero"; }


