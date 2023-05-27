#include<iostream>
using namespace std;
/*
메모리 할당 : 컴퓨터로부터 메모리를 얻어옴
동적 메모리 할당 <-> static(정적)
1. 메모리를 동적으로 할당
   : 컴파일시점에 결정 되지않고,프로그램이 돌아가는 와중에도 동적으로 메모리를 할당하는 것을 말한다.

2. 동적 메모리 할당
   타입* 포인터 변수 이름 = new 타입; //new 타입[] : 배열

3. 동적 메모리 해제
   *delete 포인터 변수이름

   *delete[] 포인터 변수이름 //배열일 경우
   
   ※ 해제 여러번 할 경우 메모리 문제 생김




*/
int main() {

	short* p = new short[100];

	cout << p << endl;

	delete[] p;
	cout << p << endl;

	delete[] p;
	
	//int* p = new int; // 할당
	//*p = 486;

	//cout << *p << endl;
	//delete p; // 해제



	//int* p;
	//int length, total = 0;
	//double average;

	//cin >> length;
	//p = new int[length]; // 동적 메모리 할당

	//for (auto i = 0; i < length; ++i) {
	//	cin >> *(p + i);
	//}

	//for (auto i = 0; i < length; ++i) {
	//	total = total + p[i];
	//}

	//average = total / (double)length;

	//cout << total << endl;
	//cout << average << endl;


	//delete[] p; // 동적 메모리 해제(사용한 메모리 해제)

	return 0;
}