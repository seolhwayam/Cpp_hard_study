//#include<iostream>
//using namespace std;
///*
//레퍼런스 
//1. 변수의 별명
//2. 자료타입 &레퍼런스 변수 이름 = 대상변수
//3. 포인터와 유사하게 동작
//4. 대상변수와 같은 메모리 주소를 가진다.
//
//
//포인터
//1. 메모리의 주소값을 저장하는 변수
//2. 자료타입 *포인터 변수 이름 = &대상 변수
//3. 대상변수와 다른 메모리 주소를 가진다.
//*/
//int main() {
//	short s = 5;
//
//	short& rs = s; //레퍼런스 변수
//	short* ps = &s;// 포인터 변수
//
//	cout << s << " " << &s << endl;
//	// 대상변수 값 출력 / 000000A86813F674
//	cout << rs << " " << &rs << endl;
//	// 레퍼런스 변수 출력 / 000000A86813F674
//	cout << *ps << " " << &ps << endl;
//	// 포인터 변수 출력(대상의 값*) / 000000A86813F6B8
//
//	return 0;
//}