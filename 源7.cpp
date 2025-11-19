#include<iostream>
using namespace std;
int main()
{
	int a, b, d;
	double c;
	cout << "Please make a choise:(1:+;2:-;3:*;4:/;5:%)" << endl;
	cin >> d;//1:+;2:-;3:*;4:%;
	cin >> a >> b;
	if (d == 1) { c = a + b; }
	if (d == 2) { c = a - b; }
	if (d == 3) { c = a * b; }
	if (d == 4) {
		if (b != 0) { c = a / b; }
		else { cout << "除数不能为0" << endl; }
	}
	if (d == 5) { c = a % b; }
	cout << "结果是：" << c << endl;
	return 0;


}