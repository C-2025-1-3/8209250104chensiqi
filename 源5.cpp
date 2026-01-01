#include<iostream>
using namespace std;
void bubble_sort(double arr[],int size)
{
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0 ; j < size-1-i; j++)
		{
			if (arr[j] < arr[j + 1]) {
				double temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j +1] = temp;
			}
			
		}
	}
}
int main() {
	double arr[10] = { 1.0 };
	cout << "enter ten numbers:" << endl;
	for (int i = 0; i < 10; i++)
		cin >> arr[i];
	bubble_sort(arr, 10);
	for (int i = 0; i < 10; i++)
		cout << arr[i] << '\t';
	return 0;
}