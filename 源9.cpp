#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	int gcd, lcm;
	cout << "Please input two numbers" << endl;
	cin >> a >> b;
	d = a * b;
	if (a < b) { int temp = a; a = b; b = temp; }
	for (c = 1; c <= b; c++) {
		if (a % c == 0 && b % c == 0) { gcd = c; }
	}cout << "GCD:" << gcd << endl;
	for (c = a; c <= d; c++) {
		if (c % a == 0 && c % b == 0) {
			lcm = c;
			break;
		}
	}
	cout << "LCM:" << lcm << endl;
	return 0;
}
