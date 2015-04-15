#include <string>
#include <vector>
#include "MathParser.cpp"

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
	Extreme()
	{
		_derivative = {};
		_points = {};
		_eps = 0.01;
		_function = "";
	}

	void setFunction(string function)
	{
		_function = function;
	}

	string getFunction()
	{
		return _function;
	}

	void setEps(double eps)
	{
		_eps = eps;
	}

	double getEps()
	{
		return _eps;
	}

	double getRightBorder()
	{
		return _rightBorder;
	}

	double getLeftBorder()
	{
		return _leftBorder;
	}

	void setLeftBorder(double leftBorder)
	{
		_leftBorder = leftBorder;
	}

	void setRightBorder(double rightBorder)
	{
		_rightBorder = rightBorder;
	}

	double findDerivative(double point)
	{
		mathParser.setVariable("x", point + _eps);
		double tmp = mathParser.Parse(_function); 
		mathParser.setVariable("x", point);
		tmp -= mathParser.Parse(_function);
		return tmp / _eps;
	}

	void findExtremes()
	{
		double tmp;
		for (double i = _leftBorder; i < _rightBorder; i += _eps)
		{
			tmp = findDerivative(i);
			if (fabs(tmp) < _eps*10)
			{
				mathParser.setVariable("x",i);
				_derivative.push_back(mathParser.Parse(_function));
				_points.push_back(i);
			}

		}
	}

	int indexOfMin()
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

	int indexOfMax()
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

	double valueOfMin()
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

	double valueOfMax()
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

};