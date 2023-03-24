//#include<iostream>
//using namespace std;
//enum Color { RED, GREEN, BLUE, YELLOW };
////             0    1      2      3
//enum Java {PASS,FAIL};   // 오류 : Java와 Python내용 같아서 인지 오류
//enum Python {PASS,FAIL}; // 오류
//
///*열거체
//  : ① 열거체는 기본적으로 인터져 타입으로 동작
//    ② 산술연산 불가
//	③ 정수대입 불가
// */
//int main() {
//	Color c1 = RED;
//	Color c2;
//
//	
//	// 반대의 경우 할당과 산술연산이 가능
//	// => 묵시적 Casting 
//	int n = BLUE;
//	cout << n << endl;
//	// 2출력됨
//
//	int o = GREEN + BLUE;
//	cout << o << endl;
//	// 3출력됨
//
//	/*받는 타입이 인테져 타입이라면 열거체 ①,② 가능
//	  받는 타입이 열거체면 ①,② 안됨*/
//
//	// 명시적 Casting 후 대입 가능
//	Color c3 = (Color)2;
//	cout << c3 << endl;
//	/*정수대입 가능(캐스팅 안할시에 직접 숫자 할당 x)*/ 
//
//	Color c4 = (Color)1000;
//	cout << c4 << endl;
//
//	return 0;
//}