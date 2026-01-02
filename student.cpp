
#include"student1.h"
void Student::display() {
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
Student::Student(int Num,  const char Name[], char Sex) {
	num = Num;
	strcpy_s(name, sizeof(name),Name);
	sex = Sex;
}
Student::Student() :num(0), sex(0) {
	name[0] = '\0';
}