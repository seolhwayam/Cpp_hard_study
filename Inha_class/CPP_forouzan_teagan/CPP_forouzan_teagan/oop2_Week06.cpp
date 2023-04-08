//#include "circle.h"
//
//int Circle::count = 0;
//
///*
//Circle::Circle() {
//    radius = 1.0;
//    count++;
//    cout << this << " 객체 생성(기본생성자)\n";
//}
//*/
///*
//Circle::Circle(double r) {
//    count++;
//    radius = r;
//    cout << this << " 객체 생성(매개변수생성자)\n";
//}
//*/
//Circle::Circle() : radius(1.0) {
//    count++;
//    cout << this << " 객체 생성(기본생성자)\n";
//}
///*
//}
//Circle::Circle(double radius) {
//    radius = radius;  // 멤버변수와 매개변수의 구분이 불가능
//    count++;
//    cout << this << " 객체 생성(매개변수생성자)\n";
//}
//*/
///*
//Circle::Circle(double radius) {
//    this->radius = radius;
//    count++;
//    cout << this << " 객체 생성(매개변수생성자)\n";
//}
//*/
//
//Circle::Circle(double radius) : radius(radius) {
//    count++;
//    cout << this << " 객체 생성(매개변수생성자)\n";
//}
///*
//Circle::Circle(const Circle& c) {
//    count++;
//    radius = c.radius;
//    cout << this << " 객체 생성(복사생성자)\n";
//}
//*/
//Circle::Circle(const Circle& circle) : radius(circle.radius) {
//    count++;
//    cout << this << " 객체 생성(복사생성자)\n";
//}
//Circle::~Circle() {
//    count--;
//    cout << this << " 객체 소멸. 내가 너를 기억하마!\n";
//}
//
//double Circle::getRadius() const
//{
//    int a = 9;
//    //radius = 2.0;
//    return radius;
//}
//double Circle::getArea() const
//{
//    const double PI = 3.14;
//    return (PI * radius * radius);
//}
//double Circle::getPerimeter() const
//{
//    const double PI = 3.14;
//    return (2 * PI * radius);
//}
//void Circle::setRadius(double value)
//{
//    radius = value;
//}
//int Circle::getCount() {
//    return count;
//}
//
////클래스 리턴타입 Circle* 변경
//
//Circle* circle7 = new Circle(7.0);
////동적할당 파트
//cout << circle7->getArea() << " ";
//
//delete circle 7;
//circle7 = NULL;
//// 죽기전까지 살려둘 수 있다.
//
//return circle7;
//
//
//// main
//_Cirecle* copyCircle = test() //Circle* circle7 = new Circle(7.0);
//cout << copyCircle -> getRadius << " ";
//delete copyCircle;
//copyCirele = nullptr;
//
//// 동적메모리 -> delete 실행시점에서 사라짐
//// 일반 애들 -> 함수 끝나면 사라짐
//// 전역변수 -> 프로그램이 끝나야 사라짐

/*C++11, nullptr 지정 안할경우 더미값을 가지고 있음 (nullptr : "없음" / NULL, 0 : 0 값 넣음)*/