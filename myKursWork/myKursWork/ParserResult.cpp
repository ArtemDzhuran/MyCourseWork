#include <string>

using namespace std;

class Result
{

public: 
	double acc;
	string rest;

	Result(double v, string r)
	{
		acc = v;
		rest = r;
	}
};