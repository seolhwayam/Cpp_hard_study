#include<iostream>
using namespace std;

class Shape {
public:
	void Move(double x, double y);
	virtual void Draw() const;

	Shape();
	Shape(double x, double y);

protected:
	double _x, _y;
};


Shape::Shape() {
	_x = _y = 0.0;

};
Shape::Shape(double x, double y) { 
	_x = x;
	_y = y;
};
void Shape::Move(double x, double y) {
	_x = x;
	_y = y;
};
void Shape::Draw() const{
	cout << "[Shape] Position = (" << _x << " ," << _y << ")\n";
};



class Rectangle :public Shape {
public:
	void Draw() const;
	void Resize(double width, double height);

	Rectangle();
	Rectangle(double x, double y, double width, double height);
protected:
	double _width;
	double _height;

};
Rectangle::Rectangle() {
	_width = _height = 100.0f;
};
Rectangle::Rectangle(double x, double y, double width, double height) : Shape(x,y){
	Resize(width, height);
};
void Rectangle::Draw() const {
	cout << "[Rectangle] Position = (" << _x << "," << _y << ")"
		"Size = (" << _width << "," << _height << ")\n";

}; // 메소드 오버라이딩
void Rectangle::Resize(double width, double height) {
	_width = width;
	_height = height;
};




class Circle : public Shape {
public:
	void Draw() const;
	void SetRadius(double radius);
	Circle();
	Circle(double x, double y, double radius);

protected:
	double _radius;

};
Circle::Circle() {
	_radius = 100.0f;
};
Circle::Circle(double x, double y, double radius) :Shape(x,y){
	SetRadius(radius);
};

void Circle::Draw() const {

	cout << "[Circle] Position = (" << _x << ", " << _y << ")"
		"Radius = " << _radius << "\n";

};
void Circle::SetRadius(double radius) {
	_radius = radius;
};
int main() {
	////도형 객체 생성 및 그리기
	//// Shape s(100,100);

	//Shape s;
	//s.Move(100, 100);
	//s.Draw();

	////사각형 객체 생성 및 그리기
	//// Rectangle r(200,100,50,50);
	//Rectangle r;
	//r.Move(200, 100);
	//r.Resize(50, 50);
	//r.Draw();

	////원 객체 생성 및 그리기
	//// Circle c(300,100,300);
	//Circle c;
	//c.Move(300, 100);
	//c.SetRadius(30);
	//c.Draw();

	Shape* shapes[5] = { NULL };
	// 객체간 변형 
	// 부모포인터 = 자식객체

	shapes[0] = new Circle(100, 100, 50);
	shapes[1] = new Rectangle(300, 300, 100, 100);
	shapes[2] = new Rectangle(200, 100, 50, 150);
	shapes[3] = new Circle(100, 300, 150);
	shapes[4] = new Rectangle(200, 200, 200, 200);

	for (auto i = 0; i < 5; ++i) {
		shapes[i]->Draw();
	}

		for (auto i = 0; i < 5; ++i) {
			delete shapes[i];
			shapes[i] = NULL;
		}




		return 0;



	}
