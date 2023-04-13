//#include<iostream>
//using namespace std;
// 
//class Point {
//public:
//	int x, y;
//	Point(); 
//	Point(int _x, int _y); 
//	Point(const Point& pt);
//	/*복사 생성자
//	 : 자신과 동일한 타입의 객체에 대한 레퍼런스를 인자로 받는 생성자
//	 Point(Point& pt);
//	 
//	 포인트 클래스 타입을 &(레퍼런스 : 별명)
//	 
//	 레퍼런스 : 변수의 제2의 이름(변수와 같은 메모리 번지 참조)
//	 포인터 : 주소값을 받음(다른 메모리 번지 참조*/
//
//
//	void Print();
//	// 메서드
//
//};
//Point::Point() { 
//	x = 0;
//	y = 0;
//}
//Point::Point(int _x,int _y) { 
//	x = _x;
//	y = _y;
//}
//Point::Point(const Point& pt) {
//	cout << "Copy constructor!" << endl;
//	x = pt.x;
//	y = pt.y;
//}
//
//
//void Point::Print() {
//	cout << x << "," << y << endl;
//};
//
//int main() {
//	// 생성자는 객체당 1번 실행
//
//	Point p1, p2 ,p4 ,p5(200,150); 
//	p1.x = 10; 
//	p1.y = 10;
//	p2.x = 20;
//	p2.y = 20;
//
//	Point p6(p1); // ① 복사생성사 생성
//
//	Point p3 = p2; // ②복사 생성자 생성
//	p3.Print();
//	p3 = p1; 
//	
//	p3.Print();
//	p4.Print();
//	p5.Print(); 
//
//	p1.Print(); 
//	
//	return 0;
//}
//
//
//
//
