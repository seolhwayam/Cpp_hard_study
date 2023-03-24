#include<iostream>
using namespace std;

int main() {
	/* 레퍼런스 문법
	① 자료타입 &변수이름 = 대상변수
	② 선언하는 시점에 반드시 초기화
	③ 레퍼런스 변수를 처음 정의할 때 외에는 다른 변수를 참조하게 만들 수 없음*/
	

	    
	short s = 5;    // 일반 변수 초기화

	short& rs = s;  // 래퍼런스 변수
	short* ps = &s; // 포인터 

	cout << s << " "  << &s << endl;  //일반 출력 
	cout << rs << " " << &rs << endl; // 래퍼런스 변수 출력
	cout << *ps << " "<< &ps << endl;// 포인터 출력




	int a = 1;
	int b = 2;

	int& c = a; //변수a의 별명 c | ② 선언하는 시점에 반드시 초기화
	c = 3;
	cout << c << "  " << a << endl;

	c = b;
	cout << c << "  " << a << endl;

	c = 4;
	cout << c << "  " << a << endl;

	cout << c << endl;




	/*래퍼런스 변수 : 대상이 되는 변수의 메모리 번지 수 사용(같은 번지 사용 | s==rs 같음)
	  포인터 : 별도의 메모리 공간*/



	/*레퍼런스 : 변수의 별명
				 변수의 별명을 정의해서 변수이름을 하나 더 가지는 것
				 포인터와 내부적으로 유사하게 동작, 사용하는 방식도 유사
				 */


	return 0;
}