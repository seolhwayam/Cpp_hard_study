#include<iostream>
using namespace std;

int main() {
	// Lambda Expression (C++11, 14)
	// �����Լ� : �̸� ���� �Լ�
	// [ĸ�ĺ�] (�Ű����� ����Ʈ) -> ����Ÿ��{�Լ� �ٵ� (�͸��Լ�)};
	// �ʼ� : [ĸ�ĺ�] {�Լ� �ٵ�}


	// ��������
	[]()->void {};
	[]() {};
	[] {};

	// �� ���� �Ұ�ȣ ���� ����ǥ������ ��� �����Ű�� ����
	[] {cout << "Hi Lambda!" << endl; }();

	
	auto inha_1 = [] {cout << "Hi Lambda!" << endl; }; //���ʿ� cout ��ü�� �־ �ٷ�inha_1(); �� ��°���
	inha_1();

	auto inha_2 = []() {return 5 + 10; };//���ʿ� cout ��ü�� ��� �ٷ�inha_1(); �� ��ºҰ���
	cout << inha_2() << endl; // cout inha_2 �ʿ�

	auto inha_3 = [](int a, int b) {return a + b; };
	cout << inha_3(5, 10) << endl;



	return 0;
}