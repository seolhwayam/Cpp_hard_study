//#include<iostream>
//using namespace std;
///*
//int main() {
//	int i1 = 77;
//	int i2 = 16;
//
//	//�� const ������Ÿ�� ���� : ����Ű�� ���� "�� ��ü"�� �ٲ� �� ����!!(�� ��� ����)
//	/*const int* pi = &i1;
//	* 
//	* 
//	* 
//	* 
//	* 
//	  pi = &i2;*/
//
//	//�� ������Ÿ�� const ���� : ����Ű�� ����� "�ּ�"�� �ٲ� �� ����.
//	//(�� ��� ���� ������ ��ġ�� ���ٲ�| ���������� ��ġ�� ���� �ٲ���ߵ� >> pi = 11;)
//	/*int* const pi = &i1;
//	pi = 111 //������*/
//
//	/�� const ������Ÿ�� const ����: ����Ű�� �� + �ּ� �� �ٲ�(�б�����)
//
//
//	cout << *pi << endl;
//	
//
//
//
//
//
//	double* pd;
//	const double d = 9.7;
//	pd = &d;
//	 �����͸� �б��������� ���ڴ�. pd =3.14 ó�� ���� �� �ٲ�
//	 
//	 const �����ͺ���Ÿ��
//	 �Ǿտ� ������ ����Ű�� ����� "��"�� �ٲ� �� ����.
//	 ������ ������ ��ġ�� �ٲ� �� �ִ� A����� B������� (A����� �ٲ��� ����)
//
//	 const �߰��� �ٲٸ�
//	 ����Ű�� ����� �ּҸ� ���ٲ۴�
//	
//
//
//
//	double d2 = 2.91;
//	const double* pd;
//	pd = &d2;
//
//
//
//
//
//
//	int i = 77;
//	int* pi =&i;
//	int** ppi = &pi; //��������
//	
//
//	cout << sizeof(pd) << endl;
//	cout << sizeof(pi) << endl;
//	cout << sizeof(i) << endl;
//	cout << sizeof(d) << endl;
//
//	int a=0;
//	int b=0;
//	int c=0;
//
//	cout << **ppi << endl;
//
//
//
//
//	return 0;
//	
//}