//#include<iostream>
//using namespace std;
//struct Rectangle {
//	int x, y;
//	int w, h;
//};
//
//
//int main() {
//	Rectangle r = { 15,10,50,70 }; //r = 구조체 변수
//	Rectangle* pr = &r; //포인터 변수는 타입이 같아야 한다(타입 : Rectangle) + 구조체 변수의 주소(구조체 변수 r :: &r) 
//
//	cout << r.x << " " << (*pr).x << endl;
//	cout << (*pr).y << " " << pr->y << endl;
//	//(*pr).y =  pr->y  [화살표 연산자]
//	cout << (*pr).h << " " << pr->h << endl;
//	cout << (*pr).h << " " << pr->h << endl;
//
//	pr->h = 40; //화살표 연산자를 통한 값 변경
//	(*pr).w = 100;
//	r.x = 80;
//
//	cout << r.h << endl;
//	cout << r.w << endl;
//	cout << r.x << endl;
//	cout << r.w << " " << pr->w << endl;
//
//	/* 출력하는 다양한 방법
//	1) (*pr).y     (*구조체 변수). 해당 변수
//	2) pr->y       구조체 변수 -> 해당 변수
//	3) r.y         구조체 변수.해당 변수
//	*/
//
//	return 0;
//}