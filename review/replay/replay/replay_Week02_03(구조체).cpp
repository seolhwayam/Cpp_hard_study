//#include <iostream>
//using namespace std;
//
//struct StudentInfo {
//	// 구조체 선언
//	int id;
//	float grade;
//	char bloodType;
//
//
//}s3 = { 20201236,4.4f,'o' }, s4,s5; //② 구초제 변수 생성 및 초기화 | ③ 구조체 변수 생성
//;
///* 구조체 선언
//예약어 : struct 
//
//*/
//
//int main() {
//	// ① 일반적인 구조체 변수 생성 및 초기화
//	//StudentInfo s1 = { 20201234,3.5f,'o' };
//	StudentInfo s2 = { 20201235,3.7f,'A' };
//
//	StudentInfo s1[2] = { {2020,3.5f,'h'},{2020,5.5f,'j'} };
//
//	cout << s2.grade << endl;
//	cout << s1[1].id << endl;
//	cout << s3.bloodType << endl;
//
//	s4.bloodType = 'B'; //③ 구조체 변수 초기화
//	s4.id = 20201234;
//	s4.grade = 2.9f;
//
//	s5 = s2; // ④ 복사(deep카피 / 다른 공간 사용중, 카피 후 s5내용 바꾸어도 s2는 변하지 않음)
//	cout << s5.bloodType << endl;
//
//	s5.bloodType = 'B';
//	cout << s5.bloodType << endl;
//	cout << s2.bloodType << endl;
//
//	
//	return 0;
//}
//
