//#include<iostream>
//using namespace std;
///*
//★const_cast : const, volatile 등의 속성을 변경
//[사용법]
//const_cast<타입>(상수속성 제거할 변수)
//
//[주의]
//① const_cast는 형식 한정자만 조정할 수 있으며 내부 형식을 변경하지 못합니다.
//[타입 등 변경 불가]
//
//② const_cast는 객체형식에 대한 포인터, 참조 또는 맴버 포인터여야한다.
//[포인터로 받아야 하고, 포인터 타입만 가능]
//
//
//★dynamic_cast : 상속 관계의 클래스 포인터 및 레퍼런스 타입 체크
//[사용법]
//const_cast<타입>(원본)
//
//[주의]
//부모 = 자식 (0)
//자식 = 부모 (x)
//
//
//★static_cast : 논리적으로 변환 가능한 타입만 변환, 그 외의 변환은 에어로 처리.
//
//★reinterpret_cast : 포인터끼리, 포인터와 수치형 간의 변환
//
//*/
//
//class A {
//public:
//	virtual void Func() {}
//
//};
//class B : public A {};
//class C : public B {};
//
//int main() {
//	A* pa1 = new C;
//	A* pa2 = new A;
//	C* pc1 = dynamic_cast<C*>(pa1);
//	C* pc2 = dynamic_cast<C*>(pa2); //캐스팅 실패하면 NULL리턴
//	cout << pc2 << endl;
//	try {
//		C& rc1 = dynamic_cast<C&>(*pa2); //캐스팅 실패, bad_cast 예외발생(레퍼런스는 null값 리턴 안되므로 예외할수있도록 디자인됨)
//	}
//	catch (bad_cast& e) {
//		cout << "bad_cast~~" << endl;
//	}
//	return 0;
//
//
//}