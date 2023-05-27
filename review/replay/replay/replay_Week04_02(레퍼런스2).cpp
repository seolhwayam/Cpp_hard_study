#include<iostream>
using namespace std;
/*
레퍼런스
1. 변수의 별명
2. 자료타입 &레퍼런스 변수 이름 = 대상변수
3. 포인터와 유사하게 동작
4. 대상변수와 같은 메모리 주소를 가진다.
5. 선언하는 시점에 초기화가 되어야 한다.
6. 처음 초기화할 때 외에는 대상을 변경할 수 없다.
7. const 레퍼런스 변수는 자신의 값을 변경할 수 없다.(레퍼런스 변수로 변경 불가, 대상 변수로는 변경 가능)


포인터
1. 메모리의 주소값을 저장하는 변수
2. 자료타입 *포인터 변수 이름 = &대상 변수
3. 대상변수와 다른 메모리 주소를 가진다.
*/
int main() {
	int a = 1;
	int b = 2;

	int& c = a; // 5번 rule(초기화)
	c = 3;
	c = b; // 6번 rule( b의 값을 대입, 참조하는것이 아님)
	c = 4;
	
	cout << c << endl;
	cout << a << endl;

	//===================================================
	int one = 1;
	int two = 2;

	const int& three = one;
	cout << three << endl;
	//three = two; [오류 : const 붙어서 레퍼런스 변수로는 수정 불가]
	 
	one = two; 
	cout << three << endl;





	return 0;
}