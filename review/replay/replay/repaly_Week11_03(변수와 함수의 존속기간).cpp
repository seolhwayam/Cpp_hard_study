#include<iostream>
using namespace std;
extern int ga;

/*
extern Ű����
: �ٸ��ҽ����Ͽ� ���ǵ� �������� ���

* �����̸��� ������ ��쿡�� ����� ��ġ�� ������ ����ȴ�.

*/
int g = 5; //��������
int a = 8;

void static_test() {
	static int n = 0;
	cout << n++ << endl;
}

void test() {
	int l = 7; //���� ����
}
int main() {
	int l = 5;
	cout << a << endl; //8
	int a = 9;
	cout << a << endl; //9
	{
		cout << a << endl; //9
		int a = 10;
		cout << a << endl; // 10
	}
	cout << a << endl; //9

	static_test();
	static_test();
	static_test();


	return 0;
}