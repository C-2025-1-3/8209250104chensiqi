#include<iostream>
using namespace std;

int main() {
	bool a[100] = { 0 };
	for (int i = 1; i < 100; i++) {
		for (int j = i - 1; j < 100; j += i) {
			a[j] = !a[j];
	}
	}
	for (int i = 0; i < 100; i++) {
		if (a[i]) {
			cout << i + 1 << '\t';
		}
	}
	return 0;
}