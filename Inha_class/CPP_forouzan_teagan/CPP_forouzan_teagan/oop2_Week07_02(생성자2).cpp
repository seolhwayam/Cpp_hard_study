//#include<iostream>
//using namespace std;
//
//class NeedConstuructor {
//public:
//
//	// const, reference -> 반드시 초기화 필요
//	const int max;
//	int& ref; // 레퍼런스 ①별명 ②&
//	int temp;
//
//	NeedConstuructor(); //1.생성자
//	NeedConstuructor(int cnt, int& number); //2.생성자 (int 타입, 레퍼런스)
//};
//NeedConstuructor::NeedConstuructor():max(100),ref(temp) { // const, reference 초기화 리스트 이용하여서 초기화!!
//	temp = 10;
//}
//NeedConstuructor::NeedConstuructor(int cnt, int& number)
//	: max(cnt),ref(number){
//	temp = 10;
//}
//
//
///* 매개변수 던질 떼
//① 생성자 오버로딩
//② 필요한 부분들 넘겨받은 값으로 초기화, 리스트 인수로 쓴다.
//*/
//
//
//int main() {
//	NeedConstuructor cr;
//
//	int num = 400;
//	NeedConstuructor cr1(500, num);
//	                        //레퍼런스 타입 > 별명 붙이기 >> 변수이름 넣기
//
//	cout << cr.max << endl;
//	cout << cr.ref << endl;
//
//	cout << cr1.max << endl;
//	cout << cr1.ref << endl;
//
//	
//
//	
//	
//
//
//
//
//
//
//	return 0;
//}