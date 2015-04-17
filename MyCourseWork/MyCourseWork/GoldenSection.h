#pragma once
#include <string>
#include "MaxMinResult.h"
#include "MathParser.h"

using namespace std;

class GoldenSection
{
public:
	MaxMinResult result;

private:
	
	string _function;
	double _eps; //точність
	double _leftBorder;
	double _rightBorder;
	MathParser mathParser;
	const double t = (1 + sqrt(5)) / 2;//константа золотого січення

public:
	GoldenSection();
	
	GoldenSection(string function);

	void changeComasWithDots(string& str);

	void setEps(double eps);

	void setLeftBorder(double leftBorder);

	void setRightBorder(double rightBorder);

	double getEps();

	double getRightBorder();

	double getLeftBorder();

	void setFunction(string function);

	string getFunction();

	void find(bool isLess);

	void findMax();

	void findMin();


};

