//#include<iostream>
//using namespace std;
// 
//class Point {
//public:
//	int x, y;
//	Point(); // 생성자
//	Point(int _x, int _y); // 생성자 오버로딩(매개변수 버전)
//	void Print();
//
//};
//Point::Point() { // ①생성자는 리턴타입이 없다 ②클래스의 이름과 같다
//	x = 0;
//	y = 0;
//}
//Point::Point(int _x,int _y) { // 생성자 오버로딩
//	x = _x;
//	y = _y;
//}
//// 생성자 : 객체를 생성할 때 자동으로 호출되는 함수(객체 생성시 딱 한 번 생성)
////		    ①생성자는 리턴타입이 없다 ②클래스의 이름과 같다
//// 소멸자 : 객체가 소멸될 때 자동으로 호출되는 함수
//
//void Point::Print() {
//	cout << x << "," << y << endl;
//};
//
//int main() {
//	Point p1, p2 ,p4 ,p5(200,150); // 객체 생성
//	p1.x = 10;    // 맴버변수 초기화
//	p1.y = 10;
//	p2.x = 20;
//	p2.y = 20;
//
//	Point p3 = p2; //초기화
//	p3.Print();
//	p3 = p1; // 대입
//	
//	p3.Print();
//	p4.Print();
//	p5.Print(); // 생성자 오버로딩 버전
//
//	p1.Print(); //클래스 내 메서드 사용시 
//	
//	return 0;
//}
//
//
//
//
