#include<iostream>
using namespace std;
int main() {
	int a[10];
	bool isDuplicate;
	cout << "Enter ten numbers:" << endl;
	for (int i = 0; i <= 9; i++) {
		cin >> a[i];
	}
	cout << endl;
	cout << "The distinct numbers are:" << endl;
	for (int i = 0; i < 10; i++) {
		isDuplicate = false;
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				isDuplicate = true;
				break;
			}
		}
		if (!isDuplicate) {
			cout << a[i] << '\t';
		}
	}
	return 0;
}