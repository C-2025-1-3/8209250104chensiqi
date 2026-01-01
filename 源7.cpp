#include<iostream>
using namespace std;
void merge(const int list1[], const int list2[], int size1, int size2,int list3[])
{
	for (int i = 0; i < size1; i++) {
		list3[i] = list1[i];
	}
	int n = 0;
	for ( int k = size1; k < size1 + size2; k++) {
		list3[k] = list2[n];
		n++;
	}
	for(int i=0;i<size1+size2-1;i++)
		for (int j = 0; j < size1 + size2 - 1 - i; j++) {
			int temp;
			if (list3[j] > list3[j + 1]) {
				temp = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = temp;
			}
		}
}
int main() {
	int list1[6];
	int list2[5]; 
	int list3[] = { 0 };
	cout << "Please input list1:" << endl;
	for (int i=0; i < 6; i++)cin >> list1[i];
	cout << "Please input list2:" << endl;
	for (int i=0; i < 5; i++)cin >> list2[i];
	merge(list1, list2, 6, 5, list3);
	cout << "The merged list is:" << endl; 
	for (int i=0; i < 11; i++)cout << list3[i] << '\t';
	return 0;
	
}