#include<iostream>
using namespace std; //JAVA�� ��Ű���� ����(����)


	//week01 
	/* CPP�� Class���̵� �ڵ� ����
	* pubilc | protectd | private ���� ������ 
	* 
	* Ŭ���� >> ����Լ� | �޼ҵ�
	* Ŭ����x >> �Լ�
	* Ÿ�� - Ÿ�� �Ǵ� Ŭ����
	* �ν��Ͻ� - �ν��Ͻ� �Ǵ� ��ü
	* �Ӽ� - ������ �ɹ�
	* ���� - �ɹ��Լ�
	* 
	* Ŭ������ ���� - �Ӽ��� ���� ����
	* �ɹ� �Լ� ���� - ���� ����
	* ���ø����̼� - ��ü�� �ν��Ͻ�ȭ�ϰ� ���
	* 
	* const >> Java���� fainall 
	* ���� > ��� | �Լ� > �������̵�x | Ŭ���� > ��ӺҰ�
	* 
	* ���̵�����Ʈ > ���� �ٲ�� ��
	* 
	* const �� ���� �տ� ������ : ���ó�� ����
	*		�� ���� �ڿ� ������ : ���� �ٲ� ���� ���ٴ� ���� ����
	*		  
	* this >> �Ҵ��� �޸� ���� �ּ� 16������ �� �� ����
	*		  ������
	* mutable
	*/

	//Ŭ������ ����
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
		cout <<this<< "��ü ������!";
	}

	// �ɹ� �Լ� ����
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

	

