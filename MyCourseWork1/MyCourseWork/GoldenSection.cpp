#include <string>
#include "GoldenResult.cpp"
#include "MathParser.cpp"


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

	GoldenSection()
	{
		_function = "";
		_eps = 0.0001;
		_leftBorder = -1;
		_rightBorder = 1;
	}

	GoldenSection(string function) 
	{
		_function = function;
	}

	void changeComasWithDots(string& str)
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == ',')
			{
				str[i] = '.';
			}
		}
	}

	bool isValidBrackets(string s)
	{
		int openBrackets = 0;
		int closeBrackets = 0;
		for (unsigned int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(')
				openBrackets++;
			if (s[i] == ')')
				closeBrackets++;
		}

		if (openBrackets != closeBrackets)
		{
			return false;
		}

		return true;
	}

	void setEps(double eps)
	{
		_eps = eps;
	}

	void setLeftBorder(double leftBorder)
	{
		_leftBorder = leftBorder;
	}

	void setRightBorder(double rightBorder)
	{
		_rightBorder = rightBorder;
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

	void setFunction(string function)
	{
		if (!isValidBrackets(function))
		{
			throw(e.notValidBrackets());
		}

		changeComasWithDots(function);

		_function = function;
	}

	string getFunction()
	{
		return _function;
	}

	void find(bool isLess)
	{
		mathParser.setVariable("x", _leftBorder);
		double tmp = mathParser.Parse(_function);
		goldenResult.setMax(tmp);
		tmp = mathParser.Parse(_function);
		goldenResult.setMin(tmp);
		goldenResult.setXMax(_leftBorder);
		goldenResult.setXMin(_leftBorder);

		do
		{
			double x1 = _rightBorder - ((_rightBorder - _leftBorder) / t);
			double x2 = _leftBorder + ((_rightBorder - _leftBorder) / t);
			mathParser.setVariable("x", x1);
			double y1 = mathParser.Parse(_function);
			mathParser.setVariable("x", x2);
			double y2 = mathParser.Parse(_function);


			if (isLess){
				if (y1 >= y2) //min
				{
					_leftBorder = x1;
				}
				else
				{
					_rightBorder = x2;
				}
			}
			else
			{
				if (y1 <= y2) //max
				{
					_leftBorder = x1;
				}
				else
				{
					_rightBorder = x2;
				}
			}
		} while (fabs(_leftBorder - _rightBorder) > _eps);


		if (isLess){
			goldenResult.setMin(mathParser.Parse(_function));
			goldenResult.setXMin(_leftBorder);
			//return goldenResult.getMin();
		}
		else
		{
			goldenResult.setMax(mathParser.Parse(_function));
			goldenResult.setXMax(_leftBorder);
			//return goldenResult.getMin();
		}
		
		
		//return 0.0;
		
	}

	void findMax()
	{
		 find(false);
	}

	void findMin()
	{
		 find(true);
	}


};



