#include "Extreme.h"


Extreme::Extreme()
{
	_derivative = {};
	_points = {};
	_eps = 0.01;
	_function = "";
}


void Extreme::setFunction(string function)
{
	_function = function;
}

string Extreme::getFunction()
{
	return _function;
}

void Extreme::setEps(double eps)
{
	_eps = eps;
}

double Extreme::getEps()
{
	return _eps;
}

double Extreme::getRightBorder()
{
	return _rightBorder;
}

double Extreme::getLeftBorder()
{
	return _leftBorder;
}

void Extreme::setLeftBorder(double leftBorder)
{
	_leftBorder = leftBorder;
}

void Extreme::setRightBorder(double rightBorder)
{
	_rightBorder = rightBorder;
}

double Extreme::findDerivative(double point)
{
	mathParser.setVariable("x", point + _eps);
	double tmp = mathParser.Parse(_function);
	mathParser.setVariable("x", point);
	tmp -= mathParser.Parse(_function);
	return tmp / _eps;
}

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

