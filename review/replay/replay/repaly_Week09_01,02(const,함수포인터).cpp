//#include<iostream>
//using namespace std;
//#include"point(repaly_Week09_01(const).h"
//
///* const
//�ɹ� ������ ���� �������� �ʴ� �޼��忡���� ���
//�ٸ� �����ڿ��� �� �Լ��� �ɹ� ������ ���� �������� �ʴ´� ��� �޼���
//�Ǽ��� �ɹ������� ���� �ٲٷ��� �õ��� ��, �����Ϸ� �ܿ��� ���� �޼���
//Const ��ü�� ����ؼ� �� �Լ��� ȣ���� �� �ִ�.
//
//1. const ���� : ������ �� ���� �Ұ�
//2. ������
//1)const Ÿ��* ������ : �� ���� �Ұ�
//2)Ÿ��* const ������ : ����Ű�� �ּ� ���� �Ұ�
//3)constŸ��* const������  : �б�����
//3.�Լ�
//1)Ÿ�� �Լ��̸�() const : �� ���� �Ұ�
//
//
//<typedef>
// : �ڷ�Ÿ�Կ� ���� ����
// 1. typedef �ڷ�Ÿ��* �ڷ�Ÿ�� ����;
//    ex) typedef unsigned int* ui_ptr; -> ���� ����
//		ui_ptr pui = &a; -> ���
//
//*/
//typedef void (Point::*FP1)(int); //Ŭ������ �ɹ��Լ� ������ �Լ�������
//void Area(const Point& pt) {
//	int area = pt.GetX() * pt.GetY();
//	cout << "0,0�� �� ���� �̷�� �簢���� ���� = " << area << endl;
//}
//
//void main() {
//
//	////typedef : �ڷ�Ÿ�Կ� ������ ����� �ش�.
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
//	FP1 fp1 = &Point::SetY; //PointŬ������ SetY �ɹ��Լ��� �ּҸ� ����
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