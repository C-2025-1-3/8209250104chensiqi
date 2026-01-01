#include<iostream>
using namespace std;
class Cuboid {
private:
	int length;
	int height;
	int width;
public:
	Cuboid(int Length, int Height, int Width) {
		length = Length;
		height = Height;
		width = Width;
	}
	int cubage();

};
 int Cuboid::cubage() {
	 int cub = length * height * width;
	 return cub;
 }
 int main() {
	 int len1, height1, wid1;
	 int len2, height2, wid2;
	 int len3, height3, wid3;
	 cout << "请输入第一个长方体的长，宽，高" << endl;
	 cin >> len1 >> height1 >> wid1;
	 cout << "请输入第二个长方体的长，宽，高" << endl;
	 cin >> len2 >> height2 >> wid2;
	 cout << "请输入第三个长方体的长，宽，高" << endl;
	 cin >> len3 >> height3>> wid3;
	 Cuboid cub1(len1, height1, wid1);
	 Cuboid cub2(len2, height2, wid2);
	 Cuboid cub3(len3, height3, wid3);
	 cout << "长方体一的体积为：" << cub1.cubage() << endl;
	 cout << "长方体二的体积为：" << cub2.cubage() << endl;
	 cout << "长方体三的体积为：" << cub3.cubage() << endl;
 }