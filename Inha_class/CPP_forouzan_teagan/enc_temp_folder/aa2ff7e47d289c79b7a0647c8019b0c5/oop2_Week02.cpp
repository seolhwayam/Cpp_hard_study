#include<iostream>
using namespace std;

int main() {
	double* pd;
	int i = 77;
	int* pi =&i;
	int** ppi = &pi; //��������
	double d = 9.7;

	cout << sizeof(pd) << endl;
	cout << sizeof(pi) << endl;
	cout << sizeof(i) << endl;
	cout << sizeof(d) << endl;

	int a=0;
	int b=0;
	int c=0;

	cout << **ppi << endl;
	cout << "�Է� : " << endl;
	cin >> a >> b;


	return 0;
}