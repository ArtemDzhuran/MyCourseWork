#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>

using namespace System::Runtime::InteropServices;
using namespace std;

class MyConvert //Клас, який включає в себе користувацькі переведення типів
{
public:

			//Конструктор без параметрів
	MyConvert();

			//Перевід з System::String в double
	static double toDouble(System::String^ stringValue);

			//Перевід з Std::String в double
	static double toDouble(string stringValue);

			//Перевід з Std::String в System::String
	static System::String^ toSysString(string _value);

			//Перевід з System::String в Std::String
	static string toString(System::String^ value);

	


};

