//#include <iostream>
//#include<string>
//using namespace std;
//class Student {
//public:
//	string name; // ��ü ���� ���� ����
//	int sNo;     // ��ü ���� ���� ����
//
//	Student(const string& name_arg, int stdNumber); //������
//
//	~Student(); // �Ҹ���
//public:
//	static int student_count; // ��� ��ü ����
//	static void PrintStdCount(); // ��� ��ü ����
//};
//int Student::student_count = 0;
//void Student::PrintStdCount() {
//	cout << "Student ��ü �� = " << student_count << endl;
//}
//Student::Student(const string& name_arg, int stdNumber) { // ������
//	student_count++;
//
//	name = name_arg;
//	sNo = stdNumber;
//}
//Student:: ~Student() { // �Ҹ���
//	student_count--;
//}
//void Func() {
//	Student std1("������", 20191234); // �� ��ü���� +1
//	Student std2("������", 20171111); // �� ��ü���� +!
//	// Student ��ü ����
//
//	Student::PrintStdCount();
//	//Func�Լ� ���� �� std1, std2��ü�� �Ҹ�
//	//Func ���� �� �Ҹ��� ����
//}
//
//int main() {
//	/*�����ɹ� (static) <->  ���� �ɹ�(Dynamic)
//	- �����ɹ�(static)
//	  : ��� ��ü�� �����ϴ� �ɹ�
//	    ��ü���� ���� ���
//		Ŭ������, �޼ҵ� �̸�()
//	  */
//
//	Student::PrintStdCount();
//	Student std("������", 20202323); // �� ��ü ���� +1
//	Student::PrintStdCount(); // 1�����
//	Func(); // ��ü ���� ��,��
//	Student::PrintStdCount(); //3�� ���
//
//	return 0;
//}