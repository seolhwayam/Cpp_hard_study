#include<iostream>
using namespace std;

enum Color { RED, GREEN, BLUE, YELLOW};

int main() {

	Color c1 = RED;
	Color c2;
	int n = BLUE; //2
	int o = GREEN + BLUE;

	Color c3 = (Color)2;
	cout << c3 << endl;


	/*
	열거체
	①. 산술연산 불가
	c1 = GREEN + BLUE; [오류]
	c1 = c1 +2 ; [오류]

	int o = GREEN + BLUE; [가능] //3

	
	② 정수 열거체 변수 대입 불가
	c2 = 3; [오류]

	int n = BLUE; [가능] //2

	*받는 쪽 : 구조체 변수 => 오류
	*받는 족 : int 타입 변수 = > 가능
	=> 묵시적 캐스팅
	 : 열거체 심볼들이 묵시적 캐스팅으로 인하여 int타입으로 캐스팅
	*/



	return 0;
}