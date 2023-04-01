//#include<iostream>
//using namespace std;
//
//int main() {
//	/*동적 메모리 할당
//	 :  메모리를 다루는 방법 중 하나
//		메모리를 동적으로 할당한다.
//		
//		메모리를 얻어오는 것
//		500바이트 짜리 공간 내가 좀 쓸 수 있을까?
//		뭐 알아볼게~~~ >> 메모리 할당(메모리를 요청하는 활동)
//
//		일반 메모리 할당 >> 변수 선언
//
//		static(정적) <-> 동적
//		메모리에 크기가 컴파일 시점에 결정 x
//		프로그램이 돌아가는 중간에도 동적으로 할당
//
//
//
//	    */
//
//
//	//① 동적메모리 할당 (배열)
//	int* p; //포인터 변수
//	int length,total=0;
//	double average;
//	cin >> length;
//	p = new int[length]; // 동적메모리 할당
//
//	for (auto i = 0; i < length; ++i) {
//		cin >> *(p + i);
//	}
//
//	for (auto i = 0; i < length; ++i) {
//		total = total + p[i];
//	}
//
//	average = total / (double)length;
//	cout << total << endl;
//	cout << average << endl;
//
//	delete[] p; //사용한 메모리 해제
//
//
//	//② 동적메모리 할당 (int)
//
//	int* q = new int; // 동적 할당
//	*q = 486;
//	cout << *q << endl; // 사용한 메모리 해제 | 해제 안할 시 메모리 누수 문제 등 생길 수 있음
//
//
//	delete q; // 사용한 메모리 해제 | 해제 안할 시 메모리 누수 문제 등 생길 수 있음
//		      // 두 번 delete할 경우 오류생김
//
//
//	//③ 동적메모리 할당 (short)
//	short* w = new short[100]; // 동적 할당
//	cout << w << endl; 
//	delete[] w; //해제
//	w = NULL;
//
//	cout << w << endl;
//	delete[] w; //해제
//	w = NULL;
//	
//
//
//	return 0;
//}