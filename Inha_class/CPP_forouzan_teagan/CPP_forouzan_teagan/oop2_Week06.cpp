//#include "circle.h"
//
//int Circle::count = 0;
//
///*
//Circle::Circle() {
//    radius = 1.0;
//    count++;
//    cout << this << " ��ü ����(�⺻������)\n";
//}
//*/
///*
//Circle::Circle(double r) {
//    count++;
//    radius = r;
//    cout << this << " ��ü ����(�Ű�����������)\n";
//}
//*/
//Circle::Circle() : radius(1.0) {
//    count++;
//    cout << this << " ��ü ����(�⺻������)\n";
//}
///*
//}
//Circle::Circle(double radius) {
//    radius = radius;  // ��������� �Ű������� ������ �Ұ���
//    count++;
//    cout << this << " ��ü ����(�Ű�����������)\n";
//}
//*/
///*
//Circle::Circle(double radius) {
//    this->radius = radius;
//    count++;
//    cout << this << " ��ü ����(�Ű�����������)\n";
//}
//*/
//
//Circle::Circle(double radius) : radius(radius) {
//    count++;
//    cout << this << " ��ü ����(�Ű�����������)\n";
//}
///*
//Circle::Circle(const Circle& c) {
//    count++;
//    radius = c.radius;
//    cout << this << " ��ü ����(���������)\n";
//}
//*/
//Circle::Circle(const Circle& circle) : radius(circle.radius) {
//    count++;
//    cout << this << " ��ü ����(���������)\n";
//}
//Circle::~Circle() {
//    count--;
//    cout << this << " ��ü �Ҹ�. ���� �ʸ� ����ϸ�!\n";
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
////Ŭ���� ����Ÿ�� Circle* ����
//
//Circle* circle7 = new Circle(7.0);
////�����Ҵ� ��Ʈ
//cout << circle7->getArea() << " ";
//
//delete circle 7;
//circle7 = NULL;
//// �ױ������� ����� �� �ִ�.
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
//// �����޸� -> delete ����������� �����
//// �Ϲ� �ֵ� -> �Լ� ������ �����
//// �������� -> ���α׷��� ������ �����

/*C++11, nullptr ���� ���Ұ�� ���̰��� ������ ���� (nullptr : "����" / NULL, 0 : 0 �� ����)*/