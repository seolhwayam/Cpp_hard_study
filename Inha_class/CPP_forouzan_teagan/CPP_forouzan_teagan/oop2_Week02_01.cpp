#include<iostream>
using namespace std;

int main() {
	int k = 5;
	k = 7;
	cout << k << endl;


	//자료형/음수표현방식(2의 보수법)/자료형size
	const int i = 5; //32bit
	cout << i << endl;
	unsigned short s = 65535; //16bit
	//signed (-2의15승 ~ +2의15승-1)
	//unsigned (0 ~ 2의16승-1)
	cout << s << endl;

	//배열
	int arr[4];
	arr[0] = -9;
	arr[3] = 30000;

	cout << arr[3] << endl;

	return 0;

}