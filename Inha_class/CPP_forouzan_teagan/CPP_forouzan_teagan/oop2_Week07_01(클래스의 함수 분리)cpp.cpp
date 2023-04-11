#include<iostream>
using namespace std;

class point {
public:
	int x, y;

	void print();

};

void point::print() { // 어느 클래스에 속한 메소드인지 
	cout << x << "," << y << endl;
}

/*1. 클래스 정의 안에는 메소드의 프로토타입만 남겨둔다.
  2. 클래스 정의 밖에서는 범위 지정 연산자를 사용해서 함수를 정의(void point::print())*/

int main() {
	point p1, p2; // 객체 생성
	p1.x = 10;    // 맴버변수 초기화
	p1.y = 10;
	p2.x = 20;
	p2.y = 20;

	p1.print(); //클래스 내 메서드 사용시 
	



	return 0;
}
