#include<iostream>
using namespace std;

int main() {
	// �� �迭

	//1) �ʱ�ȭ ������ ��� ����
	//int arr[4]; // 4���� ������ ���� �� ����
	//arr[0] = -9;
	//arr[3] = 30000;

	//cout << arr[3] << endl; //30000
	//cout << arr[2] << endl; // ���̰�(�����Ⱚ) ���

	int arr[4] = { 0 };
	arr[0] = -9;
	arr[3] = 30000;

	cout << arr[3] << endl; //30000
	cout << arr[2] << endl; // ���̰�(�����Ⱚ) ���

	for (int i = 0; i < 4; i++) {
		cout << arr[i] << endl;
	}


	



	return 0;
}