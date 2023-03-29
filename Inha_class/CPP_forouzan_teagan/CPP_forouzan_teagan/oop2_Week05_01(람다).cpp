#include<iostream>
using namespace std;

int main() {
	// Lambda Expression (C++11, 14)
	// 람다함수 : 이름 없는 함수
	// [캡쳐블럭] (매개변수 리스트) -> 리턴타입{함수 바디 (익명함수)};
	// 필수 : [캡쳐블럭] {함수 바디}


	// 생략가능
	[]()->void {};
	[]() {};
	[] {};

	// 맨 끝의 소괄호 쌍은 람다표현식을 즉시 실행시키는 역할
	[] {cout << "Hi Lambda!" << endl; }();

	
	auto inha_1 = [] {cout << "Hi Lambda!" << endl; }; //안쪽에 cout 객체가 있어서 바로inha_1(); 로 출력가능
	inha_1();

	auto inha_2 = []() {return 5 + 10; };//안쪽에 cout 객체가 없어서 바로inha_1(); 로 출력불가능
	cout << inha_2() << endl; // cout inha_2 필요

	auto inha_3 = [](int a, int b) {return a + b; };
	cout << inha_3(5, 10) << endl;



	return 0;
}