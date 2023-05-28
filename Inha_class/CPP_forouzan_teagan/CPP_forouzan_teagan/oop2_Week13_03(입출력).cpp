#include<iostream> //cout출력 cin입력
using namespace std;

/*
extern ostream cout; //출력
extern istream cin;  //입력
↑템플릿 클래스를 재정의 한 것

typedef basic_ostream<char> ostream;
typedef basic_ostream<char> 원본
ostream 별명

typedef basic_istream<char> istream;
typedef basic_istream<char> 원본
istream 별명

stream(흐름) : 흘러가는 데이터


ios_base  : 부모클래스

basic_ios : 부모클래스

 basic_istream : cout 객체의 타입(자식 클래스)
 basic_istream : cin  객체의 타입(자식 클래스)


 fmtflags : setf의 리턴타입, int
*/

int main() {
	//float f = 0.01234f;
	//ios_base::fmtflags old; 
	///*	ios_base : 입출력 포멧과 관련된 기능을 제공하는 클래스*/

	//cout << f << endl;

	//old = cout.setf(ios_base::scientific, ios_base::floatfield); //지수형 [ 백업하기 ]
	///*
	//-setf :  입출력 형식을 지정하는 가장 기본적인 함수

	//floatfield : 실수를 다룰 때 사용
	//basefield : 진법 다룰 때 사용(ex, hex(16진수))

	//ios_base::fixed -> 고정 소수점 형태
	//ios_base::scientific - > 지수 형태
	//
	//
	//*/

	//cout << f << endl;
	//

	//cout.setf(old, ios_base::floatfield); [예전 형태로 돌아가기]
	//cout << f << endl;

	//------------------------------------------------------

	int a = 10;
	cout << hex; //① 16진수 형태 출력 

	cout.setf(ios_base::hex, ios_base::basefield); //② setf
	cout << a << endl;

	//-------------------------------------------------------

	bool test = true;
	cout << test << endl; // 1(true :1 / false : 0)

	cout << boolalpha; // 문자로 보기 (true / false) ♥
	cout << test << endl;
	cout.setf(ios_base::boolalpha); //♥와 동일한 결과
	cout << test << endl;
	cout.unsetf(ios_base::boolalpha); //원 위치 셋팅값으로 돌아가기(셋팅값 1개인 경우)
	cout << test << endl;

	/* 출력형식 지정함수
	width() : 넓이 지정
	precision() : 소수점 자리수 지정*/

	int b = 11;
	cout.width(5);
	cout << b << endl;

	float f = 0.01234f;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(3);
	cout << f << endl;

}