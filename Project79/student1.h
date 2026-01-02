#ifndef STUDENT1_H
#define STUDENT1_H
#include<iostream>
#include<cstring>
using namespace std;
class Student {
public:
	void display();
	Student(int Num, const char Name[],char Sex);
	Student();
private:
	int num;
	char name[20];
	char sex;
};
#endif