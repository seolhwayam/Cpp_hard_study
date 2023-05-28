#include<iostream> //cout��� cin�Է�
using namespace std;

/*
extern ostream cout; //���
extern istream cin;  //�Է�
�����ø� Ŭ������ ������ �� ��

typedef basic_ostream<char> ostream;
typedef basic_ostream<char> ����
ostream ����

typedef basic_istream<char> istream;
typedef basic_istream<char> ����
istream ����

stream(�帧) : �귯���� ������


ios_base  : �θ�Ŭ����

basic_ios : �θ�Ŭ����

 basic_istream : cout ��ü�� Ÿ��(�ڽ� Ŭ����)
 basic_istream : cin  ��ü�� Ÿ��(�ڽ� Ŭ����)


 fmtflags : setf�� ����Ÿ��, int
*/

int main() {
	//float f = 0.01234f;
	//ios_base::fmtflags old; 
	///*	ios_base : ����� ����� ���õ� ����� �����ϴ� Ŭ����*/

	//cout << f << endl;

	//old = cout.setf(ios_base::scientific, ios_base::floatfield); //������ [ ����ϱ� ]
	///*
	//-setf :  ����� ������ �����ϴ� ���� �⺻���� �Լ�

	//floatfield : �Ǽ��� �ٷ� �� ���
	//basefield : ���� �ٷ� �� ���(ex, hex(16����))

	//ios_base::fixed -> ���� �Ҽ��� ����
	//ios_base::scientific - > ���� ����
	//
	//
	//*/

	//cout << f << endl;
	//

	//cout.setf(old, ios_base::floatfield); [���� ���·� ���ư���]
	//cout << f << endl;

	//------------------------------------------------------

	int a = 10;
	cout << hex; //�� 16���� ���� ��� 

	cout.setf(ios_base::hex, ios_base::basefield); //�� setf
	cout << a << endl;

	//-------------------------------------------------------

	bool test = true;
	cout << test << endl; // 1(true :1 / false : 0)

	cout << boolalpha; // ���ڷ� ���� (true / false) ��
	cout << test << endl;
	cout.setf(ios_base::boolalpha); //���� ������ ���
	cout << test << endl;
	cout.unsetf(ios_base::boolalpha); //�� ��ġ ���ð����� ���ư���(���ð� 1���� ���)
	cout << test << endl;

	/* ������� �����Լ�
	width() : ���� ����
	precision() : �Ҽ��� �ڸ��� ����*/

	int b = 11;
	cout.width(5);
	cout << b << endl;

	float f = 0.01234f;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(3);
	cout << f << endl;

}