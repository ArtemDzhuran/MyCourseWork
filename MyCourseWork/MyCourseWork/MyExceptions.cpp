#include "MyExceptions.h"


MyExceptions::MyExceptions()
{
}

//�������� ����, �� ������� ����� �� ������������ � ������������ ��������
const char* MyExceptions::notValidBrackets()  _NOEXCEPT{ return "Not valid brackets"; }

//�������� �� � ���� ���� ���� ����
const char* MyExceptions::notValidNum()  _NOEXCEPT{ return "Not valid number"; }

//�������� �� � � ����� �����
const char* MyExceptions::canNotGetValidNum()  _NOEXCEPT{ return "Can't get valid number"; }

//�������� ����������� �������� ��������� �������
const char* MyExceptions::notValidArgument()  _NOEXCEPT{ return "Not valid argument"; }

//ĳ����� �� ����
const char* MyExceptions::divisionByZero()  _NOEXCEPT{ return "Division by zero"; }


