#include<iostream>
using namespace std;

// 1. inline keyword (C++17) �ζ���
//inline void Test() {
//	cout << "1" << endl;
//	cout << "2" << endl;
//	cout << "3" << endl;
//
//	/*inline�� �ڵ带 �����ͼ� ��������*/
//
//}
//
//int main() {
//	/*�ζ��� : �Լ��� �ִ� ������ �״�� �Ű� ���� ��(����)
//	           ª�� �ڵ� ���� Ȱ��!*/
//
//	Test();
//	/*
//
//	inline code�� ����
//	==
//	cout << "1" << endl;
//	cout << "2" << endl;
//	cout << "3" << endl;
//
//	�ڵ��ζ���
//
//	*/
//
//
//
//	return 0;
//}
class Test {
public:
	static int a;
};
int Test::a = 10;

int main() {
	


	return 0;
}