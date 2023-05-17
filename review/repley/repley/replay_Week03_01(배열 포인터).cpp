#include<iostream>
using namespace std;
int main() {

	long arry[10];
	long(*p)[10] = &arry;

	(*p)[5] = 100;
	
	cout << arry[5] << endl;
	/*
	
	* 배열 포인터 만들기
	타입(*배열 포인터 변수이름)[가르킬 대상의 배열 사이즈] = &가르킬 배열
	
	 * 포인터 만들기
	 타입* 포인터 변수이름 = &담을 것 ;
	 ex)int* parr = &arr[0];

	  
	*/


	return 0;
}