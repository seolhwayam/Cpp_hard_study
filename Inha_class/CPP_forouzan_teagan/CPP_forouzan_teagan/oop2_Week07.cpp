/**************************************************************
 * strcpy와 strncpy 함수를 사용해서                           *
 * 문자열 전체 또는 문자열 일부를                             *
 * 다른 문자열로 복사하는 프로그램                            *
 **************************************************************/
#pragma warning(disable:4996);
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

char* mystrcat(char s1[],const char* s2) {
	int startlen = strlen(s1);
	int k = 0;
	int i = startlen;
	for (; s2[k] != NULL; i++) {
		s1[i] = s2[k];
		k++;
	}
	s1[i] = NULL; // c언언에서는 null c++에서는 0



	return s1;
}



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

	char a[20] = "inha";
	char b[] = "world";


	cout << myLen(a) << endl;
	cout << mystrcat(a, b);
}



	/*
	#include <iostream>
using namespace std;

int main(){
    char str1[6] = {'H', 'e', 'l', 'l', 'o', 0};
    cout << str1 << endl;
    //cin >> str1;  // enter , tap , space bar 입력이 끝난것으로 간주
    cin.getline(str1,6); 
	cout << str1 << endl;


	char* cPtr = strchr(str1, 'l');
    cout << cPtr - &str1[0] << endl; /// 위치 파악 가능

	시험 : strchr 함수 주고 인덱스 번호 찾는 코드 넣어라
	cPtr - &str1[0] 작성

	char
	10-8번 스킵

	strstr -> 문자열 2개가 같으면 0/ 아니면 1
	같으면 0/ 틀리면 1 (앞에것이 크면 1 , 뒤에것이 크면 -1) -> 함수 만들어 보기

	stringcat -> 함수 만들어 보기

	
    
    return 0;

	람다 + 영상 + c++string class -> 541p
}
	*/

	//만들어 보기



