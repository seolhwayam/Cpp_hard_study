#include<iostream>
using namespace std;

int main() {
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

	return 0;
}