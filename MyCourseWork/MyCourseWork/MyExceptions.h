#pragma once
#include <exception>
#include <string>

using namespace std;
class MyExceptions  //Клас, який включає в себе всі користувацькі виключні ситуації
{
public:
			//конструктор без параметрів
	MyExceptions();

			//Перевірка того, що кількість дужок які закриваються і відкриваються однакова
	const char* notValidBrackets(); 

	bool isValidBrackets(string s);

	bool isCorrectBorders(double leftBorder, double rightBorder);

			//Перевірка чи в числі лише одна кома
	const char* notValidNum();

			//Перевірка чи є в рядку число
	const char* canNotGetValidNum();

			//Перевірка правильного значення аргументу функції
	const char* notValidArgument();

			//Ділення на нуль
	const char* divisionByZero();
	
};

