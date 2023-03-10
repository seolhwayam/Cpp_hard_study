#include<iostream>
using namespace std;

int main() {
	// ★ 배열
	// int k = 5;
	//	k = 7;
	//	cout << k << endl;
	//
	////
	//	//자료형/음수표현방식(2의 보수법)/자료형size
	//	const int i = 5; //32bit
	//	cout << i << endl;
	//	unsigned short s = 65535; //16bit
	//	//signed (-2의15승 ~ +2의15승-1)
	//	//unsigned (0 ~ 2의16승-1)
	//	cout << s << endl;
	//
	//	//배열
	//	//int arr[4] = { 0 };
	//	//① 배열 0,1,2,3 0으로 초기화 | {초기화 값}
	//	//arr[0] = -9;
	//	//arr[3] = 30000;
	//
	//	int arr[4] = { -9,0,0,30000 };
	//	//② 선언시에 초기화
	//
	// ★ 포인터
	//
	//	int* parr = &arr[0];
	//	//포인터 = 담긴 주소(*)
	//	//parr=포인터 이름 | &arr[0] = 0번방의 번지수
	//	//타입* 포인터이름 = &배열이름[];
	//	//▶ 배열명은 포인터 상수다
	//
	//
	//
	//	for (int i = 0; i < 4; i++) {
	//		//cout <<*(parr+i)<<endl; ①포인터| 주소로 값 출력
	//		//cout << parr[i] <<endl; ②포인터| 포인터 > 배열처럼 활용
	//		//cout << arr[i] <<endl;  ③배열|배열 출력
	//		//cout << *(arr + i) << endl; ④배열| 배열 > 포인터처럼 활용
	//	}
	//
	//	//for (int i = 0; i < 4; i++) {
	//	//	cout << parr+i << endl;
	//	//}자리주소는 그대로지만 +i(i는 1씩증가지만 4바이트씩 증가(parr+i))
	//	// 주소 출력하기
	// 
	// ★ auto
	// 
	//	/*Auto
	//	 : 자료타입이 들어가는 위치에 Auto라는 키워드 작성시
	//	   해당 오토 키워드를 가진 변수와 뒤에서 대입이 되는 초기화되는 값들에 의해서
	//	   추론을 해서 타입 지정 => auto 변수이름
	//
	//	   최상위 배열 형식에는 auto형식이 표시될 수 없다.(auto 배열이름 xxx)
	//
	//	   ex)자바스크립트 vr,랩 키워드 */
	//
	//	return 0;
	//
	//}
	/*Auto
	 : 자료타입이 들어가는 위치에 Auto라는 키워드 작성시
	   해당 오토 키워드를 가진 변수와 뒤에서 대입이 되는 초기화되는 값들에 의해서
	   추론을 해서 타입 지정(주어지는 값에 의해 타입 결정)

       ① auto 변수이름

	   ② 최상위 배열 형식에는 auto형식이 표시될 수 없다.(auto 배열이름 xxx)

	   ③ const auto 키워드 동시사용 가능

	   ex)자바스크립트 vr,랩 키워드 */


	//auto f = 3.24f;//f표시시 float 처리| 없을시 double 처리됨
	//auto s = "test";

	//cout << f << endl;
	//cout << s << endl;
	//cout << sizeof(f) << "\t" << typeid(f).name() << endl;
	//cout << sizeof(s) << "\t" << typeid(s).name() << endl;

	//int* parr = &arr[0];
	//	//포인터 = 담긴 주소(*)
	//	//parr=포인터 이름 | &arr[0] = 0번방의 번지수
	//	//타입* 포인터이름 = &배열이름[];
	//	//▶ 배열명은 포인터 상수다

	// ★ void 

	//short a = 2;
	//int* ps;
	//void* pv; //void포인터
	//ps = &a;  >> ps = a의 주소
	//pv = &a;
	//cout << *(short*)pv << endl;
	// void로 포인터 설정시 어떤 타입으로든 받을 수 있음
	// 출력 시점:  *(타입*)포인터이름
	// 출력 시점에는 타입이름을 캐스팅하여 지정해줘야 출력가능

	//cout << ps << endl; //ps = a 값의 주소 >> cout ps = a의 값의 주소
	//cout << *ps << endl;//*ps = a값

	char n[] = "hello"; // "" 사용시 자동으로 마지막에 0(null) 생성
	char s[] = { 'h','e','l','l',0 };//마지막에 0(null)안넣을 씨 깨져서 출력됨 주의!
	void* ps;
	//ps = &s[0];
	ps = s;
	cout << *(char*)ps << endl;



	return 0;
}

	

