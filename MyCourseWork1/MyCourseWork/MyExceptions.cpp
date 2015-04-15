#pragma once
#include <exception>

using namespace std;
class MyExceptions :exception
{

public:

	//Перевірка того, що кількість дужок які закриваються і відкриваються однакова
	const char* notValidBrackets() const _NOEXCEPT{ return "Not valid brackets"; }
	//Перевірка чи в числі лише одна кома
	const char* notValidNum() const _NOEXCEPT{ return "Not valid number"; }
	//Перевірка чи є в рядку число
	const char* canNotGetValidNum() const _NOEXCEPT{ return "Can't get valid number"; }
	//Перевірка правильного значення аргументу функції
	const char* notValidArgument() const _NOEXCEPT {return "Not valid argument"; }
	//Ділення на нуль
	const char* divisionByZero() const _NOEXCEPT{ return "Division by zero"; }
};