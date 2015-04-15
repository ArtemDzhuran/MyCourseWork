#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>

using namespace System::Runtime::InteropServices;
using namespace std;

class MyConvert
{
public:

	static double toDouble(System::String^ stringValue);

	static double toDouble(string stringValue);

	static System::String^ toSysString(string _value);


	static string toString(System::String^ value);

	MyConvert();

	~MyConvert();
};

