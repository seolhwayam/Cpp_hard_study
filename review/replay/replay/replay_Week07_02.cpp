#include<iostream>
using namespace std;
/*[클래스와 객체]
- 구조체와 클래스의 차이점
1. 키워드
   클래스 : class 키워드
   구조체 : struct 키워드

2. 접근 지정자 생략시
    클래스 : private 접근
	구조체 : public 접근

3. 맴버 함수(메서드) 정의
    클래스 : 맴버함수 정의 가능
	구조체 : 맴버함수 정의 불가능(맴버변수 정의 가능)


- 클래스(class)
1. 클래스안에 선언된 함수 => 메서드
① 사용 :  객체.매서드 이름
② 메서드 오버로딩 등 가능
③ 클래스 내에 선언된 맴버함수에 대한 접근이 자유롭다
④ 클래스 밖에서 선언하기
   class 클래스 이름{
   1) 클래스 정의 안에는 메서드의 프로토타입
   2) 클래스 정의 밖에는 범위 지정 연산자를 사용해서 함수 정의

   class 클래스이름{

   메서드의 프로토 타입;

   };

   리턴타입 클래스이름::메서드이름(){
   함수 바디
   };

2. 생성자
① 객체를 생성할 때 자동적으로 호출되는 함수(객체 생성 시 딱 한번 동작!)
② 클래스의 이름과 같다.
③ 생성자는 리턴타입이 없다.
④ 클래스 밖에 생성하기

   class 클래스 이름{
   접근자:
   클래스이름();  //기본 생성자
   };

   클래스이름::클래스이름(){
   함수바디
   };

⑤ 생성자 오버로딩
   Point(); => 기본생성자
   Point(int _x, int _y); => 생성자 오버로딩

   객체생성시 매개변수 입력하면 자동으로 생성자 오버로딩된 생성자 동작

⑥ 복사 생성자
1) 자신과 동일한 타입의 객체에 대한 레퍼런스를 인자로 받는 생성자
2) 복사 생성자 실행하기
   - 클래스이름 객체이름(복사할 객체);
     ( Point p6(p1) )
    
   - 클래스이름 객체이름 = 복사할 객체;
     ( Point p3 = p2; )


3. 소멸자
① 객체가 소멸될 때 자동적으로 호출되는 함수

*/
class Point {
public:
	int x, y;

	Point();
	Point(int _x, int _y); //생성자 오버로딩

	// 복사 생성자
	//Point(Point& pt);


	//복사 생성자 : 자신과 동일한 타입의 객체에 대한 레퍼런스를 인자로 받는 생성자

	Point(const Point& pt);

	

	void print();

};
void Point::print() {
	cout << x << " " << y << endl;
};
Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(int _x,int _y) {
	x = _x;
	y = _y;
}
Point::Point(const Point& pt) {
	cout << "Copy constructor!" << endl;
	x = pt.x;
	y = 0;
}

int main() {
	Point p1, p2,p5(3,5);
	p1.x = 10;
	p1.y = 10;
	p2.x = 20;
	p2.y = 20;

	Point p6(p1); // 복사생성자 실행

	Point p3 = p2; // 값에 의한 복사(초기화)  => 복사생성자 실행
	p3.print();



	p3 = p1; // 값에 의한 복사(대입)
	p3.print();

	p1.print();
	p2.print();
	p2.print();
	p5.print();
	


	return 0;
}