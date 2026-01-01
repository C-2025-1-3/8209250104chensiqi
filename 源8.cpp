#include<iostream>
#include<cstring>
using namespace std;
int index(char s1[], char s2[]) {
	const char* result = strstr(s2, s1);
	if (result != nullptr) {
		size_t position = result - s2;
		return position;
	}
	else return -1;
}
int main() {
	char s1[100] = { "" };
	char s2[100] = { "" };
	cout << "Enter the first string:" << endl;
	cin.getline(s1, 100);
	cout << "Enter the second string:" << endl;
	cin.getline(s2, 100);
	cout<<"indexOf("<<s1<<','<<s2<<")is"<<index(s1, s2)<<endl;
	return 0;
}