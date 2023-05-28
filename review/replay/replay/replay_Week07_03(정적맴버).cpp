#include<iostream>
#include<string>
using namespace std;
/*
정적(static)맴버 
: 모든 객체가 공유하는 맴버
ⓛ 생성
static 타입 변수이름
static 리턴타입 함수이름 {함수바디}

② 

*/
class Student {
public:
	// 객체마다!
	string name;
	int sNo;

	Student(const string& name_arg, int stdNumber);
	~Student();

public:
	// 모두 사용
	static int student_count;
	static void PrintStdCount();

};
int Student::student_count = 0;
void Student::PrintStdCount() {
	cout << "Student 객체 수 =" << student_count << "\n";
};
Student::Student(const string& name_arg, int stdNumber)
	:name(name_arg),sNo(stdNumber) {
	student_count++;
};
Student::~Student() {
	student_count--;
};
void Func() {
	Student std1("김인하", 20191234);// 객체생성 +1 (2)
	Student std2("박인하", 20171111);// 객체생성 +1 (3)

	Student::PrintStdCount(); //3

	// Func함수 끝날때, std1, std2 객체가 소멸
};

int main() {
	Student::PrintStdCount();//0
	Student std("최인하", 20202323); // 객체생성 +1 (1)
	Student::PrintStdCount(); //1
	Func();//3
	Student::PrintStdCount();//1
	cout << Student::student_count;
	



	return 0;
}