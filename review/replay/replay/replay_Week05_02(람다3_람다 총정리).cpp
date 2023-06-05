//#include<iostream>
//#include<functional>;
//using namespace std;
///*lambda expression(c++ 11, 14)
//1. [캡쳐블럭] (매개변수 리스트) -> 리턴타입 {함수 바디}
//2. 이름 없는 함수(익명함수)
//3. 함수객체를 생성
//4.함수 포인터와 함수 객체의 장점을 지닌다.
//5. 재귀 호출도 가능하다.
//
//
//6. [캡쳐블럭] (매개변수 리스트) -> 리턴타입 {함수 바디}
//7. 생략이 가능 한것  ①(매개변수 리스트) ② ->  ③ 리턴타입
//8. 필수 ①[캡쳐블럭] ②{함수바디}
//9. 실행시키는 방법
//   1) 람다식 + () 붙이기
//      : 맨끝의 소괄호 쌍은 람다표현식을 즉시 실행시키는 역할
//      [캡쳐블럭] (매개변수 리스트) -> 리턴타입 {함수 바디}();
//
//   2) 변수에 담아서 실행하기
//      -auto 변수이름 =  [캡쳐블럭] (매개변수 리스트) -> 리턴타입 {함수 바디};
//	  변수이름(매개변수);
//
//	  -auto 변수이름 =  [캡쳐블럭] (매개변수 리스트) -> 리턴타입 {함수 바디}(매개변수);
//	  변수이름;
//
//
//10. -> 리턴타입  [세트]
//11. [캡쳐블럭]
//    : 람다함수 안에서 참조하려는 바깥변수들을 참조
//	  매개변수로 받은 것 이외에 [캡쳐블럭]에 적은 변수들은 참조하여서 사용 가능
//	* [캡쳐블럭] 활용하기
//	1) [&해당변수] (매개변수 리스트) -> 리턴타입 {함수 바디};
//	   [&해당변수]시 해당변수값 참조하여 함수 바디내에서 변경 가능
//
//	2) [&] (매개변수 리스트) -> 리턴타입 {함수 바디};
//	   [&]시 main에 있는 모든 변수에 대해 참조 가능 -> 모든 변수 참조하여서 사용가능(참조변수)
//	   ※ 참조하여서 수정, 사용 가능
//
//	3) [=] (매개변수 리스트) -> 리턴타입 {함수 바디};
//	   [=]시 main에 있는 모든 변수에 대해 사용 가능 -> 모든 변수 사용가능(값)
//		※ 값으로서 사용가능(수정 불가능)
//
//
//12.
//*auto 변수이름 =  [캡쳐블럭] (매개변수 리스트) -> 리턴타입 {함수 바디}(매개변수);
// => 변수 = 해당 리턴타입 변수
//
//*auto 변수이름 =  [캡쳐블럭] (매개변수 리스트) -> 리턴타입 {함수 바디};
// => 변수 = 객체
//
// 13. 재귀함수 사용 시 주의점
//
// auto fact = [](int n)->int {
//		if (n <= 1)
//			return 1;
//		else
//			return n * fact(n - 1);
//};
//
//<에러>
//	1. 재귀함수부분인 나를 호출하는 과정에서 밖에서 끌어다 와야 하는데 아직 없어서 호출이 안되서 오류남
//	   return n * fact(n - 1); fact부분 오류
//
//	2. 1번 해결위해서 [캡쳐블록] 이용 -> [&fact] 함수자체를 참조
//
//	3. 2번으로 참조오류를 해결했지만, auto부분이 추론을 못함
//
//	4. #include<functional>; 이용하여서 해결
//	   function<int(int)> fact = [&fact](int n)->int {}
//	   function<매개타입(리턴타입)> 함수이름 = [&함수이름](매개변수) -> 리턴타입{함수 바디};
//
//<교수님>
//	람다에서 재귀를 구현 할 때 auto 타입으로는 추론 불가
//	반드시 대입하려고 하는 함수의 타입이 명시되어야 함. 
//	->  #include<functional>;
//	->  function<int(int)> fact = [&fact](int n)->int {}
//	    function<매개타입(리턴타입)> 함수이름 = [&함수이름](매개변수) -> 리턴타입{함수 바디};
//
//
//*/
//
//
//
//int main() {
//	/*auto power = [](int b, int e)-> int {
//		int r = 1;
//		for (auto i = 1; i <= e; i++) {
//			r = r * b;
//		}
//		return r;
//	};
//
//	cout << power(2,8) << endl;*/
//
//
//	auto fact = [](int n)->int {
//		if (n <= 1)
//			return 1;
//		else
//			return n * fact(n - 1);
//	};
//
//	/* 에러
//	1. 재귀함수부분인 나를 호출하는 과정에서 밖에서 끌어다 와야 하는데 아직 없어서 호출이 안되서 오류남
//	   return n * fact(n - 1); fact부분 오류
//	
//	2. 1번 해결위해서 [캡쳐블록] 이용 -> [&fact] 함수자체를 참조
//	   
//	3. 2번으로 참조오류를 해결했지만, auto부분이 추론을 못함
//	4. #include<functional>; 이용하여서 해결
//	   function<int(int)> fact = [&fact](int n)->int {}
//	   function<매개타입(리턴타입)> 함수이름 = [&함수이름](매개변수) -> 리턴타입{함수 바디};
//
//	[교수님]
//	람다에서 재귀를 구현 할 때 auto 타입으로는 추론 불가
//	반드시 대입하려고 하는 함수의 타입이 명시되어야 함.
//
//	*/
//
//	 팩토리얼 함수 만들기
//	function<int(int)> fact = [&fact](int n)->int {
//		if (n <= 1)
//			return 1;
//		else
//			return n * fact(n - 1);
//	};
//
//
//
//	 fact코드 삼항 연산자로 변경하기
//	function<int(int)> fact1 = [&fact1](int n)->int {
//		return n <= 1 ? 1 : n * fact1(n - 1);
//	};
//
//	/*function<float(float)> fact2 = [&fact2](float n)->float {
//		return n <= 1 ? 1 : n * fact2(n - 1);
//	};*/// 갱장히 문제가 있다
//
//
//
//	cout << fact(5) << endl;
//	cout << fact1(5) << endl;
//	
//
//
//
//
//	return 0;
//
//}