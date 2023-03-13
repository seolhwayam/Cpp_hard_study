//#include<iostream>
//using namespace std;
//
//int main() {
// ★ 배열
// int k = 5;
//	k = 7;
//	cout << k << endl;
//
//
//  //자료형/음수표현방식(2의 보수법)/자료형size
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
//포인터 = 담긴 주소(*)
//parr=포인터 이름 | &arr[0] = 0번방의 번지수
//타입* 포인터이름 = &배열이름[];
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
//     ① auto 변수이름
//	   ② 최상위 배열 형식에는 auto형식이 표시될 수 없다.(auto 배열이름 xxx)
//	   ③ const auto 키워드 동시사용 가능
//	   ex)자바스크립트 vr,랩 키워드 */
//
//auto f = 3.24f;//f표시시 float 처리| 없을시 double 처리됨
//auto s = "test";
//cout << f << endl;
//cout << s << endl;
//cout << sizeof(f) << "\t" << typeid(f).name() << endl;
//cout << sizeof(s) << "\t" << typeid(s).name() << endl;
// 
//int* parr = &arr[0];
//포인터 = 담긴 주소(*)
//parr=포인터 이름 | &arr[0] = 0번방의 번지수
//타입* 포인터이름 = &배열이름[];
//▶ 배열명은 포인터 상수다

// ★ void 
//
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

//	char n[] = "hello"; // "" 사용시 자동으로 마지막에 0(null) 생성
//	char s[] = { 'h','e','l','l',0 };//마지막에 0(null)안넣을 씨 깨져서 출력됨 주의!
//	void* ps;
//	//ps = &s[0];
//	ps = s;
//	cout << *(char*)ps << endl;
//	for (int i = 0; i < sizeof(s); i++) {
//		cout << *((char*)ps+i);
//		// 포인터로 배열 값 순서대로 출력하기
//
//		//cout << *(char*)ps+i;
//		//ps+i 부분에서 계속 캐스팅 일어남 > 원하는 값x
//		
//		//cout << *((char*)ps+i);
//		//① (chat*)ps 라는 주소에 ② +i 
//   	}
//
//	// 구조체 (Struct)
//struct StudentInfo {   // 구조체 디자인 
//	int id;
//	float grade;
//	char bloodType;
//} s3 = { 12223433, 4.0f, 'B' }, s4;

// 구조체 변수 선언과 동시에 초기화까지 완료, 변수 선언만도 가능

//int main() {
//
//
// 구조체 변수 하나 만들기
//StudentInfo s1 = { 12223415, 4.1f, 'A' };
//StudentInfo s2 = { 12223485, 3.9f, 'B' };

//
	//cout << s2.grade << endl;
	//cout << s1.id << endl;
	//cout << s3.bloodType << endl;
//
//*s4.bloodType = 'AB';
//s4.id = 12223414;
//s4.grade = 3.9f;*/
//
//s4 = s2;   // 구조체간 복사 // 서로 다른 메모리값 복제 // 복제가 됨

//cout << s4.bloodType << endl;

//s4.bloodType = 'O';
//cout << s4.bloodType << endl;
//cout << s2.bloodType << endl;   // s4 의 혈액형이 바뀌었지만 s2 의 혈액형은 바뀌지 않는다.
//s4.bloodType = 'O';
//s4.id = 12221317;
//s4.grade = 2.9f;

// Modern school code
//char letters[] = "Hello";
//void* ps;
//ps = letters;
//
// Ranged based for loop    범위 기반 for 문 
//for (auto letter : letters) {   // auto i : 배열
//   cout << letter;
//}
//
//* ↓ 파이썬 코드와 동일 (Modern)↓
//for i in range(0, 3, 1):
//   print(subjects[i])
//*/

//
// Old school code
//char s[] = { 'H', 'e','l','l','o', 0 };
//void* ps;
//ps = &s[0];

//for (int i = 0; i < sizeof(s); i++) {
//   cout << *((char*)ps + i);
//
//}
//
//* ↓ 파이썬 코드와 동일 (Old)↓
//for i in range(0, 3, 1):
//    print(subjects[i])
//*/

//for (int i : {1, 3, 5, 7, -9})
//   cout << i << " ";

//int a = 10;      // 10진수
//int b = 0xA;   // 16진수
//int c = 012;   // 8진순
//int d = 0b1010;   // 이전에는 2진수 출력 X   // c++ 14, binary literals

//cout << a << endl;
//cout << b << endl;
//cout << c << endl;
//cout << d << endl;
//
//
//
//
//		//return 0;
//	}