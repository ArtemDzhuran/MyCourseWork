#pragma once
class Result
{

protected:
	//�������� �, ���� ������� ������ ���������� ��������
	double _xMin;

	//�������� �, ���� ������� ������ ������������� �������� 
	double _xMax;

	//�������� �������� ������� 
	double _min;

	//����������� �������� �������
	double _max;

public:

	Result();

	//����������� � �����������
	Result(double min, double xMin, double max, double xMax);

	void setXMin(double xMin);

	double getXMin();

	void setXMax(double xMax);

	double getXMax();

	void setMin(double min);

	double getMin();

	void setMax(double max);

	double getMax();

	
};

