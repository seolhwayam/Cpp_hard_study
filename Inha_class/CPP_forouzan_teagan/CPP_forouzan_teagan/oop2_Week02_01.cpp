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
	//int arr[4] = { 0 };
	//① 배열 0,1,2,3 0으로 초기화 | {초기화 값}
	//arr[0] = -9;
	//arr[3] = 30000;

	int arr[4] = { -9,0,0,30000 };
	//② 선언시에 초기화


	int* parr = &arr[0];
	//포인터 = 담긴 주소(*)
	//parr=포인터 이름 | &arr[0] = 0번방의 번지수
	//타입* 포인터이름 = &배열이름[];
	//▶ 배열명은 포인터 상수다



	for (int i = 0; i < 4; i++) {
		//cout <<*(parr+i)<<endl; ①포인터| 주소로 값 출력
		//cout << parr[i] <<endl; ②포인터| 포인터 배열처럼 활용
		//cout << arr[i] <<endl;  ③배열|배열 출력
		cout << *(arr + i) << endl;
	}

	//for (int i = 0; i < 4; i++) {
	//	cout << parr+i << endl;
	//}//자리주소는 그대로지만 4바이트씩 증가(parr+i)
	   //주소 출력하기



	cout << arr[2] << endl;

	return 0;

}