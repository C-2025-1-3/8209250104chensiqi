#include<iostream>
using namespace std;
void main() {
	int i, j, * pi, * pj;
	i = 5;
	j = 7;
	pi = &i;
	pj = &j;
	cout << i << '\t' << j << '\t' << pi << '\t' << pj;
	cout << &i << '\t' << *&i << '\t' << &j<< '\t' << *&j;

}