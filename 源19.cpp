#include<iostream>
using namespace std;
class Student {
private:
	int num;
	int score;
public:
	Student(int Num, int Score) {
		num = Num;
		score = Score;
	}
	int get_score() {
		return score;
	}
	int get_num() {
		return num;
	}

};
int max( Student student[],int size) {
	int max_score= student[0].get_score();
	for (int i = 0; i < size; i++)
	{
		if (student[i].get_score() > max_score)
			max_score = student[i].get_score();
	}
	
		
	return max_score;
}
int main() {
	Student stud[5] = {
		Student(001,86),
		Student(002,79),
		Student(003,94),
		Student(004,88),
		Student(005,84)
	};
	for (int i = 0; i < 5; i++) {
		cout << stud[i].get_num() << "号学生" << '\t' << stud[i].get_score() << endl;
	}
	cout << "最高分为：" << max(stud,5)<<endl;
	for (int i = 0; i < 5; i++) {
		if (stud[i].get_score() == max(stud,5))
			cout << "最高分获得者为" << stud[i].get_num() <<"号学生" <<endl;
	}
	return 0;
}