#include<iostream>
#include<functional> //3. #include<functional> 추가
using namespace std;


int main() {

	//① 거듭제곱
	// [캡쳐블럭] (매개변수 리스트) -> 리턴타입{함수 바디 (익명함수)};
	auto power = [](int b, int e)->int {
		int r = 1;
		for (auto i = 1; i <= e; i++)
			r = r * b;
		return r;
	};

	cout << power(2, 8) << endl;
	cout << power(4, 2) << endl;

	//② 팩토리얼(재귀함수)
	function<int(int)> fact = [&fact](int n) ->int { //2 . [&fact] -> auto문제 생김 (추론 불가) -> auto >> function<int(int)>  fact -> function 인식불가
		if (n <= 1)
			return 1;
		else
			return n * fact(n - 1); // 1. auto 쪽 문제생김 fact라는 함수 아직 없음 -> &fact
	};
	
	cout << fact(6) << endl;

	// ③ 팩토리얼(삼항연산자)
	function<int(int)> fact1 = [&fact1](int n) ->int { 
		return n <= 1 ? 1 : n * fact1(n - 1);
	};

	cout << fact1(6) << endl;

	return 0;




}