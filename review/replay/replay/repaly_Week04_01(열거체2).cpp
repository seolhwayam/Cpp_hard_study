#include<iostream>
using namespace std;

enum Color { RED, GREEN, BLUE, YELLOW};

int main() {

	Color c1 = RED;
	Color c2;
	int n = BLUE; //2
	int o = GREEN + BLUE;

	Color c3 = (Color)2;
	cout << c3 << endl;


	/*
	����ü
	��. ������� �Ұ�
	c1 = GREEN + BLUE; [����]
	c1 = c1 +2 ; [����]

	int o = GREEN + BLUE; [����] //3

	
	�� ���� ����ü ���� ���� �Ұ�
	c2 = 3; [����]

	int n = BLUE; [����] //2

	*�޴� �� : ����ü ���� => ����
	*�޴� �� : int Ÿ�� ���� = > ����
	=> ������ ĳ����
	 : ����ü �ɺ����� ������ ĳ�������� ���Ͽ� intŸ������ ĳ����
	*/



	return 0;
}