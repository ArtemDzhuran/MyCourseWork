#pragma once
#include <string>
#include "MaxMinResult.h"
#include "MathParser.h"

using namespace std;

class GoldenSection
{
public:
	MaxMinResult result;

private:
	
	string _function;
	double _eps; //точність
	double _leftBorder;
	double _rightBorder;
	MathParser mathParser;
	const double t = (1 + sqrt(5)) / 2;//константа золотого січення

public:
			//конструктор без параметрів
	GoldenSection();
	
			//конструктор з параметром
	GoldenSection(string function);
			
			//метод, який змінює коми на крапки
	void changeComasWithDots(string& str);

			//встановлюємо значення точності
	void setEps(double eps);

			// встановлюємо значення лівої межі
	void setLeftBorder(double leftBorder);

			//встановлюємо значення правої межі
	void setRightBorder(double rightBorder);

			//отримує значення точності
	double getEps();

			//отримуємо значення лівої межі
	double getRightBorder();

			//отримуємо значення правої межі
	double getLeftBorder();

			//встановлюємо значення функції
	void setFunction(string function);

			//отримуємо значення функції
	string getFunction();

			//пошук максимуму та мінімуму методом золотого січення
	void find(bool isLess);

			//визначає максимум
	void findMax();

			//визначає мінімум
	void findMin();


};

