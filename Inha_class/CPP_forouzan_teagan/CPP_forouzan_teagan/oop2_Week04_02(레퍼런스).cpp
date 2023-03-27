//#include<iostream>
//using namespace std;
//
//int main() {
//	/* 
//	레퍼런스 : 변수의 별명
//			   변수의 별명을 정의해서 변수이름을 하나 더 가지는 것
//
//			   포인터와 내부적으로 유사하게 동작, 사용하는 방식도 유사
//			   ※ 레퍼런스 : 대상이 되는 변수의 메모리 번지 수 사용(같은 번지 사용 | s==rs 같음)
//			      포인터 : 별도의 메모리 공간
//	
//	
//	레퍼런스 문법
//	① 자료타입 &변수이름 = 대상변수  ※변수이름(o)   값자체(x)
//	② 선언하는 시점에 반드시 초기화
//	③ 레퍼런스 변수를 처음 정의할 때 외에는 다른 변수를 참조하게 만들 수 없음
//	
//	※ 레퍼런스 변수+const : 1) 해당속성을 갖는 레퍼런스 변수는 자신의 값을 바꿀 수 없음
//	                         2) 하지만! 대상변수를 통한 값 변경은 가능
//							 
//							 3) 상수의 대한 별명으로 쓸 수 있음
// 
//    const + 포인터랑 같은 것 처럼 동작
//    처음 중간 끝    
// */
//
//				  
//	
//
//	    
//	short s = 5;    // 일반 변수 초기화  
//
//	short& rs = s;  // 래퍼런스 변수
//	short* ps = &s; // 포인터 
//
//	cout << s << " "  << &s << endl;  //일반 출력 
//	cout << rs << " " << &rs << endl; // 래퍼런스 변수 출력
//	cout << *ps << " "<< &ps << endl;// 포인터 출력
//
//
//
//
//	int a = 1;
//	int b = 2;
//
//	int& c = a; //변수a의 별명 c | ② 선언하는 시점에 반드시 초기화
//
//	c = 3;
//	c = b; // b의 값을 대입(참조하는 것이 아님) | ③ 레퍼런스 변수를 처음 정의할 때 외에는 다른 변수를 참조하게 만들 수 없음
//	c = 4;
//
//	cout << c << endl;
//
//
//
//
//
//	const int& d = b;
//	d = 5; //에러 o | 레퍼런스 변수+const : 해당속성을 갖는 레퍼런스 변수는 자신의 값을 바꿀 수 없음
//	b = 5; //에러 x | 레퍼런스 변수+const : 대상변수를 통한 값 변경은 가능*
//	
//
//	int x = 5;
//	const int& rx = 9; // 바로 상수를 참조할 수 없지만, const+레퍼런스 = 값  가능 , 수정x
//
//
//
//
//	return 0;
//}