#include "MyConvert.h"


MyConvert::MyConvert()
{
}


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

	System::String^ MyConvert::toSysString(string _value)
	{
		return gcnew System::String(_value.c_str());
	}


	string MyConvert::toString(System::String^ value)
	{
		return msclr::interop::marshal_as<std::string>(value);
	}

MyConvert::~MyConvert()
{
}
