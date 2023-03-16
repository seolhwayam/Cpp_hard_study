//#include<iostream>
//using namespace std;
///*
//int main() {
//	int i1 = 77;
//	int i2 = 16;
//
//	//① const 포인터타입 변수 : 가르키는 값의 "값 자체"를 바꿀 수 없다!!(팔 까딱 가능)
//	/*const int* pi = &i1;
//	* 
//	* 
//	* 
//	* 
//	* 
//	  pi = &i2;*/
//
//	//② 포인터타입 const 변수 : 가르키는 대상의 "주소"를 바꿀 수 없다.
//	//(팔 까딱 못함 포인터 위치를 못바꿈| 인위적으로 위치를 내가 바꿔줘야됨 >> pi = 11;)
//	/*int* const pi = &i1;
//	pi = 111 //에러남*/
//
//	/③ const 포인터타입 const 변수: 가르키는 값 + 주소 못 바꿈(읽기전용)
//
//
//	cout << *pi << endl;
//	
//
//
//
//
//
//	double* pd;
//	const double d = 9.7;
//	pd = &d;
//	 포인터를 읽기전용으로 쓰겠다. pd =3.14 처럼 내용 못 바꿈
//	 
//	 const 포인터변수타입
//	 맨앞에 나오면 가르키는 대상의 "값"을 바꿀 수 없다.
//	 하지만 포인터 위치를 바꿀 수 있다 A사람을 B사람으로 (A사람은 바뀌지 않음)
//
//	 const 중간에 바꾸면
//	 가르키는 대상의 주소를 못바꾼다
//	
//
//
//
//	double d2 = 2.91;
//	const double* pd;
//	pd = &d2;
//
//
//
//
//
//
//	int i = 77;
//	int* pi =&i;
//	int** ppi = &pi; //간접참조
//	
//
//	cout << sizeof(pd) << endl;
//	cout << sizeof(pi) << endl;
//	cout << sizeof(i) << endl;
//	cout << sizeof(d) << endl;
//
//	int a=0;
//	int b=0;
//	int c=0;
//
//	cout << **ppi << endl;
//
//
//
//
//	return 0;
//	
//}
