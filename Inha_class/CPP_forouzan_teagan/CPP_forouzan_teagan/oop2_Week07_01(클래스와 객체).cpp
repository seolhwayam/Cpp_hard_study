#include<iostream>
using namespace std;

/*����ü�� Ŭ����
	  �� class Ű���� ���
	  �� pubilc �� ���� ��������� ���õ� Ű���� ���
	  �� �ɹ��Լ�(�޼���)�� ������ �� �ִ�.	 (�޼���� Ŭ������ ����� �Լ�)

	  ����ü
	  �� struct Ű���� ���
	  �� pubilc  ��������
	  �� �ɹ������� ������ �� �ִ�.
	  */


class Point {
public:
	int x, y;

	void Print() {
		cout << x << "," << y << endl;
	}
};

int main() {
	Point p1, p2;
	p1.x = 10;
	p1.y = 10;
	p2.x = 20;
	p2.y = 20;

	p1.Print();
	p2.Print();



	return 0;
}