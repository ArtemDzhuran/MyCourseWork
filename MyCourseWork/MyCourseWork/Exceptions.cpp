#pragma once
#include <exception>

using namespace std;
class Exceptions :exception
{

public:

	const char* notValidBrackets() const _NOEXCEPT{ return "Not valid brackets"; }
	const char* notValidNum() const _NOEXCEPT{ return "Not valid number"; }
	const char* canNotGetValidNum() const _NOEXCEPT{ return "Can't get valid number"; }
	const char* notValidArgument() const _NOEXCEPT
	{
		
		return "Not valid argument"; 
	}
};