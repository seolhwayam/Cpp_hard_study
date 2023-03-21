#include<iostream>
using namespace std;

struct Rectangle
{
	int x, y;
	int w, h;

};

int main() {
	//★ 구조체와 포인터

	Rectangle r = { 15,10,50,70 }; //구조체 선언 및 초기화
	Rectangle* pr = &r; // 구조체 포인터 생성 = r의 주소

	cout << r.x << " " << (*pr).x << endl;
	// r.x [15]  |  (*pr).x  [15]

	//★ 화살표 연산자
	cout << (*pr).y << " " << pr->y << endl;
	//(*pr).y [10]  |   pr->y [10]

	cout << (*pr).h << " " << pr->h << endl;

	pr->h = 40; //h다시 초기화
	(*pr).w = 100;
	cout << (*pr).h << " " << pr->h << endl;
	cout << r.w << " " << pr->w << endl;
	return 0;

}