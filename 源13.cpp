#include<iostream>
using namespace std;
int* f() {
	int n=4;
	int* list = new int[n];
	for (int i = 0; i < n; i++)
	{
		list[i] = i + 1;
	}
	return list;
}
void main() {
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[] p;
}