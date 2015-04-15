#include <map>
#include <string>
#include <iostream>
#include <conio.h>
#include "ParserResult.cpp"
#include <ctype.h>
#include <stdlib.h>
//#include <exception> 
#include "Exceptions.cpp"
#include "MyConvert.cpp"

using namespace std;



//виключні ситуації
/*struct ooops : exception 
{

	

};*/

public class MathParser
{

private:
	Exceptions e;
private:
	map<string, double> variables;

double toRadians(double angle) //метод, який переводить у радіани 
{
	return angle * 3.14 / 180.0;
}

public: MathParser()  //конструктор без параметрів
{
			variables = map<string, double>();
}

public: void setVariable(string variableName, double variableValue)  //встановлюємо значення змінної
{
			variables[variableName] = variableValue;
}
		 
public: double getVariable(string variableName)  //отримуємо значення змінної
{
			if (variables.empty())
			{
				return 0.0;
			}

			map<string, double>::iterator it;
			it = variables.find(variableName);
			
				return (*it).second;
			
			
			
}


public: double Parse(string s)  //метод в який передаємо рядок для визначення значення
{

			Result result = PlusMinus(s);
			if (result.rest != "")
			{
				cout << "Error: can't full parse" << endl;
				cout << "rest: " + result.rest;

			}
			return result.acc;
}

private: Result PlusMinus(string s) //пошуку плюсу мінусу та обчислення
{
			 Result current = MulDiv(s);
			 double acc = current.acc;

			 while (current.rest.length() > 0) {
				 if (!(current.rest[0] == '+' || current.rest[0] == '-')) break;

				 char sign = current.rest[0];
				 string next = current.rest.substr(1, s.length());

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

private: Result Bracket(string s)  //пошук дужок
{
			 char zeroChar = s[0];
			 
			 if (zeroChar == '(')
			 {
				 Result r = PlusMinus(s.substr(1, s.length()));
				 if (r.rest != "" && r.rest[0] == ')')
				 {
					 r.rest = r.rest.substr(1, s.length());
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
			 // пошук функції або змінної(ім*я обов*язково повинно починатись з букви
			 while ((unsigned)i <= s.length() && (isalpha(s[i]) /*|| (isdigit(s[i]) && i >= 0)*/)) 
			 {
				 f += s[i];
				 i++;
			 }
			 if (f != "") 
			 { // якщо щось знайшли
				 if (s.length() >= (unsigned)i && s[i] == '(') 
				 { // і наступний символ дужка - це функція
					 Result r = Bracket(s.substr(i,s.length()));//was f.length
					 return processFunction(f, r);
				 }
				 else 
				 { // інакше - змінна
					 return  Result(getVariable(f), s.substr(i, s.length()));//erase=substr;was f.length
				 }
			 }
			 return Num(s);
}

private: Result MulDiv(string s)   //множення ділення та обчислення результату
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

				 string next = current.rest.substr(1, s.length());
				 Result right = Bracket(next);

				 if (sign == '*')
				 {
					 acc *= right.acc;
				 }
				 else
				 {
					 acc /= right.acc;
				 }

				 current = Result(acc, right.rest);
			 }
}

private: Result Num(string s)   //пошук числа
{
			 int i = 0;
			 int dot_cnt = 0;
			 bool negative = false;
			 // число також може починатись з мінуса
			 if (s[0] == '-')
			 {
				 negative = true;
				 s = s.substr(1, s.length());
			 }
			 // дозволяємо лише цифри та точку
			 while ((unsigned)i < s.length() && (isdigit(s[i]) || s[i] == ','))
			 {
				 // але також робимо перевірку чи лише одна точка
				 if (s[i] == ',' && ++dot_cnt > 1)
				 {
					 throw e.notValidNum();
				 }
				 i++;
			 }
			 if (i == 0)
			 { // якщо щось схоже на число ми не знайшли

				 throw e.canNotGetValidNum();
			 }

			 double dPart = atof(s.substr(0, i).c_str());
			 			 
			 //double dPart = atof(s.erase(0,i).c_str());
			 if (negative) dPart = -dPart;
			 string restPart = s.substr(i, s.length());

			 return  Result(dPart, restPart);
}

		 
private: Result processFunction(string func, Result r) // Визначення всіх функцій які ми можемо використовувати 
{
			 try
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
					 if (r.rest == "0")
					 {
						 throw(&Exceptions::notValidArgument  );
					 }
					 return  Result(tan(toRadians(r.acc)), r.rest);
				 }
				 else if (func == "ctan")
				 {
					 if (r.rest == "0")
					 {
						 throw(&Exceptions::notValidArgument);
					 }
					 
					 return  Result(1/tan(toRadians(r.acc)), r.rest);
				 }
				 else if (func == "exp")
				 {
					 return  Result(exp(r.acc), r.rest);
				 }
				 else if (func == "ln")
				 {
					 if (MyConvert::toDouble(r.rest) < 1)
					// if (Convert.SysStringToDouble(toSysString(r.rest)) < 1)
					 {
						 throw(&Exceptions::notValidArgument);
					 }
					 return  Result(log(r.acc), r.rest);
				 }
				 else if (func == "sqrt")
				 {
					 if (MyConvert::toDouble(r.rest) < 0)
					 {
						 throw(&Exceptions::notValidArgument);
					 }
					 return  Result(sqrt(r.acc), r.rest);
				 }

				 /* else if (func == "^")
				 {
				 string str =  Result(pow(r.acc,r.rest[0]), r.rest);
				 }*/
				 else
				 {
					 cout << "function '" + func + "' is not defined";

				 }
			 }
			 catch (exception)
			 {
				 //тут виключну ситуацію потрібно обробити
			 }

			 return r;
}

};