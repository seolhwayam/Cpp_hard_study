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
	cout << inha_3(0, 1) << endl;

	// �� ���� �Һ� �����߻�
	//auto inha_4 = [](int a, int b) ->{return a + b; }; 
	//[ĸ�ĺ�] (�Ű����� ����Ʈ) -> ����Ÿ��{�Լ� �ٵ� (�͸��Լ�)}  �� ����Ÿ�� ��� ���� �߻�

	// �� ���� �Һ� ���� �ذ�
	auto inha_4 = [](int a, int b) ->int{return a + b; };
	cout << inha_4(1, 2) << endl;

	auto inha_5 = [](int a, int b) ->int {return a + b; }(2, 3);
	cout << inha_5 << endl;


	// �� �Ҽ��� ����ϱ�
	auto inha_6 = [](float a, int b) ->int {return a + b; };
	cout << inha_6(7.7f, 2) << endl; // �Ҽ��� ���� ���� �߸�

	auto inha_7 = [](float a, int b) -> float {return a + b; };
	cout << inha_7(7.7f, 2) << endl; // �Ҽ��� ���� ���� �߳���

	auto inha_8 = [](float a, int b){return a + b; };
	cout << inha_8(7.7f, 2) << endl; // �ڵ����� float ��ȯ, �ڵ� ��ȯ

	// �� ĸ�ĺ� : �����Լ� �ȿ��� �����Ϸ��� �ٱ������� ����(������)
	//               ������ ������ �����Լ��� ���������� ���ͼ� �Լ� �ٵ� ���ٰ���

	short c = 5, d = 7;
	auto inha_9 = [c, d](float a, int b) ->int { //[c,d] ĸ�ĺ��� ���� �ܺ�(�Լ� �ٱ���) ���� �����ϰ� ��.
		return a + b + c + d;
	};
	
	cout << inha_9(1.9f, 2) << endl;





	return 0;
}