#include<iostream>
using namespace std;

class point {
public:
	int x, y;

	void print();

};

void point::print() { // ��� Ŭ������ ���� �޼ҵ����� 
	cout << x << "," << y << endl;
}

/*1. Ŭ���� ���� �ȿ��� �޼ҵ��� ������Ÿ�Ը� ���ܵд�.
  2. Ŭ���� ���� �ۿ����� ���� ���� �����ڸ� ����ؼ� �Լ��� ����(void point::print())*/

int main() {
	point p1, p2; // ��ü ����
	p1.x = 10;    // �ɹ����� �ʱ�ȭ
	p1.y = 10;
	p2.x = 20;
	p2.y = 20;

	p1.print(); //Ŭ���� �� �޼��� ���� 
	



	return 0;
}
