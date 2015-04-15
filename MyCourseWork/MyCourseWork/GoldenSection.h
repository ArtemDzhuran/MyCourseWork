#pragma once
#include <string>
#include "GoldenResult.h"
#include "MathParser.h"

using namespace std;

class GoldenSection
{
public:
	GoldenResult goldenResult;

private:
	MyExceptions e;
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

	bool isValidBrackets(string s);

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

	~GoldenSection();
};

