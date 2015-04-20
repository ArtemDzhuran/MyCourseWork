#pragma once
#include <string>
#include <vector>
#include "MathParser.h"
#include "MaxMinResult.h"

using namespace std;

class Extreme
{
public:
	MaxMinResult result;
	MyExceptions excep;

private:
	string _function;
	double _eps;
	double _leftBorder;
	double _rightBorder;
	vector <double> _derivative;
	vector <double> _points;
	MathParser mathParser;


public:
			//����������� ��� ���������
	Extreme();

			//�����, ���� ����� ���� �� ������
	void changeComasWithDots(string& str);

			//���������� �������� �������
	void setFunction(string function);

			//������ �������� �������
	string getFunction();

			//���������� �������� �������
	void setEps(double eps);

			//������ �������� �������
	double getEps();

			//������ �������� ����� ���
	double getRightBorder();

			//������ �������� ��� ���
	double getLeftBorder();

			//���������� �������� ��� ���
	void setLeftBorder(double leftBorder);

			//���������� �������� ����� ���
	void setRightBorder(double rightBorder);

			//�����, ���� ���� �������� ������� � �����
	double findDerivative(double point);

			//�����, ���� ���� ���������� �������
	void findExtremes();

			// �����, ���� ������� �������� ��������, �� ������� ������ ������������� ��������
	void findMax();

			//�����, ���� ������� �������� ��������, �� ������� ������ ���������� ��������
	void findMin();


};

