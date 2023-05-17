#include<iostream>
using namespace std;

struct LinkedList
{
	int date;
	LinkedList* p;
};

int main() {
	LinkedList a, b, c;
	a.date = 99;
	a.p = &b;
	b.date = 93;
	b.p = &c;
	c.date = 94;
	c.p = &a;

	cout << b.date << endl;
	cout << a.p->date << endl; //화살표 연산자
	cout << (*a.p).date << endl;


	// c의 값 출력하는 방법
	cout << c.date << endl; // c 출력
	cout << b.p->date << endl; // b를 이용한 출력(b가 가지고 있는 c의 주소 활용)
	cout << a.p->p->date << endl; //a가지고 있는 b의 주소(a.p) -> b가 자지고 있는 c의 주소(p) -> c가 가지고 있는 date 값(date)


	/* 출력하는 다양한 방법
	1) (*pr).y     (*구조체 변수). 해당 변수
	2) pr->y       구조체 변수 -> 해당 변수
	3) r.y         구조체 변수.해당 변수
	*/
	
	cout << c.p->p->p->date << endl;




	return 0;
}