//#include<iostream>
//using namespace std;
//
//class complex {
//public:
//	complex(int r, int i) : real(r), imaginary(i) {}
//
//	/*operator : () [��ġ ����� ���� Ư�� ��쿡��(Ÿ��)���� �����Ѵ�*/
//
//
//	//��������(�ǹ� ��ġ�� ������ �����ε��� ��������! �̸��� ++�� �ȿ��� ++)
//	complex operator++() {
//		this->real++;
//		return *this;
//		//this -> �̰͵� ������ó�� ����Ų�� �׷��� �� ���������� *this
//
//	}
//	//��ġ����
//	complex operator++(int) {
//		complex prev(this->real, this->imaginary); //���� ���� �� ��ü ����
//		this->real++;
//		return prev;
//
//	}
//
//	//�ǿ����� 2��
//	/*complex operator+(const complex& right){
//		int real = this->real + right.real;
//		int imag = this->imaginary + right.imaginary;
//		return complex(real, imag);
//
//
//		//c2 -> ���۷��� right / c1 -> this / c3 -> complexŸ�� ����
//	}*/
//
//	// ���� �޼ҵ�
//	/*complex add(const complex& right) {
//		int real = this->real + right.real;
//		int imag = this->imaginary + right.imaginary;
//		return complex(real, imag);
//	}*/
//	int real() const { return real; }
//	int imaginary() const { return imaginary; }
//private:
//	int real;   //�Ǽ���
//	int imaginary;  //�����
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
//	// �� �� ���� �ȵ� (���� (Ÿ��)������ ��ġ����)
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