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
	cout << inha_3(0, 1) << endl;

	// ★ 형식 불비 에러발생
	//auto inha_4 = [](int a, int b) ->{return a + b; }; 
	//[캡쳐블럭] (매개변수 리스트) -> 리턴타입{함수 바디 (익명함수)}  ★ 리턴타입 없어서 에러 발생

	// ★ 형식 불비 에러 해결
	auto inha_4 = [](int a, int b) ->int{return a + b; };
	cout << inha_4(1, 2) << endl;

	auto inha_5 = [](int a, int b) ->int {return a + b; }(2, 3);
	cout << inha_5 << endl;


	// ♠ 소수점 출력하기
	auto inha_6 = [](float a, int b) ->int {return a + b; };
	cout << inha_6(7.7f, 2) << endl; // 소수점 이후 숫자 잘림

	auto inha_7 = [](float a, int b) -> float {return a + b; };
	cout << inha_7(7.7f, 2) << endl; // 소수점 이후 숫자 잘나옴

	auto inha_8 = [](float a, int b){return a + b; };
	cout << inha_8(7.7f, 2) << endl; // 자동으로 float 변환, 자동 변환

	// ▶ 캡쳐블럭 : 람다함수 안에서 참조하려는 바깥변수를 지정(多가능)
	//               지정된 변수는 람다함수의 영역안으로 들어와서 함수 바디에 접근가능

	short c = 5, d = 7;
	auto inha_9 = [c, d](float a, int b) ->int { //[c,d] 캡쳐블럭이 람다 외부(함수 바깥쪽) 참조 가능하게 함.
		return a + b + c + d;
	};
	
	cout << inha_9(1.9f, 2) << endl;





	return 0;
}