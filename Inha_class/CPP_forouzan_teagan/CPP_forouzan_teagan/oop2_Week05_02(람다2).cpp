#include<iostream>
using namespace std;

int main() {
	//short c = 5, d = 7;
	//auto inha_1 = [c, d](float a, int b)-> int { //[c,d] �����μ��� ĸó >> �׷��� ���� X ������ ��ĳ��;;
	//	return a + b + c + d;
	//};

	//cout << inha_1(1.9f, 2) << endl;

	short c = 5, d = 7;
	auto inha_2 = [&c, d](float a, int b)-> int { 
		c = -5;
		return a + b + c + d;
	};

	cout << inha_2(1.9f, 2) << endl;


	return 0;
}