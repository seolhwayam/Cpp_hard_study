#include<iostream>
using namespace std;
	//★ 여러가지 출력하기(범위 기반 for문)
	// Modern
	//char letters[] = "Hell";
	//void* ps;
	//ps = letters;


	//range based for loop
	/*for (auto i : letters)
		cout << i;
		*/

	// Old School
		/*char s[] = "Hell";
		char s[] = { 'H','e','l','l','o' };
		void* ps;
		ps = s;
		
		for (auto i = 0; i < sizeof(s); i++)
		cout << *((char*)ps + i);
		cout << (char*)ps << endl;
		cout << s << endl;*/

	/*for (int i : {1, 3, 5, 7, -9})
		cout << i;*/

	//// ★ 구조체
	//struct StudentInfo{
	//	int id;
	//	float grade;
	//	char bloodType;

	//}s3 = { 20201236,4.4f,'0' },s4,s5; //② 선언 방법 2(선언+초기화) | ③ 선언 방법 3(선언)
	//int main() {
	//	//① 선언 방법 1
	//	StudentInfo s1 = { 20201234,3.5f,'o' };
	//	StudentInfo s2 = { 20201235, 3.7f,'A' };

	//	//③ 선언 방법 3(초기화)
	//	s4.bloodType = 'B';
	//	s4.id = 20201237;
	//	s4.grade = 2.9f;

	//	//③ 선언 방법 3(초기화 복사버전) : 복사여도 다른 메모리 공간 사용
	//	s5 = s2;

	//	cout << s2.grade << endl;
	//	cout << s1.id << endl;
	//	cout << s3.bloodType << endl;
	//	cout << s4.grade << endl;
	//	cout << s5.bloodType<<endl;


	////★ binary literals
	//	int a = 10;
	//	int b = 0xA;
	//	//[16진수]
	//	// - 16진수는 는 적도로 0x가 붙음(핵사대시)
	//	// - 아라비아 숫자 0~9까지 쓰고 부족한 부분을 A~F까지 가져와서 16진 체계 사용

	//	int c = 012;
	//	//[8진수]
	//	// - 앞에 그냥 0만 붙여요

	//	int d = 0b1010;
	//	//[2진수]
	//	// c++14, binary literals
	//
	//	
	//	cout << a << endl;
	//	cout << b << endl;
	//	cout << c << endl;
	//	cout << d << endl;

	//	return 0;
	//}

	