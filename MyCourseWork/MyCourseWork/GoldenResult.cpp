
class GoldenResult
{
private:
	double _xMin;
	double _xMax;
	double _min;
	double _max;
public:

	GoldenResult()
	{
		_min = 0;
		_xMin = 0;
		_max = 0;
		_xMax = 0;
	}

	GoldenResult(double min, double xMin, double max, double xMax)
	{
		_min = min;
		_xMin = xMin;
		_max = max;
		_xMax = xMax;
	}

	void setXMin(double xMin)
	{
		_xMin = xMin;
	}

	double getXMin()
	{
		return _xMin;
	}

	void setXMax(double xMax)
	{
		_xMax = xMax;
	}

	double getXMax()
	{
		return _xMax;
	}

	void setMin(double min)
	{
		_min = min;
	}

	double getMin()
	{
		return _min;
	}

	void setMax(double max)
	{
		_max = max;
	}

	double getMax()
	{
		return _max;
	}

};