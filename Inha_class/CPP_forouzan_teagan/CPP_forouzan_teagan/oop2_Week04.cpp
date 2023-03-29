#include<iostream>
using namespace std;

int squares(int n) {
	return n * n;
}

void squares(int* n) {
	*n = *n * *n;
}

void squaresPointer(const int& n) {
	int b = 7;
	n = &b;
	n = n * n;
	cout << b << endl;


}//const 붙으면 값을 바꿀 수 없음 그래서 n = n * n; 부분의 n= 부분이 에러남

/*const ⓛ 변수 앞에 붙으면 : 상수처럼 동작
 		② 변수 뒤에 붙으면 : 값이 바뀔 일이 없다는 것을 보증
	
 포인터 ① const 포인터타입 변수 : 가르키는 값의 "값 자체"를 바꿀 수 없다!!(팔 까딱 가능)
		   const int* pi = &i1;
		   pi = &i2;
		② 포인터타입 const 변수 : 가르키는 대상의 "주소"를 바꿀 수 없다.
		   (팔 까딱 못함 포인터 위치를 못바꿈| 인위적으로 위치를 내가 바꿔줘야됨 >> pi = 11;)
		   int* const pi = &i1;
		   pi = 111 //에러남
		③ const 포인터타입 const 변수: 가르키는 값 + 주소 못 바꿈(읽기전용)*/




void squaresRef(int& const n) {
	int b = 7;
	n = n * n;

}// 가능




int main() {
	//포인터 만이 주소를 받을 수 있음. 
	int a = 10;
	int b = 5;
	int c = 2;

	cout << squares(a) << endl; //pass by walue

	squaresPointer(&a); //pass by pointer


	cout << a << endl;

	cout << b << endl;

	squaresRef(c);//pass by reference


	return 0;
}

// 요약
// 레퍼런스는 바인딩하면 영원히 바뀌지 않는다.
// 포인터는 바인딩하면 바꿀 수 있다.