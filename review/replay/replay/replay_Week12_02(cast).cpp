#include<iostream>
using namespace std;
/*
const_cast : const, volatile ���� �Ӽ��� ����
[����]
const_cast<Ÿ��>(����Ӽ� ������ ����)

volatile : �����ǹ̷δ� �ֹ߼�
           ��ǻ�Ͱ� ������ ����� ����� �۾��� ��
		   �� �۾����� ����

*/

void main() {

	char univ[] = "Inga";
	const char* c1 = univ;
	char* c2;
	c2 = const_cast<char*>(c1);
	c2[0] = 'i';
	cout << c2 << endl;
	
}