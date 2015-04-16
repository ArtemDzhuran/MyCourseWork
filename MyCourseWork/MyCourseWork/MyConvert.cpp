#include "MyConvert.h"

		//����������� ��� ���������
MyConvert::MyConvert()
{

}

		//������ � System::String � double
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

		//������ � Std::String � double
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

		//������ � Std::String � System::String
System::String^ MyConvert::toSysString(string _value)
{
	return gcnew System::String(_value.c_str());
}

		//������ � System::String � Std::String
string MyConvert::toString(System::String^ value)
{
	return msclr::interop::marshal_as<std::string>(value);
}


