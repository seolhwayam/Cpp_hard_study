//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
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
// c언어 문자열
// 1. char
// 2. strlen(문자 타입 변수) : 문자열 길이 구하는 함수
// 3. strcpy(복사할 곳 변수, 복사할 원본 변수) : 문자열 복사하는 함수
// 4. strcat(문자열 변수1, 문자열 변수2) : 문자열 합치는 함수[ 문자열 변수1 => 문자열변수1+ 문자열변수2]
// 5. strcmp(문자열 변수1, 문자열 변수2) : 문자열 비교하는 함수
//    1) == 동일 : return 0
//	  2) != 동일x : return 1 or -1
//                  => 아스키 코드 값 비교
//                  문자열 변수1 < 문자열 변수2 : return -1
//                  문자열 변수1 > 문자열 변수2 : return 1
//*/
//
//int main() {
//
//	char str1[10] = "I";
//	char str2[] = "H";
//
//	if (strcmp(str1, str2) == 0)
//		cout << "같다" << endl;
//	else {
//		cout << "다르다 " << endl;
//		cout << strcmp(str1, str2);
//	};
//		
//
//	//strcat(str1, str2);
//	//cout << str1 << endl;
//	//cout << str2 << endl;
//
//
//	return 0;
//}