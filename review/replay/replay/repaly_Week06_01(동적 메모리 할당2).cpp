//#include<iostream>
//using namespace std;
//
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
//   2) 포인터 NULL값 변경
//   포인터변수이름 = NULL(Nullptr)
//
//   ※ 해제 여러번 할 경우 메모리 문제 생김
//
//*/
//
//char* RecerseString(const char* src, int len) {
//	char* rev = new char[len + 1];
//	for (auto i = 0; i < len; ++i)
//		rev[i] = src[len - i - 1];
//	rev[len] = NULL;
//	return rev;
//}
//
//int main() {
//	char orig[] = "Inha";
//	char* copy = RecerseString(orig, 4);
//
//	cout << orig << "\n";
//	cout << copy << "\n";
//
//
//
//	delete[] copy; // 할당된 동적 메모리 삭제
//	copy = NULL; // 가르키고 있는 포인터(손짓)을 null로 변경(원래는 동적메모리 할당을 했던 주소값을 가지고 있음)
//
//	return 0;
//}