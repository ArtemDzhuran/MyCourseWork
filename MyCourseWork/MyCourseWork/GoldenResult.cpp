#include "GoldenResult.h"


GoldenResult::GoldenResult()
{
	_min = 0;
	_xMin = 0;
	_max = 0;
	_xMax = 0;
}



	//Конструктор з параметрами
GoldenResult::GoldenResult(double min, double xMin, double max, double xMax)
	{
		_min = min;
		_xMin = xMin;
		_max = max;
		_xMax = xMax;
	}

	
void GoldenResult::setXMin(double xMin)
	{
		_xMin = xMin;
	}

double GoldenResult::getXMin()
	{
		return _xMin;
	}

void GoldenResult::setXMax(double xMax)
	{
		_xMax = xMax;
	}

double GoldenResult::getXMax()
	{
		return _xMax;
	}

void GoldenResult::setMin(double min)
	{
		_min = min;
	}

double GoldenResult::getMin()
	{
		return _min;
	}

void GoldenResult::setMax(double max)
	{
		_max = max;
	}

double GoldenResult::getMax()
	{
		return _max;
	}


