#include <string>

using namespace std;

class Result
{

public:
	double acc; //частина рядка, який вже обробили
	string rest; //частина рядка, яка залишилась

	Result(double v, string r)  //збереження нашого результату
	{
		acc = v;
		rest = r;
	}
};