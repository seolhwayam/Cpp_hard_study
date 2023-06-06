//#include<iostream>
//using namespace std;
//extern int ga;
//
///*
//extern 키워드
//: 다른소스파일에 정의된 전역변수 사용
//-사용법
//extern  변수이름
//extern  리턴타입 함수이름 [c++타입 파일]
//extern  "C" 리턴타입 함수이름 [C타입 파일]
//
//register 키워드
// : 가장빠른 저장공간인 register로 진행해줘(운영체제한테 요청)
//- register 타입 변수이름
//
//* 변수이름이 동일한 경우에는 가까운 위치의 변수가 실행된다.
//* 
//* 외부의 static붙은 변수,함수 사용 불가
//
//*/
//int g = 5; //전역변수
//int a = 8;
//
//void static_test() {
//	static int n = 0;
//	cout << n++ << endl;
//}
//
//void test() {
//	int l = 7; //지역 변수
//}
//int main() {
//	register int i = 0;
//	while (i < 100000) {
//		i++;
//	}
//
//	int l = 5;
//	cout << a << endl; //8
//	int a = 9;
//	cout << a << endl; //9
//	{
//		cout << a << endl; //9
//		int a = 10;
//		cout << a << endl; // 10
//	}
//	cout << a << endl; //9
//
//	static_test();
//	static_test();
//	static_test();
//
//
//	return 0;
//}