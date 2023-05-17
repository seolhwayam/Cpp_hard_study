//#include <iostream>
//using namespace std;
//
//int main() {
//
//	/*
//	short a = 2;
//	short* ps;
//	ps = &a;
//
//	@포인터의 타입과 받으려는 대상의 타입이 같아야 한다
//
//	int a = 2;
//	short* ps;
//	ps = &a;  [▶ 에러 ]
//
//	@ 타입이 같지 않으므로 에러가 난다.
//	*/
//
//	short a = 2;
//	short* ps1;
//	//int* ps;
//	//ps = &a; [▶ 에러]
//	ps1 = &a;
//	cout << *ps1 << endl; // a의 주소를 받아서(&a) 값 출력(*ps)
//
//	void* pv1;
//	pv1 = &a; // [▶ 에러 X]
//	/*@들어온 것에 대해서는 다 받을 수 있음.다만 출력할 때 어떤 것인지 알려줘야 한다.
//	   받은 것은 메모리의 주소만 받는다. 타입, 바이트 등은 알 수 없다.
//	   void pointer 주의점 : 프로그래머가 어떤 타입을 사용했는지 알고 있어야 한다.*/
//
//	cout << *(short*)pv1 << endl;
//	// 캐스팅 해줘야 함  
//	// 출력할 때 : *(타입 *)void pointer 변수 명
//	//            → ⓐ타입포인터를 나타내는 거라고 등록(캐스팅)
//
//
//	char s1[] = "Hello"; // 자동으로 마지막에 null문자 삽입
//	char s2[] = { 'H','e','l','l','o','\n'}; // 수기로 null(\n, 0도가능) 넣어 줘야됨. 출력 시점에 null을 감지하지 못해 에러남
//	void* ps2;
//
//	//ps2 = &s2[0];
//	//ps2 = &s2;
//	/*배열[0] 과 배열은 포인터 변수에 담길 떄 똑같은 의미를 갖는다.*/
//		
//    ps2 = &s1;
//
//	cout << *(char*)ps2 << endl; // char 타입포인터를 나타내는 거라고 등록(캐스팅) [ 한 글자만 출력 ]
//	
//	//①
//	cout << (char*)ps2 << endl;
//	//②
//	cout << s1 << endl;
//
//	// ①과 ②은 동일한 결과 값이다[Hello]
//
//	for (int i = 0; i < sizeof(s1); i++) {
//		//cout << *(char*)ps2 + i; // i = int타입/ ps2 = char타입(캐스팅 했음) => int와char간의 다시 캐스팅이 일어나 원하는 값 x
//		cout << *((char*)ps2 + i);
//	}
//
//	for (auto i = 0; i < sizeof(s1); i++) {
//		cout << *((char*)ps2 + i);
//	}
//
//
//
//	return 0;
//}

