#include<iostream>
using namespace std;

int main() {
	double* pd;
	const double d = 9.7;
	pd = &d;
	// �����͸� �б��������� ���ڴ�.

	*pd = 3.13;




	int i = 77;
	int* pi =&i;
	int** ppi = &pi; //��������
	

	cout << sizeof(pd) << endl;
	cout << sizeof(pi) << endl;
	cout << sizeof(i) << endl;
	cout << sizeof(d) << endl;

	int a=0;
	int b=0;
	int c=0;

	cout << **ppi << endl;




	return 0;
}