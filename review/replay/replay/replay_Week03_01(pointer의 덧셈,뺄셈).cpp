//#include<iostream>
//using namespace std;
//
//int main() {
//	/*
//	@ 포인터 : 다음 원소의 위치로 이동하게 해준다.
//
//	int arr[5];
//
//	//int* parr = arr;  @가능 
//	int* parr = &arr[2];
//
//	>>int 4바이트씩 증가
//	cout << parr << endl;   //000000232D79FAC0
//	cout << parr+1 << endl; //000000232D79FAC4
//	cout << parr+2 << endl; //000000232D79FAC8
//
//	
//	short arr[5];'
//	short* parr = &arr[2];
//
//	>>short 2바이트씩 증가
//	cout << parr << endl;   
//	cout << parr + 1 << endl; 
//	cout << parr + 2 << endl; 
//
//	@void타입은 모든 타입 다 받을 수 있었지만, 출력시점에 타입 지정해야한다. -> 프로그래머가 주의를 기울인다.
//	@int 4바이트 / short 2바이트
//	*/
//
//	short arr[5];
//	short* p1 = &arr[1];
//	short* p2 = &arr[4];
//	
//	cout << p1 << endl; //0000009EA54FF95A
//	cout << p2 << endl; //0000009EA54FF960
//	cout << p2 - p1 << endl; //3 (원소의 차)
//
//	
//		
//	
//
//	
//	return 0;
//}
