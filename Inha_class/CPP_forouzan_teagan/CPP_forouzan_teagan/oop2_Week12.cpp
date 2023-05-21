//#include <iostream>
//using namespace std;
///*
//
//const_cast : const, volatile 등의 속성 변경 (상수성을 제거) 변경 가능!
//dynamic_cast : 상속 관계의 클래스 포인터 및 레퍼런스 타입 체크
//static_cast : 논리적으로 변환 가능한 타입만 변환, 그 외의 변환은 에러로 처리
//reinterpret_cast : 포인터끼리, 포인터와 수치형 간의 변환
//
//*/
//
//// -----------------------------------------------------------------------------------------------------------
///* < const_cast > const(상수 제거), volatile(휘발성, const 작업에서 제외, 멀티 스레딩에서 사용) 등의 속성을 변경 */
//
////int main() {
////   char univ[] = "Inha";
////   const char* c1 = univ;
////   char* c2;
////   // char* c2 = &univ[0];
////
////   // c2 = c1;   // 상수성 제거 // c1 const라 대상 변경 불가한데 c2 에 대입해버리면 c2에서 변경 가능하게 됨.
////
////   // c2 = const_cast<char*>(c1);
////   
////   // int* pi = const_cast<int*>(c1);   // 대상체 타입을 char 였는데 int 로 바꾸려고 함
////   
////   // f = const_cast<float>(c1);   // const_cast 형식은 개체 형식에 대한 포인터, 참조 또는 멤버 포인터여야 한다.
////                        // 기본형으로 못 바꿈   // 엄격하게 막음(심각한 문제 다 막아줌)
////
////   c2[0] = 'i';
////   cout << c2 << endl;
////
////}
//
//// -----------------------------------------------------------------------------------------------------------
///* < dynamic_cast >  상속 관계의 클래스 포인터 및 레퍼런스 타입 체크 */
//
//class A {
//public:
//   virtual void Func() {}
//
//};
//
//class B : public A {};   // B는 A를 상속 받음
//class C : public B {};   // C는 B를 상속 받음
//// A(할아버지) - B(아버지) - C(나)
//
//int main() {
//   A* pa1 = new C;   // 손주 객체 클래스
//   A* pa2 = new A;
//   C* pc1 = dynamic_cast<C*>(pa1);      // dynamic<바꿀 타입>(원 객체);
//   C* pc2 = dynamic_cast<C*>(pa2);   // 캐스팅 실패하면 NULL 리턴 // (할아버지가 손주 타입으로 변환하려고 함)
//
//   try {
//      C& rc1 = dynamic_cast<C&>(*pa2);   // 캐스팅 실패, bad_cast 예외 발생 // (할아버지가 손주 타입으로 변환하려고 함)
//   }
//   catch (bad_cast& e) {
//      cout << "bad_cast~~" << endl;
//   }
//
//}
//