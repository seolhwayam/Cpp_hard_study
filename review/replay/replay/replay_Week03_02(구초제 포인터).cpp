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
#include<iostream>
using namespace std;

int main() {


    cout << "2)char �迭" << endl;
    char bb[] = { 'a','b','c', 0};
    char* pbb = bb;

    cout << bb << endl;  //abc      
    cout << *bb << endl; //��������������������������������D?�Z           
    cout << &bb << endl; // a      
    cout << bb + 1 << endl; // 0000005AAD9DFA44         
    cout << bb + 5 << endl; // bc               
    cout << *bb + 1 << endl; //��������������������������������D?�Z                      
    cout << *bb + 5 << endl; //������������������������������??�Z                      
    cout << *(bb + 1) << endl; // b                        b
    cout << *(bb + 2) << endl; //c                        c

    cout << pbb << endl; //abc
    cout << *pbb << endl; // a
    cout << &pbb << endl; // pbb�� �ּ� 0000005AAD9DFA70 
    cout << &pbb + 1 << endl; // bc
    cout << pbb + 1 << endl; // ��������������������������������D?�Z
    cout << *pbb + 1 << endl; // 98
    cout << *(pbb + 1) << endl; //b
    cout << pbb[2] << endl; //c

    return 0;
}