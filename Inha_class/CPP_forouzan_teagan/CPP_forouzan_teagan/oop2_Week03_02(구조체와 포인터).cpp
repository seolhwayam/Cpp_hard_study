#include<iostream>
using namespace std;

struct Rectangle
{
	int x, y;
	int w, h;

};

int main() {
	//�� ����ü�� ������

	Rectangle r = { 15,10,50,70 }; //����ü ���� �� �ʱ�ȭ
	Rectangle* pr = &r; // ����ü ������ ���� = r�� �ּ�

	cout << r.x << " " << (*pr).x << endl;
	// r.x [15]  |  (*pr).x  [15]

	//�� ȭ��ǥ ������
	cout << (*pr).y << " " << pr->y << endl;
	//(*pr).y [10]  |   pr->y [10]

	cout << (*pr).h << " " << pr->h << endl;

	pr->h = 40; //h�ٽ� �ʱ�ȭ
	(*pr).w = 100;
	cout << (*pr).h << " " << pr->h << endl;
	cout << r.w << " " << pr->w << endl;
	return 0;

}