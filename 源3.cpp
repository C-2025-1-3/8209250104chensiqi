#include<iostream>
using namespace std;
int Total(int num) {
	int t;
	if (num == 1)
		t = 1;
	else
		t = 2 * (Total(num - 1) + 1);
	return t;
}
int main() {
	cout << "第一天总共摘了" << Total(10) << "个桃子" << endl;
	return 0;
}