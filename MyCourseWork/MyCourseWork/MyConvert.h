#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>
#include "MyExceptions.h"

using namespace System::Runtime::InteropServices;
using namespace std;

class MyConvert //����, ���� ������ � ���� ������������ ����������� ����
{
public:

	MyExceptions excep;
			//����������� ��� ���������
	MyConvert();

			//������ � System::String � double
	static double toDouble(System::String^ stringValue);

			//������ � Std::String � double
	static double toDouble(string stringValue);

			//������ � Std::String � System::String
	static System::String^ toSysString(string _value);

			//������ � System::String � Std::String
	static string toString(System::String^ value);

	


};

