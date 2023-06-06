//#include<iostream>
//using namespace std;
//
//class complex {
//public:
//	complex(int r, int i) : real(r), imaginary(i) {}
//
//	/*operator : () [후치 연산과 같은 특수 경우에는(타입)으로 구분한다*/
//
//
//	//전위연산(의미 헤치는 연산자 오버로딩은 지양하자! 이름이 ++면 안에도 ++)
//	complex operator++() {
//		this->real++;
//		return *this;
//		//this -> 이것도 포인터처럼 가르킨거 그래서 값 가져오려면 *this
//
//	}
//	//후치연산
//	complex operator++(int) {
//		complex prev(this->real, this->imaginary); //지금 현재 값 객체 생성
//		this->real++;
//		return prev;
//
//	}
//
//	//피연산자 2개
//	/*complex operator+(const complex& right){
//		int real = this->real + right.real;
//		int imag = this->imaginary + right.imaginary;
//		return complex(real, imag);
//
//
//		//c2 -> 레퍼런스 right / c1 -> this / c3 -> complex타입 리턴
//	}*/
//
//	// 기존 메소드
//	/*complex add(const complex& right) {
//		int real = this->real + right.real;
//		int imag = this->imaginary + right.imaginary;
//		return complex(real, imag);
//	}*/
//	int real() const { return real; }
//	int imaginary() const { return imaginary; }
//private:
//	int real;   //실수부
//	int imaginary;  //허수부
//};
//
//
//int main() {
//	/*complex c1(1, 1);
//	complex c2(7, 2);
//	complex c3(0, 0);*/
//
//	complex c1(1, 1);
//	complex prefix(0, 0);
//	complex postfix(0, 0);
//
//	prefix = ++c1;
//	postfix = c1++;
//	// 앞 뒤 구분 안됨 (위에 (타입)적으면 후치연산)
//
//	cout << prefix.real() << endl; //prefix = c1 =(2,1)
//	cout << postfix.real() << endl;// postfix =(2,1),c1 = (3,1)
//	cout << c1.real() << endl;
//
//
//	//c3 = c1.add(c2); //c3 = c1 + c2;
//	//c3 = c1 + c2;
//	//cout << c3.real() << ", " << c3.imaginary() << endl;
//
//	return 0;
//}