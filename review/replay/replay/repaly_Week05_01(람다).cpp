//#include<iostream>
//using namespace std;
///* lambda expression (c++ 11, 14)
//1. [캡쳐블럭] (매개변수 리스트) -> 리턴타입 {함수 바디}
//2. 이름 없는 함수
//3. 생략이 가능 한것  ①(매개변수 리스트) ② ->  ③ 리턴타입 
//4. 필수 ①[캡쳐블럭] ②{함수바디}
//5. 실행시키는 방법
//   1) 람다식 + () 붙이기 
//      : 맨끝의 소괄호 쌍은 람다표현식을 즉시 실행시키는 역할
//      [캡쳐블럭] (매개변수 리스트) -> 리턴타입 {함수 바디}();
//
//   2) 변수에 담아서 실행하기
//      auto 변수이름 =  [캡쳐블럭] (매개변수 리스트) -> 리턴타입 {함수 바디};
//	  
//	  변수이름();
//6. -> 리턴타입  [세트]
//7. [캡쳐블럭] 
//    : 람다함수 안에서 참조하려는 바깥변수들을 참조
//	  매개변수로 받은 것 이외에 [캡쳐블럭]에 적은 변수들은 참조하여서 사용 가능
//
//*/
//int main() {
//	[]() -> void {}; // [캡쳐블럭] (매개변수 리스트) -> 리턴타입 {함수 바디}
//	[]() {}; 
//	[] {}; //필수 ①[캡쳐블럭] ②{함수바디}
//
//	[] {cout << "hi lambda!" << endl; }();
//
//	//auto inha = [] {cout << "hi lambda!" << endl; };
//	//inha() ;
//
//	//auto inha1 = []() {return 5 + 10; };
//	//cout << inha1() << endl;
//
//	//auto inha2 = [](int a, int b) {return a + b; };
//	//cout << inha2(5, 10) << endl;;
//
//	//auto inha3 = [](int a, int b) -> int {return a + b; };
//	//cout << inha3(5, 10) << endl;;
//
//	//auto inha4 = [](int a, int b) -> int {return a + b; }(5,10);
//	//cout << inha4 << endl;;
//
//	//auto inha5= [](float a, int b) -> int {return a + b; }; //int로 캐스팅
//	//cout << inha5(7.7f,2) << endl; //9
//
//	//auto inha6 = [](float a, int b) -> float {return a + b; }; //float로 캐스팅
//	//cout << inha6(7.7f, 2) << endl; //9.7
//
//	//auto inha7 = [](float a, int b) {return a + b; }; // 큰타입으로 자동 캐스팅(맘대로~)
//	//cout << inha7(7.7f, 2) << endl; //9.7
//
//	short c = 5, d = 7;
//	auto inha8 = [c, d](float a, float b) -> int {return a + b + c + d; }; //int 캐스팅
//	//원래는 c,d는 함수의 매개변수로 받지 않았기 때문에 오류가 난다.
//	//하지만 [캡쳐블럭]을 통해 바깥쪽 변수 참조 가능
//
//	cout << inha8(1.9f, 2) << endl;
//
//
//
//
//	return 0;
//}