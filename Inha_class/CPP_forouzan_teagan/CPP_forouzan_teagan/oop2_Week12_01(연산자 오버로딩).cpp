//#include<iostream>
//using namespace std;
//
//class Complex{
//public:
//	Complex(int r, int i) : real(r), imaginary(i) {}
//
//	/*operator : () [��ġ ����� ���� Ư�� ��쿡��(Ÿ��)���� �����Ѵ�*/
//
//
//	//��������(�ǹ� ��ġ�� ������ �����ε��� ��������! �̸��� ++�� �ȿ��� ++)
//	Complex operator++() {
//		this->real++;
//		return *this;
//		//this -> �̰͵� ������ó�� ����Ų�� �׷��� �� ���������� *this
//
//	}
//	//��ġ����
//	Complex operator++(int) {
//		Complex prev(this->real, this->imaginary); //���� ���� �� ��ü ����
//		this->real++;
//		return prev;
//
//	}
//	
//	//�ǿ����� 2��
//	/*Complex operator+(const Complex& right){
//		int real = this->real + right.real;
//		int imag = this->imaginary + right.imaginary;
//		return Complex(real, imag);
//
//
//		//c2 -> ���۷��� right / c1 -> this / c3 -> ComplexŸ�� ����
//	}*/
//
//	// ���� �޼ҵ�
//	/*Complex add(const Complex& right) {
//		int real = this->real + right.real;
//		int imag = this->imaginary + right.imaginary;
//		return Complex(real, imag);
//	}*/
//	int Real() const { return real; }
//	int Imaginary() const { return imaginary; }
//private:
//	int real;   //�Ǽ���
//	int imaginary;  //�����
//};
//
//
//int main() {
//	/*Complex c1(1, 1);
//	Complex c2(7, 2);
//	Complex c3(0, 0);*/
//
//	Complex c1(1, 1);
//	Complex prefix(0,0);
//	Complex postfix(0, 0);
//
//	prefix = ++c1;
//	postfix = c1++;
//	// �� �� ���� �ȵ� (���� (Ÿ��)������ ��ġ����)
//
//	cout << prefix.Real() << endl; //prefix = c1 =(2,1)
//	cout << postfix.Real() << endl;// postfix =(2,1),c1 = (3,1)
//	cout << c1.Real() << endl;
//
//
//	//c3 = c1.add(c2); //c3 = c1 + c2;
//	//c3 = c1 + c2;
//	//cout << c3.Real() << ", " << c3.Imaginary() << endl;
//
//	return 0;
//}