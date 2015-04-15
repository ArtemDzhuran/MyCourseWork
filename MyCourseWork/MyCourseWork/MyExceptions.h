#pragma once
#include <exception>

using namespace std;
class MyExceptions
{
public:
	MyExceptions();
	const char* notValidBrackets(); 
	const char* notValidNum();
	const char* canNotGetValidNum();
	const char* notValidArgument();
	const char* divisionByZero();
	~MyExceptions();
};

