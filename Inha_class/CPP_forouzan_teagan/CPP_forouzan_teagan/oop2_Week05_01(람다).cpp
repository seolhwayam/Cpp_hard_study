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

	
	auto inha = [] {cout << "Hi Lambda!" << endl; };
	inha();



	return 0;
}