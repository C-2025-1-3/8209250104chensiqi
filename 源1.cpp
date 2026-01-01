#include<iostream>
using namespace std;

bool is_prime(int num) {
	int a = 2;
	if (num == 1)return false;
	else {
		for (int i = 2; (i <= num)&&(num % i != 0)==1; i++)a++;
		if (a == num)return true;
		else return false;
	}
	
}
int main() {
	int a[20][10] = { 0 };
	int i = 2;
	int count = 0;
	
	for (int j = 0; j <= 19; j++) {
		for (int k = 0; k <= 9; k++)
		{
			while (!is_prime(i)) {
				i++;
			}
			a[j][k] = i;
			i++;
			count++;
			if (count >= 200)break;
		}
		if (count >= 200)break;
	}
	for (int j = 0; j <= 19; j++)
	{
		for (int k = 0; k <= 9; k++)
			cout << a[j][k] << '\t';
		cout << endl;
	}
	return 0;
}