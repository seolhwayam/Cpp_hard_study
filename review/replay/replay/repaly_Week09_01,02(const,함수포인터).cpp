//#include<iostream>
//using namespace std;
//#include"point(repaly_Week09_01(const).h"
//
///* const
//맴버 변수의 값을 변경하지 않는 메서드에서만 사용
//다른 개발자에게 이 함수의 맴버 변수의 값은 변경하지 않는다 라는 메세지
//실수로 맴버변수의 값을 바꾸려고 시도할 때, 컴파일러 단에서 오류 메세지
//Const 객체를 사용해서 이 함수를 호출할 수 있다.
//
//1. const 변수 : 변수의 값 변경 불가
//2. 포인터
//1)const 타입* 포인터 : 값 변경 불가
//2)타입* const 포인터 : 가르키는 주소 변경 불가
//3)const타입* const포인터  : 읽기전용
//3.함수
//1)타입 함수이름() const : 값 변경 불가
//
//
//<typedef>
// : 자료타입에 대한 별명
// 1. typedef 자료타입* 자료타입 별명;
//    ex) typedef unsigned int* ui_ptr; -> 별명 선언
//		ui_ptr pui = &a; -> 사용
//
//*/
//typedef void (Point::*FP1)(int); //클래스의 맴버함수 참조용 함수포인터
//void Area(const Point& pt) {
//	int area = pt.GetX() * pt.GetY();
//	cout << "0,0과 이 점이 이루는 사각형의 면적 = " << area << endl;
//}
//
//void main() {
//
//	////typedef : 자료타입에 별명을 만들어 준다.
//	//typedef unsigned int* ui_ptr;
//
//	//unsigned int a = 10000;
//	//unsigned int* pui = &a;
//
//	//typedef unsigned int* ui_ptr;
//	//unsigned int a = 10000;
//	//ui_ptr pui = &a;
//	//cout << *pui << endl;
//	Point pt(100, 100);
//
//	FP1 fp1 = &Point::SetY; //Point클래스의 SetY 맴버함수의 주소를 전달
//	(pt.*fp1)(50);
//
//
//
//
//	Area(pt);
//	pt.Print();
//	pt.SetX(50);
//	pt.Print();
//}