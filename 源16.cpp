#include<iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	int get_hour() {
		return hour;
	}
	void set_hour(int a) {
		hour = a;
	}
	int get_minute() {
		return minute;
	}
	void set_minute(int a) {
		minute = a;
	}
	int get_sec() {
		return  sec;
	}
	void set_sec(int a) {
		sec = a;
	}
};
int main() {
	Time tl;
	int h, m, s;
	cout << "ÇëÉèÖÃÊ±¼ä";
	cin >> h>> m>> s;
	tl.set_hour(h);
	tl.set_minute(m);
	tl.set_sec(s);
	cout << tl.get_hour() << ':' << tl.get_minute() << ':' << tl.get_sec();
	return 0;


}