#include<iostream>
using namespace std;
int main() {

	long arry[10];
	long(*p)[10] = &arry;

	(*p)[5] = 100;

	cout << arry[5] << endl; // �Ϲ� �迭�� ����ϱ�
	cout << (*p)[5] << endl; // ������ ����ؼ� ����ϱ�
	/*

	* �迭 ������ �����
	Ÿ��(*�迭 ������ �����̸�)[����ų ����� �迭 ������] = &����ų �迭

	 * ������ �����
	 Ÿ��* ������ �����̸� = &���� �� ;
	 ex)int* parr = &arr[0];


	*/


	return 0;
}
