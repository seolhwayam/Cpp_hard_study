#include<iostream>
using namespace std;
/*
�޸� �Ҵ� : ��ǻ�ͷκ��� �޸𸮸� ����
���� �޸� �Ҵ� <-> static(����)
1. �޸𸮸� �������� �Ҵ�
   : �����Ͻ����� ���� �����ʰ�,���α׷��� ���ư��� ���߿��� �������� �޸𸮸� �Ҵ��ϴ� ���� ���Ѵ�.

2. ���� �޸� �Ҵ�
   Ÿ��* ������ ���� �̸� = new Ÿ��; //new Ÿ��[] : �迭

3. ���� �޸� ����
   *delete ������ �����̸�

   *delete[] ������ �����̸� //�迭�� ���
   
   �� ���� ������ �� ��� �޸� ���� ����




*/
int main() {

	short* p = new short[100];

	cout << p << endl;

	delete[] p;
	cout << p << endl;

	delete[] p;
	
	//int* p = new int; // �Ҵ�
	//*p = 486;

	//cout << *p << endl;
	//delete p; // ����



	//int* p;
	//int length, total = 0;
	//double average;

	//cin >> length;
	//p = new int[length]; // ���� �޸� �Ҵ�

	//for (auto i = 0; i < length; ++i) {
	//	cin >> *(p + i);
	//}

	//for (auto i = 0; i < length; ++i) {
	//	total = total + p[i];
	//}

	//average = total / (double)length;

	//cout << total << endl;
	//cout << average << endl;


	//delete[] p; // ���� �޸� ����(����� �޸� ����)

	return 0;
}