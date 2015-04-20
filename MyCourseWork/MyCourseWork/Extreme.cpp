#include "Extreme.h"

		//����������� ��� ���������
Extreme::Extreme()
{
	_derivative = {};
	_points = {};
	_eps = 0.01;
	_function = "";
}

		//�����, ���� ����� ���� �� ������
void Extreme::changeComasWithDots(string& str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ',')
		{
			str[i] = '.';
		}
	}
}

		//���������� �������� �������
void Extreme::setFunction(string function)
{
	changeComasWithDots(function);
	_function = function;
}
		
		//������ �������� �������
string Extreme::getFunction()
{
	return _function;
}

		//���������� �������� �������
void Extreme::setEps(double eps)
{
	_eps = eps;
}

		//������ �������� �������
double Extreme::getEps()
{
	return _eps;
}

		//������ �������� ����� ���
double Extreme::getRightBorder()
{
	return _rightBorder;
}

		//������ �������� ��� ���
double Extreme::getLeftBorder()
{
	return _leftBorder;
}

		//���������� �������� ��� ���
void Extreme::setLeftBorder(double leftBorder)
{
	_leftBorder = leftBorder;
}

		//���������� �������� ����� ���
void Extreme::setRightBorder(double rightBorder)
{
	_rightBorder = rightBorder;
}

		//�����, ���� ���� �������� ������� � �����
double Extreme::findDerivative(double point)
{
	mathParser.setVariable("x", point + _eps);
	double tmp = mathParser.Parse(_function);
	mathParser.setVariable("x", point);
	tmp -= mathParser.Parse(_function);
	return tmp / _eps;
}

		//�����, ���� ���� ���������� �������
void Extreme::findExtremes()
{
	double tmp;
	for (double i = _leftBorder; i < _rightBorder; i += _eps)
	{
		tmp = findDerivative(i);
		if (fabs(tmp) <= _eps*100 )
		{
			mathParser.setVariable("x", i);
			_derivative.push_back(mathParser.Parse(_function));
			_points.push_back(i);
		}

	}
}
		// �����, ���� ������� �������� ��������, �� ������� ������ ������������� ��������
void Extreme::findMax()
{
	if (_derivative.empty())
	{
		throw excep.noZeroDerivative();

	}

	int max = _derivative[0];
	int index = _points[0];
	for (int i = 0; i < _derivative.size(); i++)
	{
		if (max < _derivative[i])
		{
			index = _points[i];
			max = _derivative[i];
		}
	}
	result.setMax(max);
	result.setXMax(index);
	
}

		//�����, ���� ������� �������� ��������, �� ������� ������ ���������� ��������
void Extreme::findMin()
{
	if (_derivative.empty())
	{
		throw excep.noZeroDerivative();
	}
	int min = _derivative[0];
	int index = _points[0];
	for (int i = 0; i < _derivative.size(); i++)
	{
		if (min>_derivative[i])
		{
			index = _points[i];
			min = _derivative[i];
		}
	}
	result.setMin(min);
	result.setXMin(index);
	
	
}


