#include "MaxMinResult.h"



MaxMinResult::MaxMinResult()
{
	_min = 0;
	_xMin = 0;
	_max = 0;
	_xMax = 0;
}



	//Конструктор з параметрами
MaxMinResult::MaxMinResult(double min, double xMin, double max, double xMax)
	{
		_min = min;
		_xMin = xMin;
		_max = max;
		_xMax = xMax;
	}

	
void MaxMinResult::setXMin(double xMin)
	{
		_xMin = xMin;
	}

double MaxMinResult::getXMin()
	{
		return _xMin;
	}

void MaxMinResult::setXMax(double xMax)
	{
		_xMax = xMax;
	}

double MaxMinResult::getXMax()
	{
		return _xMax;
	}

void MaxMinResult::setMin(double min)
	{
		_min = min;
	}

double MaxMinResult::getMin()
	{
		return _min;
	}

void MaxMinResult::setMax(double max)
	{
		_max = max;
	}

double MaxMinResult::getMax()
	{
		return _max;
	}


