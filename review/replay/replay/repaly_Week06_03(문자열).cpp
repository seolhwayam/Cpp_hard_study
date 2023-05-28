#include<iostream>
#include<cstring>
#pragma warning(disable:4996)
using namespace std;

int main() {
	//// C Style -> cppStyle 변경
	//char cstyle[] = "Hi~";
	//string cppstyle;
	//
	//cppstyle = cstyle; //묵시적 캐스팅(메모리상 복사가 일어난 것 => 별도의 메모리 공간)
	//cppstyle[0] = 'A';

	//cout << cstyle << endl;
	//cout << cppstyle << endl;


	// cppStyle ->  C Style 변경
	//string cppstyle = "Hello!";
	//const char* cstyle = NULL;

	//cstyle = cppstyle.c_str(); 
	////c_str : cppstyle을 읽기전용으로만 사용(읽기전용) 
	////묵시적 캐스팅(메모리상 복사가 일어난 것 => 별도의 메모리 공간)

	//cout << cstyle << endl;
	//cout << cppstyle << endl;

	//복사본 만들기
	string cppstyle = "Hello!";
	char* cstyle = new char[cppstyle.size() + 1];

	strcpy(cstyle, cppstyle.c_str());

	cstyle[0] = 'Y';

	cout << cstyle << endl;
	cout << cppstyle << endl;




	return 0;
}