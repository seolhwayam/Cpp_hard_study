#include<iostream>
#include"point(repaly_Week09_01(const).h"
using namespace std;
/*
객체배열
1. 클래스이름 객체배열이름[사이즈] = {클래스(인수),클래스(인수)}
   ex) Point arr[4] = {Point(10,20),Point(11,27),Point(99,80),Point(1000,-99)}
객체 동적할당
*/

void main() {

	//Point arr[4] = {Point(10,20),Point(11,27),Point(99,80),Point(1000,-99)}; // 포인터 객체 배열
	//for (auto i = 0; i < 4; i++) {
	//	arr[i].Print();
	//}

	Point p1(5, 10);
	Point* p2 = new Point(); //default(기본생성)
	Point* p3 = new Point(50,50); //parameters(매개변수 생성)
	Point* p4 = new Point(p1); //copy constructor(복사 생성)

	(*p2).Print();
	p3->Print();
	p4->Print();

	delete p2;
	delete p3;
	delete p4;

	p2, p3, p4 = NULL;


}