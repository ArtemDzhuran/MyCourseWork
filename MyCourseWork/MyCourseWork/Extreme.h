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
	Extreme();

	void setFunction(string function);

	string getFunction();

	void setEps(double eps);

	double getEps();

	double getRightBorder();

	double getLeftBorder();

	void setLeftBorder(double leftBorder);

	void setRightBorder(double rightBorder);

	double findDerivative(double point);

	void findExtremes();

	int indexOfMin();

	int indexOfMax();

	double valueOfMin();

	double valueOfMax();
};

