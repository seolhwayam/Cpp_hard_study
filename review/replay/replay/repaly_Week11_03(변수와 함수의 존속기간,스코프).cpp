//#include<iostream>
//using namespace std;
//extern int ga;
//
///*
//extern Ű����
//: �ٸ��ҽ����Ͽ� ���ǵ� �������� ���
//-����
//extern  �����̸�
//extern  ����Ÿ�� �Լ��̸� [c++Ÿ�� ����]
//extern  "C" ����Ÿ�� �Լ��̸� [CŸ�� ����]
//
//register Ű����
// : ������� ��������� register�� ��������(�ü������ ��û)
//- register Ÿ�� �����̸�
//
//* �����̸��� ������ ��쿡�� ����� ��ġ�� ������ ����ȴ�.
//* 
//* �ܺ��� static���� ����,�Լ� ��� �Ұ�
//
//*/
//int g = 5; //��������
//int a = 8;
//
//void static_test() {
//	static int n = 0;
//	cout << n++ << endl;
//}
//
//void test() {
//	int l = 7; //���� ����
//}
//int main() {
//	register int i = 0;
//	while (i < 100000) {
//		i++;
//	}
//
//	int l = 5;
//	cout << a << endl; //8
//	int a = 9;
//	cout << a << endl; //9
//	{
//		cout << a << endl; //9
//		int a = 10;
//		cout << a << endl; // 10
//	}
//	cout << a << endl; //9
//
//	static_test();
//	static_test();
//	static_test();
//
//
//	return 0;
//}