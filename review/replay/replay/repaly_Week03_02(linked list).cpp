#include<iostream>
using namespace std;

struct LinkedList
{
	int date;
	LinkedList* p;
};

int main() {
	LinkedList a, b, c;
	a.date = 99;
	a.p = &b;
	b.date = 93;
	b.p = &c;
	c.date = 94;
	c.p = &a;

	cout << b.date << endl;
	cout << a.p->date << endl; //ȭ��ǥ ������
	cout << (*a.p).date << endl;


	// c�� �� ����ϴ� ���
	cout << c.date << endl; // c ���
	cout << b.p->date << endl; // b�� �̿��� ���(b�� ������ �ִ� c�� �ּ� Ȱ��)
	cout << a.p->p->date << endl; //a������ �ִ� b�� �ּ�(a.p) -> b�� ������ �ִ� c�� �ּ�(p) -> c�� ������ �ִ� date ��(date)


	/* ����ϴ� �پ��� ���
	1) (*pr).y     (*����ü ����). �ش� ����
	2) pr->y       ����ü ���� -> �ش� ����
	3) r.y         ����ü ����.�ش� ����
	*/
	
	cout << c.p->p->p->date << endl;




	return 0;
}