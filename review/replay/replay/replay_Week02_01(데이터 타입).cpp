. //#include<iostream>
//using namespace std;
//
//int main() {
//
//	 ① 자료형 / 음수표현방식(2의 보수법) / 자료형 size
//
//	const int k = 5; 
//	int -> 32bit
//	const : 수정할 수 없음, 상수 기능 	
//	cout << k << endl; //5
//
//
//	short s1 = 20; 
//	 short -> 16bit(-2의 15승 ~ +2의 15승-1)
//	cout << s1 << endl; //20
//
//	short s2 = 65535; 
//	 short -> 16bit(-2의 15승 ~ +2의 15승-1)
//	 65535는 short의 양수의 범위를 넘어 서서 이상한 값이 출력됨
//	cout << s2 << endl; //-1
//
//	unsigned short s3 = 65535;
//	 signed short (-2의 15승 ~ +2의 15승-1)
//	 unsigned (0 ~ 2의 16승-1)
//	   1111  1111  1111  1111
//	 +                      1
//	 --------------------------
//	  10000  0000  0000  0000
//	cout << s3 << endl; // 65535
//
//	unsigned short s4 = 65536;
//	cout << s4 << endl; //0
//
//
//
//	return 0;
//}
