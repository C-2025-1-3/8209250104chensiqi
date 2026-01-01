#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point() :x(60), y(80) {};
	
	void setPoint(int i, int j)
	{
		x = i + 60;
		y = j + 80;
	}
	void display() {
		cout << '(' << x << ',' << y << ')' << endl;
	 }
};
int main() {
	Point pot1;
	pot1.display();
	int i, j;
	cout << "ÇëÊäÈëÔöÁ¿£º" << endl;
	cin >> i >> j;
	pot1.setPoint(i, j);
	pot1.display();
	return 0;
}