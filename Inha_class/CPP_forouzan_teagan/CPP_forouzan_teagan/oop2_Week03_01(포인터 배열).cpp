#include<iostream>
using namespace std;

int main() {
	//�� ������ ���� ����, ����

	int arr[5];
	int* parr = &arr[2];

	cout << parr << endl;
	//000000847138FAD0
	cout << parr + 1 << endl;
	//000000847138FAD4
	cout << parr + 2 << endl;
	//000000847138FAD8

	short arr_1[5];
	short* parr_1 = &arr_1[2];

	cout << parr_1 << endl;
	//0000001CEDCFF65C
	cout << parr_1 + 1 << endl;
	//0000001CEDCFF65E
	cout << parr_1 - 2 << endl;
	//0000001CEDCFF658

	short arr_2[5];
	short* p1 = &arr_2[1];
	short* p2 = &arr_2[4];

	cout << p1 << endl;
	cout << p2 << endl;
	cout << p2 - p1 << endl;
	// ������ �� 5���� �������� p2�� p1�� ���̴� 3
	// ������ �� ���̸�ŭ �ݿ�

	// �� �迭 ������
	long arry[10]; // long Ÿ���� arry �迭 ����. �迭�� 10��
	long(*p)[10] = &arry; // �迭 ������ ����. ���� ���� arry �迭 �ּ� ����
	// Ÿ�� (*p)[����ų ����� ������] = &����ų �迭

	(*p)[5] = 100; // �迭 �����ͷ� arry �迭[5] �ε����� 100 ����

	cout << arry[5] << endl;
	//100
	cout << arry[4] << endl;
	// �ʱ�ȭ ���߱� ������ ���̰� �� ����
	cout << (*p)[5] << endl;
	// �迭������ 100

	//�� ������ �迭
	short a, b, c=5, d=2;  //������ �迭
	short* arr_3[4];
	arr_3[0] = &a;
	arr_3[1] = &b;
	arr_3[2] = &c;
	arr_3[3] = &d;

	// �ּ� ���[������ �迭�� a�� �ּ�,b�� �ּ� : ���ӵ� ���� �ƴ�]
	cout << arr_3[1] << endl;
	cout << arr_3[2] << endl;
	cout << arr_3[3] << endl;


	// �ּ� ��� [&������ �迭 >> ���� �ּ� : ���ӵ� ������ ����ִ� ������ �迭] 
	cout << &arr_3[1] << endl;
	cout << &arr_3[2] << endl;
	cout << &arr_3[3] << endl;

	// �� ��� [*������ �迭 >> �� ] 
	cout << *arr_3[1] << endl;
	cout << *arr_3[2] << endl;
	cout << *arr_3[3] << endl;






	return 0;
}