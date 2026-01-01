#include<iostream>
using namespace std;
#include"mytemperature.h"
int main()
{
	double a, b;
	cout << "please input two numbers" << endl;
	cin >> a >> b;
	cout << "Celsius" << '\t' << "Fahrenheit" << endl;
	cout << a << '\t' << celsius_to_fah(a)<<endl;
	cout << "Fahrenheit" << '\t' << "Celsius" << endl;
    cout << b << '\t' << fah_to_celsius(b)<<endl;
}