//#include<iostream>
//#include<cstring>
//#pragma warning(disable:4996)
//using namespace std;
///*
//메모리 할당 : 컴퓨터로부터 메모리를 얻어옴
//동적 메모리 할당 <-> static(정적)
//1. 메모리를 동적으로 할당
//   : 컴파일시점에 결정 되지않고,프로그램이 돌아가는 와중에도 동적으로 메모리를 할당하는 것을 말한다.
//
//2. 동적 메모리 할당
//   타입* 포인터 변수 이름 = new 타입; //new 타입[] : 배열
//
//3. 동적 메모리 해제
//   1) 동적 메모리 해제
//   *delete 포인터 변수이름
//   *delete[] 포인터 변수이름 //배열일 경우
//
//   2) 포인터 null값 변경
//   포인터변수이름 = null(nullptr)
//
//   ※ 해제 여러번 할 경우 메모리 문제 생김
//
//
//
// C언어 문자열
// 1. Char
// 2. strlen(문자 타입 변수) : 문자열 길이 구하는 함수
// 3. strcpy(복사할 곳 변수, 복사할 원본 변수) : 문자열 복사하는 함수
//
//*/
//
//int main() {
//	char src[] = "inha univ";
//	int len = strlen(src); //strlen : 문자열의 길이 구하는 함수
//
//	cout << len << endl;
//
//	char* dest = new char[len + 1];
//	strcpy(dest, src);
//	//strcpy(복사할 곳, 복사할 원본)
//
//	cout << src << endl;
//	cout << dest << endl;
//
//	delete[]dest;
//	dest = NULL;
//
//
//	return 0;
//}