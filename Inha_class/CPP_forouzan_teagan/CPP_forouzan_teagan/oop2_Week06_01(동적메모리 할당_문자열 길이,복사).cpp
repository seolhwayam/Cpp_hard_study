//#include<iostream>
//#pragma warning(disable:4996) // ★ strcopy 에러 해결
//#include<cstring> //strlen 함수 사용(옛날 버전시에는 필수 입력)
//using namespace std;
//
//int main() {
//
//	// ① 문자열 길이
//	char src1[] = "Inha";
//	int len1 = strlen(src1);
//	// strlen : 문자열 길이 재는 함수
//
//	cout << len1 << endl; //4
//
//	char src2[] = "Inha Univ";
//	int len2 = strlen(src2);
//
//	cout << len2 << endl; //9(스페이스바도 1로 인식)
//
//	// ② 문자열 복사
//	char* dest = new char[len1 + 1]; 
//	// 동적 메모리 할당
//	// 문자열 복사본 받을 포인터 배열
//
//	strcpy(dest, src1);
//	// strcpy : 문자열 복사
//	// 첫번째 인자 : 복사를 할 곳 | 두 번째 인자 : 원본
//
//	cout << src1 << endl;
//	cout << dest << endl;
//
//	//★ 중요 같이 사용!
//	delete[] dest; // 동적 메모리 할당 해제
//	dest = NULL; // 포인터 삭제
//
//
//	return 0;
//}