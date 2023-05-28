#include<iostream>
#include<string>
using namespace std;
/*
����(static)�ɹ� 
: ��� ��ü�� �����ϴ� �ɹ�
�� ����
static Ÿ�� �����̸�
static ����Ÿ�� �Լ��̸� {�Լ��ٵ�}

�� 

*/
class Student {
public:
	// ��ü����!
	string name;
	int sNo;

	Student(const string& name_arg, int stdNumber);
	~Student();

public:
	// ��� ���
	static int student_count;
	static void PrintStdCount();

};
int Student::student_count = 0;
void Student::PrintStdCount() {
	cout << "Student ��ü �� =" << student_count << "\n";
};
Student::Student(const string& name_arg, int stdNumber)
	:name(name_arg),sNo(stdNumber) {
	student_count++;
};
Student::~Student() {
	student_count--;
};
void Func() {
	Student std1("������", 20191234);// ��ü���� +1 (2)
	Student std2("������", 20171111);// ��ü���� +1 (3)

	Student::PrintStdCount(); //3

	// Func�Լ� ������, std1, std2 ��ü�� �Ҹ�
};

int main() {
	Student::PrintStdCount();//0
	Student std("������", 20202323); // ��ü���� +1 (1)
	Student::PrintStdCount(); //1
	Func();//3
	Student::PrintStdCount();//1
	cout << Student::student_count;
	



	return 0;
}