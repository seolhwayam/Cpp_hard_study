#include<iostream>
using namespace std;
extern int ga;

/*
extern 키워드
: 다른소스파일에 정의된 전역변수 사용

* 변수이름이 동일한 경우에는 가까운 위치의 변수가 실행된다.

*/
int g = 5; //전역변수
int a = 8;

void static_test() {
	static int n = 0;
	cout << n++ << endl;
}

void test() {
	int l = 7; //지역 변수
}
int main() {
	int l = 5;
	cout << a << endl; //8
	int a = 9;
	cout << a << endl; //9
	{
		cout << a << endl; //9
		int a = 10;
		cout << a << endl; // 10
	}
	cout << a << endl; //9

	static_test();
	static_test();
	static_test();


	return 0;
}