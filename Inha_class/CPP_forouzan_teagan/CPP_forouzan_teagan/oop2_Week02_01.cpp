#include<iostream>
using namespace std;

int main() {
	int k = 5;
	k = 7;
	cout << k << endl;


	//�ڷ���/����ǥ�����(2�� ������)/�ڷ���size
	const int i = 5; //32bit
	cout << i << endl;
	unsigned short s = 65535; //16bit
	//signed (-2��15�� ~ +2��15��-1)
	//unsigned (0 ~ 2��16��-1)
	cout << s << endl;

	//�迭
	int arr[4];
	arr[0] = -9;
	arr[3] = 30000;

	cout << arr[3] << endl;

	return 0;

}