#include<iostream>
#include"point(repaly_Week09_01(const).h"
using namespace std;
/*
��ü�迭
1. Ŭ�����̸� ��ü�迭�̸�[������] = {Ŭ����(�μ�),Ŭ����(�μ�)}
   ex) Point arr[4] = {Point(10,20),Point(11,27),Point(99,80),Point(1000,-99)}
��ü �����Ҵ�
*/

void main() {

	//Point arr[4] = {Point(10,20),Point(11,27),Point(99,80),Point(1000,-99)}; // ������ ��ü �迭
	//for (auto i = 0; i < 4; i++) {
	//	arr[i].Print();
	//}

	Point p1(5, 10);
	Point* p2 = new Point(); //default(�⺻����)
	Point* p3 = new Point(50,50); //parameters(�Ű����� ����)
	Point* p4 = new Point(p1); //copy constructor(���� ����)

	(*p2).Print();
	p3->Print();
	p4->Print();

	delete p2;
	delete p3;
	delete p4;

	p2, p3, p4 = NULL;


}