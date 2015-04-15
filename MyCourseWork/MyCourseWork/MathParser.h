#pragma once
#include <map>
#include <string>
#include <iostream>
#include <conio.h>
#include "ParserResult.h"
#include <ctype.h>
#include <stdlib.h>
#include "MyExceptions.h"
#include "MyConvert.h"

using namespace std;

class MathParser
{
public:
	MyExceptions e;
private:
	map<string, double> variables;


	double toRadians(double angle);

	
public: MathParser();

public: void setVariable(string variableName, double variableValue);
		
public: double getVariable(string variableName);
		
public: double Parse(string s);

		
private: Result PlusMinus(string s);

		 
private: Result Bracket(string s);

		 
private: Result FunctionVariable(string s);

		 
private: Result MulDiv(string s);
		
private: Result Num(string s);
		 
private: Result processFunction(string func, Result r);


};/*public:	~MathParser();*/

