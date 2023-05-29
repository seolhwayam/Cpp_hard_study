//#include<iostream>
//#include<string>
//using namespace std;
///*
//다중상속
//: 2개 이상의 부모 클래스를 동시에 상속하는 경우
//
//[문제]
//1. 상속받은 클래스내에 같은 이름의 것을 실행할 때
//   :: 어떤 것을 가르키는지 몰라 에러가남
//   :: 해결책
//   1) 스코프를지정해 주어서 어떤 것을 가르키는 지 명시해 준다.
//      객체.해당클래스이름::메소드이름();
//	  ex) s1.DormStudent::Warn();
//
//*/
//class UnderGradStudent {
//public:
//	string name;
//	string dept;
//
//	void Warn() {};
//};
//class DormStudent {
//public:
//	string building;
//	int roomNo;
//
//	void Warn() {};
//
//};
//
//class UnderGrad_DormStudent :
//	public UnderGradStudent, public DormStudent {
//public:
//
//};
//
//
//void main() {
//
//	UnderGrad_DormStudent s1;
//	s1.name = "김인하";
//	s1.dept = "CSE";
//	s1.building = "1st";
//	s1.roomNo = 1024;
//
//	s1.DormStudent::Warn();
//
//
//
//}