#include<iostream>
using namespace std;

int main() {
	// ▶ 캡처블럭 값 변경 오류
	//short c = 5, d = 7;
	//auto inha_1 = [c, d](float a, int b)-> int { //[c,d] 값으로서만 캡처 >> 그래서 수정 X 값에다 어캐함;;
	//	return a + b + c + d;
	//};

	//cout << inha_1(1.9f, 2) << endl;




	// ① 캡처블럭 값 변경하기
	// 
	//캡쳐블럭 : 외부 변수 참조 가능
	// 
	// 1) [&변수] : & + 특정변수 그 변수만 참조형태로 해서 원본의 값을 변경
	
	short c = 5, d = 7;
	auto inha_2 = [&c, &d](float a, int b)-> int {  
		c = -5;
		d = 8;
		return a + b + c + d;
	};

	cout << inha_2(1.9f, 2) << endl;

	// 2) [&] : 전체, 모든 변수에 대한 참조로써 값을 변경 
	auto inha_3 = [&](float a, int b)-> int {  
		c = -5;
		d = 8;
		return a + b + c + d;
	};

	cout << inha_3(1.9f, 2) << endl;


	return 0;
}