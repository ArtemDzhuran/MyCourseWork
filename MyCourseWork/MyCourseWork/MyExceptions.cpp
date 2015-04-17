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

bool MyExceptions::isValidBrackets(string s)
{
	int openBrackets = 0;
	int closeBrackets = 0;
	for (unsigned int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
			openBrackets++;
		if (s[i] == ')')
			closeBrackets++;
	}

	if (openBrackets != closeBrackets)
	{
		return false;
	}

	return true;
}

bool MyExceptions::isCorrectBorders(double leftBorder, double rightBorder)
{
	return leftBorder < rightBorder;
}