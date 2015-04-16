#pragma once
#include <string>

using namespace std;

class Result
{
public:

	double acc; //частина рядка, який вже обробили
	string rest; //частина рядка, яка залишилась


			//збереження результату обрахунку рядку
	Result(double v, string r);

	
};

