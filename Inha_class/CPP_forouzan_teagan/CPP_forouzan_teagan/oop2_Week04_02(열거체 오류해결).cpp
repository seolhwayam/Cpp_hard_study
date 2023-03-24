//#include<iostream>
//using namespace std;
//// Old Style(namespace 오류해결 ①)
////namespace sophomore{
////	enum Java { PASS, FAIL };
////}
////
////namespace freshman {
////	enum Python { PASS, FAIL };
////}
//
//// Modern Style (enum Class c++11 오류해결 ②)
//enum class Jave { PASS, FAIL };
//enum class Python{PASS, FAIL};
//enum Cplusplus { PASS, FAIL };
//
//
///*오류해결 ① namespace가 물리적으로 다른 공간 할당(폴더처럼)
//		   ② enum class
//		   
//{같은 이름을 가진 변수간의 오류}*/
//
//int main() {
//	Cplusplus c = Cplusplus::PASS;
//
//	switch (c)
//	{
//	case 0:
//		cout << "합격";
//		break;
//	case Cplusplus::FAIL:
//		cout << "재수강!";
//		break;
//		}
//	/*enum class 사용시 인덱스 값으로 사용 불가능 
//	  enum은 약한 묵시적 캐스팅됨(int) 변수이기에 인덱스 값 사용 가능
//	  enum class는 강한 변수이기에 인덱스 값 사용 불가능*/
//
//	return 0; 
//}