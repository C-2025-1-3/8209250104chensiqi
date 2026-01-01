#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int parseHex(const char* const hexString)
{
	char* end;
	int num1 = strtol(hexString, &end, 16);
	int var1;
	if (end != 0) {
		var1 = static_cast<int>(num1);
	}
	return var1;
}
int main() {
	int a;
	a=parseHex("A5");
	cout << a;
	return 0;
}