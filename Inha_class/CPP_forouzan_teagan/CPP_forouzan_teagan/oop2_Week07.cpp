/**************************************************************
 * strcpy와 strncpy 함수를 사용해서                           *
 * 문자열 전체 또는 문자열 일부를                             *
 * 다른 문자열로 복사하는 프로그램                            *
 **************************************************************/

#include <cstring> //c언어에서 사용하는 함수는 c가 붙는다.
#include<string> // c++스타일
#include <iostream>
using namespace std;

int myLen(const char* a) {
	int count = 0;
	for (int i = 0; a[i] != NULL; i++) {
		count++;
	}
	return count;


};

int main()
{
	//// str2 전체를 str1으로 복사 후에 str1의 내용이 제거
	//char str1[] = "This is the first string.";
	//char str2[] = "This is the second string.";

	//// 배열 공간 주의!!!! 다른곳 할당 안되게끔!

	//strcpy(str1, str2);
	//cout << "str1: " << str1 << endl;
	//// str4의 일부를 str3로 복사 후에 str3의 내용 일부 제거
	//char str3[] = "abcdefghijk.";
	//const char* str4 = "ABCDEFGHIJK";
	//strncpy(str3, str4, 4); // 4개만 복사 str3에 str4를 복붙
	//cout << "str3: " << str3 << endl;


	//string a = "ABC"; //내부적으로 동적할당
	//string b = "DEF";
	//a = b;
	//cout << a << endl;

	char a[] = "inha";

	cout << myLen(a);

	return 0;
}