#include<iostream>
using namespace std;
/*
��ü�� ���ܷ� ������
1. ��ü �ȿ� �������� �پ��� ������ ���� �� �ִ�.
2. ��ü�� �ɹ������鵵 �ٰ��� ������� ���̱� ������ ���ϴ� ��ŭ ������ ���� ����������
3. ���� : �Լ��� ������ �ǳʰ����� ���� ����.
 
 ������
 1. ������ ����ó�� ���� -> ����Ʈ ������ �Լ��� ���� ����
 (���ð��� ��� delete�κ����� �Լ��� ������ �޸� �������� �߻�)
*/

class SmartPointer {
public:
	SmartPointer(char* p) : ptr(p) {

	}
	~SmartPointer() {
		cout << "�Ҹ��� ���� : �޸� ����~" << endl;
		delete[] ptr;

	}
	char* const ptr;
};

void B() {
	throw "Exception!!";
}
void A() {
	char* p = new char[100]; // �����޸� �Ҵ�
	SmartPointer sp(p);
	cout << "���ܰ� �߻��ϱ� ��" << endl;
	B();
	cout << "���ܰ� �߻��� ��" << endl;


}

void main() {
	try {
		A();
	}
	catch (const char* ex) {
		cout << "���� ���� : " << ex << endl;
	}

}