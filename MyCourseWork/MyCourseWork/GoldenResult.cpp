#include "Result.h"



Result::Result()
{
	_min = 0;
	_xMin = 0;
	_max = 0;
	_xMax = 0;
}



	//Конструктор з параметрами
Result::Result(double min, double xMin, double max, double xMax)
	{
		_min = min;
		_xMin = xMin;
		_max = max;
		_xMax = xMax;
	}

	
void Result::setXMin(double xMin)
	{
		_xMin = xMin;
	}

double Result::getXMin()
	{
		return _xMin;
	}

void Result::setXMax(double xMax)
	{
		_xMax = xMax;
	}

double Result::getXMax()
	{
		return _xMax;
	}

void Result::setMin(double min)
	{
		_min = min;
	}

double Result::getMin()
	{
		return _min;
	}

void Result::setMax(double max)
	{
		_max = max;
	}

double Result::getMax()
	{
		return _max;
	}


