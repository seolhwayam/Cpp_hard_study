#include<iostream>
using namespace std;
/*
함수
1. 기능

*/

void Hello(int);  // 인사하는 함수 / 매개변수 타입만 적어줘도 됨!

int Factorial(int); // 팩토리얼 함수, 반복문 이용

int FactorialRecursion(int); // 팩토리얼 함수, 재귀함수 이용


/*프로토 타입[리턴 타입 함수이름(매개변수); ]
* 1. 프로토 타입 // 설명 -> 무슨 기능인지 쉽게 확인
* */


int main() {
	int in;
	cin >> in;

	cout << Factorial(in) << endl;
	cout << FactorialRecursion(in) << endl;
	Hello(5); // 함수 호출
	
	return 0;
}

int Factorial(int f) {
	int result = 1;

	for (int i = 1; i <= f; i++) {
		result = result * i;
	}
	return result;

}

int FactorialRecursion(int f) {
	//① f = 4
	//③ f = 3
	//⑤ f = 2
	//⑥ f = 1
	if (f <= 1)
		//⑦ f=1이므로 return 1로 종료
		return 1;
	else
		return f * FactorialRecursion(f - 1); //⑪ return 24
	//②       4* FactorialRecursion(3)  ⑩ 24(4*6)  
	//④       3* FactorialRecursion(2)  ⑨ 6(2*3)  
	//⑤       2* FactorialRecursion(1)  ⑧ 2(2*1)  
	
}



void Hello(int n) {

	cout << "HI~" << n << endl;

}