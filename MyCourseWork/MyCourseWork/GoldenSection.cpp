#include <string>
#include "GoldenResult.cpp"
#include "MathParser.cpp"


using namespace std;

class GoldenSection
{
private:
	string _function;
	double eps; //точність
	double leftBorder; 
	double rightBorder;
	MathParser mathParser;
	GoldenResult goldenResult;

	const double t = (1 + sqrt(5)) / 2;//константа золотого січення



public:

	GoldenSection()
	{
		_function = "";
		eps = 0.0001;
		leftBorder = -1;
		rightBorder = 1;
	}

	GoldenSection(string function) 
	{
		_function = function;
	}

/*	GoldenSection(const GoldenSection& goldenSection) :GoldenSection()
	{
	}*/

	void setFunction(string function)
	{
		_function = function;
	}

	string getFunction()
	{
		return _function;
	}

	double find()
	{
		mathParser.setVariable("x", leftBorder);
		double tmp = mathParser.Parse(_function);
		goldenResult.setMax(tmp);
		tmp = mathParser.Parse(_function);
		goldenResult.setMin(tmp);
		goldenResult.setXMax(leftBorder);
		goldenResult.setXMin(leftBorder);

		do
		{
			double x1 = rightBorder - ((rightBorder - leftBorder) / t);
			double x2 = leftBorder + ((rightBorder - leftBorder) / t);
			mathParser.setVariable("x", x1);
			double y1 = mathParser.Parse(_function);
			mathParser.setVariable("x", x2);
			double y2 = mathParser.Parse(_function);

			if (y1 > y2)
			{
				leftBorder = x1;
			}
			else
			{
				rightBorder = x2;
			}
		} while (fabs(leftBorder - rightBorder) > eps);


		//if (goldenResult.getMin() > mathParser.Parse(_function))
		//{
			goldenResult.setMin(mathParser.Parse(_function));
			goldenResult.setXMin(leftBorder);
		//}
		
		return goldenResult.getMin();
		
	}

	double findMax()
	{
	
	}

	double findMin()
	{

	}


};



