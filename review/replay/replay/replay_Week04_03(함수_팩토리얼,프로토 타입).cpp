#include<iostream>
using namespace std;
/*
�Լ�
1. ���

*/

void Hello(int);  // �λ��ϴ� �Լ� / �Ű����� Ÿ�Ը� �����൵ ��!

int Factorial(int); // ���丮�� �Լ�, �ݺ��� �̿�

int FactorialRecursion(int); // ���丮�� �Լ�, ����Լ� �̿�


/*������ Ÿ��[���� Ÿ�� �Լ��̸�(�Ű�����); ]
* 1. ������ Ÿ�� // ���� -> ���� ������� ���� Ȯ��
* */


int main() {
	int in;
	cin >> in;

	cout << Factorial(in) << endl;
	cout << FactorialRecursion(in) << endl;
	Hello(5); // �Լ� ȣ��
	
	return 0;
}

int Factorial(int f) {
	int result = 1;

	for (int i = 1; i <= f; i++) {
		result = result * i;
	}
	return result;

}

int FactorialRecursion(int f) {
	//�� f = 4
	//�� f = 3
	//�� f = 2
	//�� f = 1
	if (f <= 1)
		//�� f=1�̹Ƿ� return 1�� ����
		return 1;
	else
		return f * FactorialRecursion(f - 1); //�� return 24
	//��       4* FactorialRecursion(3)  �� 24(4*6)  
	//��       3* FactorialRecursion(2)  �� 6(2*3)  
	//��       2* FactorialRecursion(1)  �� 2(2*1)  
	
}



void Hello(int n) {

	cout << "HI~" << n << endl;

}