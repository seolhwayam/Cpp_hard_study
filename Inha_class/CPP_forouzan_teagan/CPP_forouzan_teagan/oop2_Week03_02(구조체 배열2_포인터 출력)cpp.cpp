//#include<iostream>
//using namespace std;
//
//struct LinkedList
//{
//	int data;
//	LinkedList* p; // LinkedList타입의 포인터 변수 p
//};
//
//int main() {
//	LinkedList a, b, c; //LinkedList타입r구조체 변수 a,b,c생성
//	a.data = 99; // a초기화
//	a.p = &b; // b구조체의 주소
//
//	b.data = 93;
//	b.p = &c; // c구조체의 주소
//
//	c.data = 94;
//	c.p = &a; // a구조체의 주소
//
//	/*구조체 주소를 받을 수 있는 이유는
//	  p가 구조체 변수를 받을 수 있는 구조체 포인터 이기 때문*/ 
//
//
//	cout << b.data << endl;
//	cout << a.p->data  << endl;
//
//	cout << c.data << endl;
//
//	cout << b.p->data << endl;
//	cout << (*b.p).data << endl;
//
//	cout << a.p->p->data << endl;  
//	// a는 b의 주소를 가지고 있다. b는 c의주소를 가지고 있다.
//	// a.p->p (a가 가진 p(b의주소) ->data (b의 주소를 통해 b가 가지고 있는 c의주소 -> c의 값 접근)
//
//	cout << c.p->p->p->data << endl;
//	//  a의 주소 -> b의주소 -> c의주소 -> c의 data 출력
//	// c데이터 한바퀴 돌기
//	
//
//
//	return 0;
//}