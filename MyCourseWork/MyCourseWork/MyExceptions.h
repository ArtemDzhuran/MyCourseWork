#pragma once
#include <exception>
#include <string>

using namespace std;
class MyExceptions  //����, ���� ������ � ���� �� ������������ ������� ��������
{
public:
			//����������� ��� ���������
	MyExceptions();

			//�������� ����, �� ������� ����� �� ������������ � ������������ ��������
	const char* notValidBrackets(); 

	bool isValidBrackets(string s);

	bool isCorrectBorders(double leftBorder, double rightBorder);

			//�������� �� � ���� ���� ���� ����
	const char* notValidNum();

			//�������� �� � � ����� �����
	const char* canNotGetValidNum();

			//�������� ����������� �������� ��������� �������
	const char* notValidArgument();

			//ĳ����� �� ����
	const char* divisionByZero();
	
};

