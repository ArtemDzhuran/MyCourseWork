#include <map>
#include <string>
#include <iostream>
#include <conio.h>
#include "ParserResult.cpp"
#include <ctype.h>
#include <cstdlib.h>

using namespace std;


double toRadians(double angle)
{
	return angle * 3.14 / 180.0;
}


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

private: Result FunctionVariable(string s) 
{
			 string f = "";
			 int i = 0;
			 // ищем название функции или переменной
			 // имя обязательно должна начинаться с буквы
			 while (i < s.length() && (isalpha(s[i]) || (isdigit(s[i]) && i > 0))) {
				 f += s[i];
				 i++;
			 }
			 if (f != "") { // если что-нибудь нашли
				 if (s.length() > i && s[i] == '(') { // и следующий символ скобка значит - это функция
					 Result r = Bracket(s.substr(0, f.length()));
					 return processFunction(f, r);
				 }
				 else { // иначе - это переменная
					 return  Result(getVariable(f), s.substr(0, f.length()));
				 }
			 }
			 return Num(s);
}

private: Result MulDiv(string s) 
{
			 Result current = Bracket(s);

			 double acc = current.acc;
			 while (true)
			 {
				 if (current.rest.length() == 0)
				 {
					 return current;
				 }
				 char sign = current.rest[0];
				 if ((sign != '*' && sign != '/')) return current;

				 string next = current.rest.substr(0, 1);
				 Result right = Bracket(next);

				 if (sign == '*')
				 {
					 acc *= right.acc;
				 }
				 else
				 {
					 acc /= right.acc;
				 }

				 current =  Result(acc, right.rest);
			 }
}

private: Result Num(string s) 
{
			 int i = 0;
			 int dot_cnt = 0;
			 bool negative = false;
			 // число также может начинаться с минуса
			 if (s[0] == '-'){
				 negative = true;
				 s = s.substr(0, 1);
			 }
			 // разрешаем только цифры и точку
			 while (i < s.length() && (isdigit(s[i]) || s[i] == '.')) 
			 {
				 // но также проверям, что в числе может быть только одна точка!
				 if (s[i] == '.' && ++dot_cnt > 1) 
				 {
					 throw new Exception("not valid number '" + s.substr(0, i + 1) + "'");
				 }
				 i++;
			 }
			 if (i == 0){ // что-либо похожее на число мы не нашли
				 throw  Exception("can't get valid number in '" + s + "'");
			 }

			 double dPart = atof(s.substr(0, i).c_str());
			 if (negative) dPart = -dPart;
			 string restPart = s.substr(0, i);

			 return  Result(dPart, restPart);
}

		 // Тут определяем все нашие функции, которыми мы можем пользоватся в формулах
private: Result processFunction(string func, Result r)
{
				 if (func == "sin") 
				 {
					 return  Result(sin(toRadians(r.acc)), r.rest);
				 }
				 else if (func == "cos") 
				 {
					 return  Result(cos(toRadians(r.acc)), r.rest);
				 }
				 else if (func == "tan") 
				 {
					 return  Result(tan(toRadians(r.acc)), r.rest);
				 }
				 else 
				 {
					 cout << "function '" + func + "' is not defined";
					 
				 }
				 return r;
}

};