//#include<iostream>
//using namespace std;
//// void 리턴값이 없음
//
//void Hello(); /*♠ 오류해결 : 프로토 타입(인수 없는버전) ① 함수설명*/
//
//void Hi(int); //프로토 타입 명시(인수 있는 버전)
//
//int Factorial(int); //팩토리얼 함수(반복문 이용)
//
//int FactorialRecursion(int); //팩토리얼 함수(재귀함수 이용)
//
//
//int main() {
//
//	Hello();
//	Hi(5);
//
//	cout << Factorial(5) << endl;
//
//	cout << FactorialRecursion(5) << endl;
//	//  Factorial() == FactorialRecursion() 결과 동일
//
//
//
//	int(*pFact)(int); // 함수 포인터(함수의 주소를 받는다)
//	void(*pHi)(int);
//
//	/*<함수 포인터 선언 문법>
//	   리턴타입 매칭 (*포인터이름) (매개변수 타입 매칭);
//	  ※ 다른 타입 넣으면 오류*/ 
//
//	pFact = &Factorial;
//	pHi = &Hi;
//
//	int in;
//	cin >> in;
//		
//	
//	cout << (*pFact)(in) << endl;
//	// (*포인터 이름)(넘겨질 매개변수 값)
//
//	(*pHi)(in);
//
//	/*함수 포인터
//	선언 : 리턴타입 매칭 (*포인터이름) (매개변수 타입 매칭);
//	사용 : (*포인터 이름)(넘겨질 매개변수 값) */		
//	
//	return 0;
//}
//
//void Hello() {
//	cout << "Hello~" << endl; //♠ main에서 Hello못찾아서 에러남
//}
//
//void Hi(int n) {
//	cout << "Hi~"<<n << endl;
//}
//
//int Factorial(int f){
//	int result = 1;
//
//	for (int i = 1; i <= f; i++) {
//		result = result * i;
//	}
//	return result;
//}
//
//int FactorialRecursion(int f) {
//	// f = 4
//	// f = 3
//	// f = 2
//	if (f <= 1)
//		return 1;
//	else
//		return f * FactorialRecursion(f - 1);
//	// 4 * FactorialRecursion(3)
//	// 3 * FactorialRecursion(2)
//	// 2 * FactorialRecursion(1)  ※ (f <= 1) 에 충족!
//}
//
