#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	int sum;
	cout << "请输入三角形三边长：" << endl;
	cin >> a >> b >> c;
	sum = a + b + c;
	if (a < b) {
		int temp = a; a = b; b = temp;
	}
	if (a < c) {
		int temp = a; a = c; c = temp;
	}
	if (b < c) {
		int temp = b; b = c; c = temp;
	}
	cout << a << '\t' << b << '\t' << c << endl;
	if ((a == b || b == c) && (b + c) > a) {
		cout << "这是一个等腰三角形" << endl;
	}
	else { cout << "这不是一个等腰三角形" << endl; }
	return 0;
}