//#include <iostream>
//#include<string>
//using namespace std;
//class Student {
//public:
//	string name; // 객체 마다 따로 공유
//	int sNo;     // 객체 마다 따로 공유
//
//	Student(const string& name_arg, int stdNumber); //생성자
//
//	~Student(); // 소멸자
//public:
//	static int student_count; // 모든 객체 공유
//	static void PrintStdCount(); // 모든 객체 공유
//};
//int Student::student_count = 0;
//void Student::PrintStdCount() {
//	cout << "Student 객체 수 = " << student_count << endl;
//}
//Student::Student(const string& name_arg, int stdNumber) { // 생성자
//	student_count++;
//
//	name = name_arg;
//	sNo = stdNumber;
//}
//Student:: ~Student() { // 소멸자
//	student_count--;
//}
//void Func() {
//	Student std1("김인하", 20191234); // ② 객체생성 +1
//	Student std2("박인하", 20171111); // ③ 객체생성 +!
//	// Student 객체 생성
//
//	Student::PrintStdCount();
//	//Func함수 끝날 때 std1, std2객체가 소멸
//	//Func 끝날 시 소멸자 동작
//}
//
//int main() {
//	/*정적맴버 (static) <->  동적 맴버(Dynamic)
//	- 정적맴버(static)
//	  : 모든 객체가 공유하는 맴버
//	    객체생성 없이 사용
//		클래스명, 메소드 이름()
//	  */
//
//	Student::PrintStdCount();
//	Student std("최인하", 20202323); // ① 객체 생성 +1
//	Student::PrintStdCount(); // 1명출력
//	Func(); // 객체 생성 ②,③
//	Student::PrintStdCount(); //3명 출력
//
//	return 0;
//}