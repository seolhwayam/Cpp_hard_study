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
//	operator int() {
//		return this->real;
//	}
//
//
//	int Real() const { return real; }
//	int Imaginary() const { return imaginary; }
//
//private:
//	int real;     //실수부
//	int imaginary; //허수부
//};
//
//ostream& operator <<(ostream& o, const Complex& right) {
//	o << right.Real() << showpos << right.Imaginary() << "i" << noshowbase;
//
//	return o;
//}
//
//void main() {
//	Complex c1(1, 1);
//	Complex c2(7, 2);
//	Complex c3(0, 0);
//	int i;
//	i = c2;
//	cout << i << endl;
//
//	int t;
//	t = c2.operator int();
//
//
//
//
//}