#pragma once
class GoldenResult
{

private:
	//значення х, коли функція досягає мінімального значення
	double _xMin;

	//значення х, коли функція досягає максимального значення 
	double _xMax;

	//мінімальне значення функції 
	double _min;

	//максимальне значення функції
	double _max;

public:

	GoldenResult();

	//Конструктор з параметрами
	GoldenResult(double min, double xMin, double max, double xMax);

	void setXMin(double xMin);

	double getXMin();

	void setXMax(double xMax);

	double getXMax();

	void setMin(double min);

	double getMin();

	void setMax(double max);

	double getMax();

	
};

