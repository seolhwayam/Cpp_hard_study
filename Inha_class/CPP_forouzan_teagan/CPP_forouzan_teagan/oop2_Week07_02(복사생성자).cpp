//#include<iostream>
//using namespace std;
// 
//class Point {
//public:
//	int x, y;
//	Point(); 
//	Point(int _x, int _y); 
//	Point(const Point& pt);
//	/*���� ������
//	 : �ڽŰ� ������ Ÿ���� ��ü�� ���� ���۷����� ���ڷ� �޴� ������
//	 Point(Point& pt);
//	 
//	 ����Ʈ Ŭ���� Ÿ���� &(���۷��� : ����)
//	 
//	 ���۷��� : ������ ��2�� �̸�(������ ���� �޸� ���� ����)
//	 ������ : �ּҰ��� ����(�ٸ� �޸� ���� ����*/
//
//
//	void Print();
//	// �޼���
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
//	// �����ڴ� ��ü�� 1�� ����
//
//	Point p1, p2 ,p4 ,p5(200,150); 
//	p1.x = 10; 
//	p1.y = 10;
//	p2.x = 20;
//	p2.y = 20;
//
//	Point p6(p1); // �� ��������� ����
//
//	Point p3 = p2; // �躹�� ������ ����
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
