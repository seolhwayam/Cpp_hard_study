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

	
	auto inha = [] {cout << "Hi Lambda!" << endl; };
	inha();



	return 0;
}