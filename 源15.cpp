#include<iostream>
using namespace std;
void range(int a[],int n) {
	for(int i=0;i<n-1;i++)
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] >a[j + 1]) {
				int temp;
				temp = a[j];
				a[j ] = a[j+1];
				a[j + 1] = temp;
			}
		}
}
int main() {
	int n;
	
	cout << "请输入数组长度：";
	cin >> n;
	int* arr = new int[n];
	cout << "请输入数组元素：";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	range(arr,n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << '\t';
	}
	delete[] arr;
	return 0;
}