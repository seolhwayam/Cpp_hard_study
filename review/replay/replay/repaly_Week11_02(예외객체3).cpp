#include<iostream>
using namespace std;
/*
객체를 예외로 던지기
1. 객체 안에 여러가지 다양한 정보를 담을 수 있다.
2. 객체의 맴버변수들도 다같이 던져기는 것이기 때문에 원하는 만큼 변수를 만들어서 던질수있음
3. 예외 : 함수를 여러개 건너가지고도 전달 가능.
 
 문제점
 1. 구조적 예외처리 문제 -> 리소트 정리전 함수가 먼저 끝남
 (예시같은 경우 delete부분전에 함수가 끝나서 메모리 누수현상 발생)
*/

class SmartPointer {
public:
	SmartPointer(char* p) : ptr(p) {

	}
	~SmartPointer() {
		cout << "소멸자 동작 : 메모리 해제~" << endl;
		delete[] ptr;

	}
	char* const ptr;
};

void B() {
	throw "Exception!!";
}
void A() {
	char* p = new char[100]; // 동적메모리 할당
	SmartPointer sp(p);
	cout << "예외가 발생하기 전" << endl;
	B();
	cout << "예외가 발생한 후" << endl;


}

void main() {
	try {
		A();
	}
	catch (const char* ex) {
		cout << "예외 잡음 : " << ex << endl;
	}

}