//#include<iostream>
//using namespace std;
//struct Rectangle {
//	int x, y;
//	int w, h;
//};
//
//
//int main() {
//	Rectangle r = { 15,10,50,70 }; //r = ����ü ����
//	Rectangle* pr = &r; //������ ������ Ÿ���� ���ƾ� �Ѵ�(Ÿ�� : Rectangle) + ����ü ������ �ּ�(����ü ���� r :: &r) 
//
//	cout << r.x << " " << (*pr).x << endl;
//	cout << (*pr).y << " " << pr->y << endl;
//	//(*pr).y =  pr->y  [ȭ��ǥ ������]
//	cout << (*pr).h << " " << pr->h << endl;
//	cout << (*pr).h << " " << pr->h << endl;
//
//	pr->h = 40; //ȭ��ǥ �����ڸ� ���� �� ����
//	(*pr).w = 100;
//	r.x = 80;
//
//	cout << r.h << endl;
//	cout << r.w << endl;
//	cout << r.x << endl;
//	cout << r.w << " " << pr->w << endl;
//
//	/* ����ϴ� �پ��� ���
//	1) (*pr).y     (*����ü ����). �ش� ����
//	2) pr->y       ����ü ���� -> �ش� ����
//	3) r.y         ����ü ����.�ش� ����
//	*/
//
//	return 0;
//}