//#include<iostream>
//using namespace std;
//
//int main() {
//
//	/*[포인터 배열]
//	* 
//	* 
//	*/
//	short a, b, c=5, d=2; // 비연속된 공간
//	short* arr[4]; // 연속된 공간 / 들어가는 원소들은 a주소, b주소, c주소, d주소를 가짐
//	arr[0] = &a; //a의 주소를 포인터 배열에 초기화
//	arr[1] = &b; //b의 주소를 포인터 배열에 초기화
//	arr[2] = &c; //c의 주소를 포인터 배열에 초기화
//	arr[3] = &d; //d의 주소를 포인터 배열에 초기화
//
//	cout << arr[0] << endl; //0000001A1C6FFAB4   a주소
//	cout << arr[1] << endl; //0000001A1C6FFAD4   b주소
//	cout << arr[2] << endl; //0000001A1C6FFAF4   c주소
//	cout << arr[3] << endl; //0000001A1C6FFAF4   d주소
//	// 주소 찍기 => 포인터 배열이름[인덱스값]
//
//	cout << *arr[0] << endl; //- 13108  a값
//	cout << *arr[1] << endl; //- 13108  b값
//	cout << *arr[2] << endl; //5        c값    
//	cout << *arr[3] << endl; //2        d값
//	// 값 찍기 => *포인터 배열이름[인덱스값]
//
//	cout << &arr[0] << endl; //0000007A10CFF7A8  arr[0] 주소
//	cout << &arr[1] << endl; //0000007A10CFF7B0  arr[1] 주소
//	cout << &arr[2] << endl; //0000007A10CFF7B8  arr[2] 주소
//	cout << &arr[3] << endl; //0000007A10CFF7C0  arr[3] 주소
//
//	/*a,b,c,d 비연속된 공간, arr 연속된 공간*/
//	
//
//
//
//	return 0;
//}