#include <msclr\marshal_cppstd.h>
#include <string>

using namespace System::Runtime::InteropServices;
using namespace std;

static class MyConvert
{
public:

	static double toDouble(System::String^ stringValue)  
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

	static double toDouble(string stringValue)
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

	static System::String^ toSysString(string _value)
	{
		return gcnew System::String(_value.c_str());
	}


	static string toString(System::String^ value)
	{
		return msclr::interop::marshal_as<std::string>(value);
	}



	

};

