#include "Extreme.h"




		//конструктор без параметрів
Extreme::Extreme()
{
	_derivative = {};
	_points = {};
	_eps = 0.01;
	_function = "";
}

		//встановлює значення функції
void Extreme::setFunction(string function)
{
	_function = function;
}
		
		//отримує значення функції
string Extreme::getFunction()
{
	return _function;
}

		//встановлює значення точності
void Extreme::setEps(double eps)
{
	_eps = eps;
}

		//отримує значення точності
double Extreme::getEps()
{
	return _eps;
}

		//отримує значення правої межі
double Extreme::getRightBorder()
{
	return _rightBorder;
}

		//отримує значення лівої межі
double Extreme::getLeftBorder()
{
	return _leftBorder;
}

		//встановлює значення лівої межі
void Extreme::setLeftBorder(double leftBorder)
{
	_leftBorder = leftBorder;
}

		//встановлює значення правої межі
void Extreme::setRightBorder(double rightBorder)
{
	_rightBorder = rightBorder;
}

		//метод, який шукає значення похідної в точці
double Extreme::findDerivative(double point)
{
	mathParser.setVariable("x", point + _eps);
	double tmp = mathParser.Parse(_function);
	mathParser.setVariable("x", point);
	tmp -= mathParser.Parse(_function);
	return tmp / _eps;
}

		//метод, який шукає екстремуми функції
void Extreme::findExtremes()
{
	double tmp;
	for (double i = _leftBorder; i < _rightBorder; i += _eps)
	{
		tmp = findDerivative(i);
		if (fabs(tmp) < _eps * 10)
		{
			mathParser.setVariable("x", i);
			_derivative.push_back(mathParser.Parse(_function));
			_points.push_back(i);
		}

	}
}

void Extreme::findMax()
{
	if (_derivative.empty())
	{
		throw excep.noZeroDerivative();

	}

	int max = _derivative[0];
	int index = _leftBorder;
	for (int i = 0; i < _derivative.size(); i++)
	{
		if (max < _derivative[i])
		{
			index = i;
			max = _derivative[i];
		}
	}
	result.setMin(max);
	result.setXMin(index);
	
}

void Extreme::findMin()
{
	if (_derivative.empty())
	{
		throw excep.noZeroDerivative();
	}
	int min = _derivative[0];
	int index = _leftBorder;
	for (int i = 0; i < _derivative.size(); i++)
	{
		if (min>_derivative[i])
		{
			index = i;
			min = _derivative[i];
		}
	}
	result.setMin(min);
	result.setXMin(index);
	
	
}


/*		//метод, який визначає значення елементу, де функція набуває мінімального значення
int Extreme::indexOfMin()
{
	if (_derivative.empty())
	{
		return 0;
	}
	int min = _derivative[0];
	int index = 0;
	for (int i = 0; i < _derivative.size(); i++)
	{
		if (min>_derivative[i]);
		index = i;
	}
	return index;
}

		//метод, який визначає значення елементу, де функція набуває максимального значення
int Extreme::indexOfMax()
{
	if (_derivative.empty())
	{
		return 0;
	}
	int max = _derivative[0];
	int index = 0;
	for (int i = 0; i < _derivative.size(); i++)
	{
		if (max<_derivative[i]);
		index = i;
	}
	return index;
}

		//метод, який визначає мінімум функції
double Extreme::valueOfMin()
{
	if (_derivative.empty())
	{
		return 0;
	}
	int min = _derivative[0];
	int index = 0;
	for (int i = 0; i < _derivative.size(); i++)
	{
		if (min>_derivative[i]);
		index = i;
	}
	return _derivative[index];
}

		//метод, який визначає максимум функції
double Extreme::valueOfMax()
{
	if (_derivative.empty())
	{
		return 0;
	}
	int max = _derivative[0];
	int index = 0;
	for (int i = 0; i < _derivative.size(); i++)
	{
		if (max<_derivative[i]);
		index = i;
	}
	return _derivative[index];
}
*/