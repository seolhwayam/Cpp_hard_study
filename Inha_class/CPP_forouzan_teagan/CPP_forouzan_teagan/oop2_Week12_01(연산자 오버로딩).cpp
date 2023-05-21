//#include<iostream>
//using namespace std;
//
//class Complex{
//public:
//	Complex(int r, int i) : real(r), imaginary(i) {}
//
//	/*operator : () [후치 연산과 같은 특수 경우에는(타입)으로 구분한다*/
//
//
//	//전위연산(의미 헤치는 연산자 오버로딩은 지양하자! 이름이 ++면 안에도 ++)
//	Complex operator++() {
//		this->real++;
//		return *this;
//		//this -> 이것도 포인터처럼 가르킨거 그래서 값 가져오려면 *this
//
//	}
//	//후치연산
//	Complex operator++(int) {
//		Complex prev(this->real, this->imaginary); //지금 현재 값 객체 생성
//		this->real++;
//		return prev;
//
//	}
//	
//	//피연산자 2개
//	/*Complex operator+(const Complex& right){
//		int real = this->real + right.real;
//		int imag = this->imaginary + right.imaginary;
//		return Complex(real, imag);
//
//
//		//c2 -> 레퍼런스 right / c1 -> this / c3 -> Complex타입 리턴
//	}*/
//
//	// 기존 메소드
//	/*Complex add(const Complex& right) {
//		int real = this->real + right.real;
//		int imag = this->imaginary + right.imaginary;
//		return Complex(real, imag);
//	}*/
//	int Real() const { return real; }
//	int Imaginary() const { return imaginary; }
//private:
//	int real;   //실수부
//	int imaginary;  //허수부
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
//	// 앞 뒤 구분 안됨 (위에 (타입)적으면 후치연산)
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