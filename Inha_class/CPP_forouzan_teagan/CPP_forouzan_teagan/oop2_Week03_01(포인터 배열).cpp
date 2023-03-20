#include<iostream>
using namespace std;

int main() {
	//★ 포인터 간의 덧셈, 뺄셈

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
	// 원소의 차 5개의 공간에서 p2와 p1의 차이는 3
	// 원소의 갭 차이만큼 반영

	// ★ 배열 포인터
	long arry[10]; // long 타입의 arry 배열 만듬. 배열은 10개
	long(*p)[10] = &arry; // 배열 포인터 설정. 위에 만든 arry 배열 주소 넣음
	// 타입 (*p)[가르킬 대상의 사이즈] = &가르킬 배열

	(*p)[5] = 100; // 배열 포인터로 arry 배열[5] 인덱스에 100 넣음

	cout << arry[5] << endl;
	//100
	cout << arry[4] << endl;
	// 초기화 안했기 때문에 더미값 들어가 있음
	cout << (*p)[5] << endl;
	// 배열포인터 100

	//★ 포인터 배열
	short a, b, c=5, d=2;  //참조용 배열
	short* arr_3[4];
	arr_3[0] = &a;
	arr_3[1] = &b;
	arr_3[2] = &c;
	arr_3[3] = &d;

	// 주소 출력[참조용 배열의 a의 주소,b의 주소 : 연속된 값이 아님]
	cout << arr_3[1] << endl;
	cout << arr_3[2] << endl;
	cout << arr_3[3] << endl;


	// 주소 출력 [&포인터 배열 >> 값의 주소 : 연속된 공간에 들어있는 포인터 배열] 
	cout << &arr_3[1] << endl;
	cout << &arr_3[2] << endl;
	cout << &arr_3[3] << endl;

	// 값 출력 [*포인터 배열 >> 값 ] 
	cout << *arr_3[1] << endl;
	cout << *arr_3[2] << endl;
	cout << *arr_3[3] << endl;






	return 0;
}