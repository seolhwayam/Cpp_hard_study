//#include<iostream>
//using namespace std;
//namespace python {
//	struct info
//	{
//		string prof;
//		int id;
//		float grade;
//	};
//	
//	void talk() {
//		cout << "블라블라 파이썬" << endl;
//	};
//}
//namespace java {
//	float grade;
//}
//namespace cplusplus {
//	class info {
//	public:
//		string prof;
//		int id;
//	};
//	float grade;
//	void talk();
//}
//
//// 중복namespace
//namespace data {
//	namespace user {
//		int number;
//	}
//}
//
//
//
//float grade = 0.0f; //디폴트 namespace
//
///*
//namespace 
//: 폴더같은 역할(소스파일과 코드를 구조적으로 관리)
//* 클래스, 변수, 함수 다 들어갈 수 있다.
//* 전역변수는 디폴트 namespace 
//  => 사용법 :  :: 변수이름
//* 이름 없는 namespace의 변수는 다른 외부에서 참조 할수없다(extern사용해도 안됨)
//
//*[사용법]
//1. main 전에 스코프 설정
//① using  namespace이름::함수 등;
//   void main() {}
//
//ex)
//using  python::talk;
//void main() {}
//
//② using namespace namespace이름
//   void main() {}
//
//ex)
//using  namespace  python
//void main() {}
//
//2. 사용시에 스코프 지정
//namespace이름::함수,변수 등
//
//ex) cplusplus::grade = 4.5f;
//=========================================
//3. 중복 namespace
//- 설정
//namespace a {
//	namespace b {
//		int c;
//	}
//}
//-사용
//a::b::c
//
//4. namespace 별명 지어주기
//namespace 별명 = 원 이름
//*/
//
////using cplusplus::talk; //어떤걸 시행할지
////using  python::talk;
//using namespace cplusplus;
//void main() {
//	//float grade;
//	//cplusplus::grade = 4.5f; // cplusplus grade
//	//::grade = 4.0f; //전역변수 grade
//
//	//cout << ::grade << endl;
//
//	info p1;
//	p1.prof = "김인하";
//	p1.id = 2020;
//
//	talk();
//	cplusplus::grade = 3.96f;
//
//	//중복 namespace 사용하기
//	int user_no = data::user::number;
//
//	
//}
//
////cplusplus의 talk함수 구현
//namespace cplusplus {
//	void talk() {
//		cout << "블라블라" << endl;
//	}
//}