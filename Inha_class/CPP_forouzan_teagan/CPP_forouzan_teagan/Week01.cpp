#include<iostream>
using namespace std; //JAVA의 패키지와 같음(폴더)


	//week01 
	/* CPP는 Class없이도 코딩 가능
	* pubilc | protectd | private 접근 제한자 
	* 
	* 클래스 >> 멤버함수 | 메소드
	* 클래스x >> 함수
	* 타입 - 타입 또는 클래스
	* 인스턴스 - 인스턴스 또는 객체
	* 속성 - 데이터 맴버
	* 행위 - 맴버함수
	* 
	* 클래스의 정의 - 속성과 행위 선언
	* 맴버 함수 정의 - 행위 정의
	* 애플리케이션 - 객체를 인스턴스화하고 사용
	* 
	* const >> Java에서 fainall 
	* 변수 > 상수 | 함수 > 오버라이딩x | 클래스 > 상속불가
	* 
	* 사이드이펙트 > 값이 바뀌는 것
	* 
	* const ⓛ 변수 앞에 붙으면 : 상수처럼 동작
	*		② 변수 뒤에 붙으면 : 값이 바뀔 일이 없다는 것을 보증
	*		  
	* this >> 할당한 메모리 번지 주소 16진수로 볼 수 있음
	*		  포인터
	* mutable
	*/

	//클래스의 정의
	class Circle {
	private:
		double mutable radius;
	public:
		Circle();
		double getRadius() const;
		double getArea() const;
		double getPerimeter() const;
		void setRadius(double value);

	};

	Circle::Circle() {
		cout <<this<< "객체 생서됨!";
	}

	// 맴버 함수 정의
	double Circle::getRadius() const {
		return radius;
	}

	double Circle::getArea() const {
		const double PI = 3.14;
		return(PI * radius*radius);
	}
	double Circle::getPerimeter() const {
		const double PI = 3.14;
		return(2 * PI * radius);
	}
	void Circle::setRadius(double value) {
		radius = value;
	}
	int main() {
		cout << "Circle 1:" << endl;
		Circle circle1;
		circle1.setRadius(10.00);
		cout << "Radius: " << circle1.getRadius() << endl;
		cout << "Area: " << circle1.getArea() << endl;
		cout << "Perimeter:" << circle1.getPerimeter() << endl;

		cout << "Circle 2:" << endl;
		Circle circle2;
		circle1.setRadius(20.00);
		cout << "Radius: " << circle2.getRadius() << endl;
		cout << "Area: " << circle2.getArea() << endl;
		cout << "Perimeter:" << circle2.getPerimeter() << endl;

		return 0;

	}

	

