//#include<iostream>
//using namespace std;
//
//struct LinkedList
//{
//	int data;
//	LinkedList* p; // LinkedListŸ���� ������ ���� p
//};
//
//int main() {
//	LinkedList a, b, c; //LinkedListŸ��r����ü ���� a,b,c����
//	a.data = 99; // a�ʱ�ȭ
//	a.p = &b; // b����ü�� �ּ�
//
//	b.data = 93;
//	b.p = &c; // c����ü�� �ּ�
//
//	c.data = 94;
//	c.p = &a; // a����ü�� �ּ�
//
//	/*����ü �ּҸ� ���� �� �ִ� ������
//	  p�� ����ü ������ ���� �� �ִ� ����ü ������ �̱� ����*/ 
//
//
//	cout << b.data << endl;
//	cout << a.p->data  << endl;
//
//	cout << c.data << endl;
//
//	cout << b.p->data << endl;
//	cout << (*b.p).data << endl;
//
//	cout << a.p->p->data << endl;  
//	// a�� b�� �ּҸ� ������ �ִ�. b�� c���ּҸ� ������ �ִ�.
//	// a.p->p (a�� ���� p(b���ּ�) ->data (b�� �ּҸ� ���� b�� ������ �ִ� c���ּ� -> c�� �� ����)
//
//	cout << c.p->p->p->data << endl;
//	//  a�� �ּ� -> b���ּ� -> c���ּ� -> c�� data ���
//	// c������ �ѹ��� ����
//	
//
//
//	return 0;
//}