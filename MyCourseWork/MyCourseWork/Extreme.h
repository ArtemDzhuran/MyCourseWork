#pragma once
#include <string>
#include <vector>
#include "MathParser.h"

using namespace std;

class Extreme
{


private:
	string _function;
	double _eps;
	double _leftBorder;
	double _rightBorder;
	vector <double> _derivative;
	vector <double> _points;
	MathParser mathParser;

public:
			//конструктор без параметрів
	Extreme();

			//встановлює значення функції
	void setFunction(string function);

			//отримує значення функції
	string getFunction();

			//встановлює значення точності
	void setEps(double eps);

			//отримує значення точності
	double getEps();

			//отримує значення правої межі
	double getRightBorder();

			//отримує значення лівої межі
	double getLeftBorder();

			//встановлює значення лівої межі
	void setLeftBorder(double leftBorder);

			//встановлює значення правої межі
	void setRightBorder(double rightBorder);

			//метод, який шукає значення похідної в точці
	double findDerivative(double point);

			//метод, який шукає екстремуми функції
	void findExtremes();

			//метод, який визначає значення елементу, де функція набуває мінімального значення
	int indexOfMin();

			//метод, який визначає значення елементу, де функція набуває максимального значення
	int indexOfMax();

			//метод, який визначає мінімум функції
	double valueOfMin();

			//метод, який визначає максимум функції
	double valueOfMax();
};

