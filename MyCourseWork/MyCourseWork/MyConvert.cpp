#include "MyConvert.h"

		//Конструктор без параметрів
MyConvert::MyConvert()
{

}

		//Перевід з System::String в double
double MyConvert::toDouble(System::String^ stringValue)
{
	double value;
	try
	{
		value = double::Parse(stringValue);
	}
	catch (System::FormatException ^e)
	{
		return 0;
	}
	catch (...)
	{
		return 0;
	}
	return value;
}

		//Перевід з Std::String в double
double MyConvert::toDouble(string stringValue)
{
	double value;
	try
	{
		value = atof(stringValue.c_str());
	}
	catch (System::FormatException ^e)
	{
		return 0;
	}
	catch (...)
	{
		return 0;
	}
	return value;
}

		//Перевід з Std::String в System::String
System::String^ MyConvert::toSysString(string _value)
{
	return gcnew System::String(_value.c_str());
}

		//Перевід з System::String в Std::String
string MyConvert::toString(System::String^ value)
{
	return msclr::interop::marshal_as<std::string>(value);
}


