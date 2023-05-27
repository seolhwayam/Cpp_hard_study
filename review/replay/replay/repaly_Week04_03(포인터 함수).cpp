//#include<iostream>
//using namespace std;
//
//int Factorial(int);
//int FactorialRecursion(int);
///*
//함수 포인터
//1. 리턴타입(* 함수 포인터 이름)(매개변수 타입)
//2. 함수의 리턴타입과 매개변수 타입이 맞아야 사용 가능
//함수 : int Factorial(int);      [리턴타입 int  매개변수 타입 int]
//포인터 함수 : int(*pFact)(int); [리턴타입 int  매개변수 타입 int]
//3. 포인터는 주소를 받는다 -> 함수포인터는 함수의 주소를 받는다 -> & 함수이름
//
//[사용법]
//1) 함수 포인터 생성 :  리턴타입(* 함수 포인터 이름)(매개변수 타입)
//2) 함수 포인터 초기화 : 함수 포인터 이름 = &함수이름
//3) 사용하기 : (*함수 포인터 이름)(매개변수)
//*/ 
//
//int main() {
//
//	int in;
//	cin >> in;
//
//	int(*pFact)(int);
//
//	pFact = &Factorial; 
//	/*
//	*포인터는 주소를 받는다 -> 함수포인터는 함수의 주소를 받는다 -> & 함수이름
//	* 리턴타입, 매개변수 타입 매칭
//	*/
//
//	cout << (*pFact)(in) << endl;
//
//	cout << Factorial(in) << endl;
//	cout << FactorialRecursion(in) << endl;
//
//	return 0;
//}
//
//
//int FactorialRecursion(int f) {
//	if (f <= 1)
//		return 1;
//	else
//		return f * FactorialRecursion(f - 1);
//}
//
//int Factorial(int f) {
//	int result = 1;
//
//	for (int i = 1; i <= f; i++) {
//		result = result * i;
//	}
//	return result;
//}
//
//
