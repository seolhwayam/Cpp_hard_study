//#include<iostream>
//using namespace std;
//class Complex {
//public:
//	Complex(int r, int i) : real(r), imaginary(i) {}
//	Complex operator+(const Complex& right) {
//		int real = this->real + right.real;
//		int imag = this->imaginary + right.imaginary;
//		return Complex(real, imag);
//	}
//	int Real() const { return real; }
//	int Imaginary() const { return imaginary; }
//
//private:
//	int real;     //실수부
//	int imaginary; //허수부
//
//};
//
////cout << c2 << endl; 연산용
//ostream& operator <<(ostream& o, const Complex& right) {
//	o << right.Real() << showpos << right.Imaginary() << "I" << noshowpos;
//	return;
//}
//
//void main() {
//	Complex c1(1, 1);
//	Complex c2(7, 2);
//	Complex c3(0, 0);
//	c3 = c1 + c2;
//	cout << c3.Imaginary() << endl;
//	c3 = c1.operator+(c2);
//	cout << c2 << endl;
//	//outstram   Complex 객체
//
//
//}
//
