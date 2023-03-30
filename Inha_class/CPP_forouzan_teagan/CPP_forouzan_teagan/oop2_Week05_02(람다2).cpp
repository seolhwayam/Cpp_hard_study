#include<iostream>
using namespace std;

int main() {
	//short c = 5, d = 7;
	//auto inha_1 = [c, d](float a, int b)-> int { //[c,d] 값으로서만 캡처 >> 그래서 수정 X 값에다 어캐함;;
	//	return a + b + c + d;
	//};

	//cout << inha_1(1.9f, 2) << endl;

	short c = 5, d = 7;
	auto inha_2 = [&c, d](float a, int b)-> int { 
		c = -5;
		return a + b + c + d;
	};

	cout << inha_2(1.9f, 2) << endl;


	return 0;
}