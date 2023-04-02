#include<iostream>
using namespace std;

int main() {
	// ② 배열

	//1) 초기화 안했을 경우 에러
	//int arr[4]; // 4개의 공간을 담을 수 있음
	//arr[0] = -9;
	//arr[3] = 30000;

	//cout << arr[3] << endl; //30000
	//cout << arr[2] << endl; // 더미값(쓰레기값) 출력

	int arr[4] = { 0 };
	arr[0] = -9;
	arr[3] = 30000;

	cout << arr[3] << endl; //30000
	cout << arr[2] << endl; // 더미값(쓰레기값) 출력

	for (int i = 0; i < 4; i++) {
		cout << arr[i] << endl;
	}


	



	return 0;
}