#include<iostream>
using namespace std;

int squares(int n) {
	return n * n;
}

void squares(int* n) {
	*n = *n * *n;
}

void squaresPointer(const int& n) {
	int b = 7;
	n = &b;
	n = n * n;
	cout << b << endl;


}//const ������ ���� �ٲ� �� ���� �׷��� n = n * n; �κ��� n= �κ��� ������

/*const �� ���� �տ� ������ : ���ó�� ����
 		�� ���� �ڿ� ������ : ���� �ٲ� ���� ���ٴ� ���� ����
	
 ������ �� const ������Ÿ�� ���� : ����Ű�� ���� "�� ��ü"�� �ٲ� �� ����!!(�� ��� ����)
		   const int* pi = &i1;
		   pi = &i2;
		�� ������Ÿ�� const ���� : ����Ű�� ����� "�ּ�"�� �ٲ� �� ����.
		   (�� ��� ���� ������ ��ġ�� ���ٲ�| ���������� ��ġ�� ���� �ٲ���ߵ� >> pi = 11;)
		   int* const pi = &i1;
		   pi = 111 //������
		�� const ������Ÿ�� const ����: ����Ű�� �� + �ּ� �� �ٲ�(�б�����)*/




void squaresRef(int& const n) {
	int b = 7;
	n = n * n;

}// ����




int main() {
	//������ ���� �ּҸ� ���� �� ����. 
	int a = 10;
	int b = 5;
	int c = 2;

	cout << squares(a) << endl; //pass by walue

	squaresPointer(&a); //pass by pointer


	cout << a << endl;

	cout << b << endl;

	squaresRef(c);//pass by reference


	return 0;
}

// ���
// ���۷����� ���ε��ϸ� ������ �ٲ��� �ʴ´�.
// �����ʹ� ���ε��ϸ� �ٲ� �� �ִ�.