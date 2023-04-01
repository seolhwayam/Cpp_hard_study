//#include<iostream>
//#include<functional> //3. #include<functional> 추가
//using namespace std;
//
//
//int main() {
//
//	//① 거듭제곱
//	// [캡쳐블럭] (매개변수 리스트) -> 리턴타입{함수 바디 (익명함수)};
//	auto power = [](int b, int e)->int {
//		int r = 1;
//		for (auto i = 1; i <= e; i++)
//			r = r * b;
//		return r;
//	};
//
//	cout << power(2, 8) << endl;
//	cout << power(4, 2) << endl;
//
//	//② 팩토리얼(재귀함수)
//	function<int(int)> fact = [&fact](int n) ->int { //2 . [&fact] -> auto문제 생김 (추론 불가) -> auto >> function<int(int)>  fact -> function 인식불가
//		if (n <= 1)
//			return 1;
//		else
//			return n * fact(n - 1); // 1. auto 쪽 문제생김 fact라는 함수 아직 없음 -> &fact
//	};
//	// 람다에서 재귀를 구현 할 때 auto 타입으로는 추론 불가
//	// 반드시 대입하려고 하는 함수의 타입이 명시되어야 함.
//
//	// auto가 추론해야되는데 안에서 나를 불러올때 추론 불가
//	
//	cout << fact(6) << endl;
//
//	// ③ 팩토리얼(삼항연산자)
//	function<int(int)> fact1 = [&fact1](int n) ->int { 
//		return n <= 1 ? 1 : n * fact1(n - 1);
//	};
//
//	cout << fact1(6) << endl;
//
//
//	/*람다 함수
//	1. 익명함수
//	2. 함수 객체를 생성
//	3. 함수 포인터와 함수 객체의 장점을 지닌다.
//	4. 캡처기능을 통해 함수 밖의 변수에 전급할 수 있다.
//	5. 옵션설정(&)를 통해 람다함수 안에서도 외부 변수의 값을 변경할 수 있다. -> 참조한다는 의미
//	6. 재귀 호출도 가능하다. -> function<int(int)> + #include<functional> 필요
//	*/
//
//	return 0;
//
//
//
//
//}