#include <iostream>
using namespace std;

struct StudentInfo {
	// 구조체 선언
	int id;
	float grade;
	char bloodType;


}s3 = { 20201236,4.4f,'o' }, s4; //② 구초제 변수 생성 및 초기화 | ③ 구조체 변수 생성
;
/* 구조체 선언
예약어 : struct 

*/

int main() {
	// ① 일반적인 구조체 변수 생성 및 초기화
	StudentInfo s1 = { 20201234,3.5f,'o' };
	StudentInfo s2 = { 20201235,3.7f,'A' };

	cout << s2.grade << endl;
	cout << s1.id << endl;
	cout << s3.bloodType << endl;

	//s4.bloodType = 'B'; //③ 구조체 변수 초기화
	//s4.id = 20201234;
	//s4.grade = 2.9f;

	s4 = s2; // 복사(deep카피 / 다른 공간 사용중)
	cout << s4.bloodType << endl;

	s4.bloodType = 'B';
	cout << s4.bloodType << endl;
	cout << s2.bloodType << endl;

	//구조체간의 복사는 같은
	return 0;
}