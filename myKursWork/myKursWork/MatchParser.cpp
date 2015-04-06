#include <map>
#include <string>
#include <iostream>
#include <conio.h>
#include "ParserResult.cpp"

using namespace std;

public class MatchParser
{
private: map<string, double> variables;

public: MatchParser()
{
	variables =  map<string, double>();
}

public: void setVariable(string variableName, double variableValue)
{
			variables.emplace(variableName, variableValue);
}

public: double getVariable(string variableName)
{
			if (variables.find(variableName) == variables.end && variables.end->first != variableName) 
			{

				cout << "Error: Try get unexists variable '" + variableName + "'"; 
				return 0.0;
			}

			return variables.at(variableName);
}

public: double Parse(string s) 
{
			Result result = PlusMinus(s);
			if (result.rest  != "") 
			{
				cout << "Error: can't full parse" << endl;
				cout << "rest: " + result.rest;
				
			}
			return result.acc;
}

private: Result PlusMinus(string s) 
{
			 Result current = MulDiv(s);
			 double acc = current.acc;

			 while (current.rest.length() > 0) {
				 if (!(current.rest[0] == '+' || current.rest[0] == '-')) break;

				 char sign = current.rest[0];
				 string next = current.rest.substr(0, 1);

				 current = MulDiv(next);
				 if (sign == '+') 
				 {
					 acc += current.acc;
				 }
				 else {
					 acc -= current.acc;
				 }
			 }
			 return  Result(acc, current.rest);
}

private: Result Bracket(string s) 
{
			 char zeroChar = s[0];
			 if (zeroChar == '(') 
			 {
				 Result r = PlusMinus(s.substr(0, 1));
				 if (r.rest != "" && r.rest[0] == ')') 
				 {
					 r.rest = r.rest.substr(0, 1);
				 }
				 else 
				 {
					 cout << "Error: not close bracket";
					 
				 }
				 return r;
			 }
			 return FunctionVariable(s);
}



};