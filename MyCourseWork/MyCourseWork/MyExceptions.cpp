#include "MyExceptions.h"

		//����������� ��� ���������
MyExceptions::MyExceptions()
{

}

		//�������� ����, �� ������� ����� �� ������������ � ������������ ��������
const char* MyExceptions::notValidBrackets() { return "Not valid brackets"; }

		//�������� �� � ���� ���� ���� ����
const char* MyExceptions::notValidNum() { return "Not valid number"; }

		//�������� �� � � ����� �����
const char* MyExceptions::canNotGetValidNum()  { return "Can't get valid number"; }

		//�������� ����������� �������� ��������� �������
const char* MyExceptions::notValidArgument()  { return "Not valid argument"; }

		//ĳ����� �� ����
const char* MyExceptions::divisionByZero() { return "Division by zero"; }


