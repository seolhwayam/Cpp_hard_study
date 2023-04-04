//#include<iostream>
//using namespace std;
//
//char* ReverseString(const char* src, int len) {
//	/*  ① const + char*(포인터) : 원본의 값을 바꾸지 못함(읽기 전용)
//	*   ② char* + src : 메모리 번지 받음. 주소(orig -> Inha)
//	*   ③ int + len : 문자열의 갯수
//	*   src -> orig -> []Inha
//	*   len -> 4
//   */
//	char* rev = new char[len + 1]; 
//	//동적메모리 할당 5바이트
//	// cout  출력시 null전까지만 출력, cout에게 알려주기 위해서 null값 넣음 -> null값 처리 위해 5바이트
//
//
//	for (auto i = 0; i < len; ++i) {
//		rev[i] = src[len - i - 1];
//		// src포인터 -> orig[] 배열 주소 -> rev포인터 배열
//	}
//	rev[len] = NULL;
//	// cout  출력시 null전까지만 출력, cout에게 알려주기 위해서 null값 넣음
//	// 관련해서 char* rev = new char[len + 1] -> null값 처리위해 5바이트
//
//	return rev;
//	}
//
//int main() {
//	char orig[] = "Inha";
//	// 문자열 배열 Inha +null 들어가 있음
//	// orig[] = [ I , n , h , a , null(0) ]
//
//	char* copy = ReverseString(orig, 4); // 함수 호출(문자열 배열, 문자열 길이)
//	cout << orig << "\n";
//	cout << copy << "\n";
//
//
//	//★ 중요 같이 사용!
//	delete[] copy;
//	// [] = [ a,  h  , n , I ,  null] 삭제
//
//	copy = NULL;
//	//포인팅X 하도록 설정
//
//
//
//	return 0;
//}