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
//#include<iostream>
//using namespace std;
//
//int main() {
//
//
//    cout << "2)char �迭" << endl;
//    char bb[] = { 'a','b','c', 0};
//    char* pbb = bb;
//
//    cout << bb << endl;  //abc      
//    cout << *bb << endl; //a          
//    cout << &bb << endl; // 00000098B4AFF504     
//    cout << bb + 1 << endl; // bc      
//    cout << bb + 5 << endl; // ������������������������������?����           
//    cout << *bb + 1 << endl; //98  [a�� �ƽ�Ű �ڵ�[97]+1 = 98]                   
//    cout << *bb + 5 << endl; //102                     
//    cout << *(bb + 1) << endl; // b                        
//    cout << *(bb + 2) << endl; //c                        
//
//    cout << pbb << endl; //abc
//    cout << *pbb << endl; // a
//    cout << &pbb << endl; //00000098B4AFF528
//    cout << &pbb + 1 << endl; //00000098B4AFF530
//    cout << pbb + 1 << endl; // bc
//    cout << *pbb + 1 << endl; // 98
//    cout << *(pbb + 1) << endl; //b
//    cout << pbb[2] << endl; //c
//
//    return 0;
//}