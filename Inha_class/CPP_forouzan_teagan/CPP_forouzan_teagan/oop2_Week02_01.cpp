#include<iostream>
using namespace std;

int main() {
	int k = 5;
	k = 7;
	cout << k << endl;


	//�ڷ���/����ǥ�����(2�� ������)/�ڷ���size
	const int i = 5; //32bit
	cout << i << endl;
	unsigned short s = 65535; //16bit
	//signed (-2��15�� ~ +2��15��-1)
	//unsigned (0 ~ 2��16��-1)
	cout << s << endl;

	//�迭
	//int arr[4] = { 0 };
	//�� �迭 0,1,2,3 0���� �ʱ�ȭ | {�ʱ�ȭ ��}
	//arr[0] = -9;
	//arr[3] = 30000;

	int arr[4] = { -9,0,0,30000 };
	//�� ����ÿ� �ʱ�ȭ


	int* parr = &arr[0];
	//������ = ��� �ּ�(*)
	//parr=������ �̸� | &arr[0] = 0������ ������
	//Ÿ��* �������̸� = &�迭�̸�[];
	//�� �迭���� ������ �����



	for (int i = 0; i < 4; i++) {
		//cout <<*(parr+i)<<endl; ��������| �ּҷ� �� ���
		//cout << parr[i] <<endl; ��������| ������ �迭ó�� Ȱ��
		//cout << arr[i] <<endl;  ��迭|�迭 ���
		cout << *(arr + i) << endl;
	}

	//for (int i = 0; i < 4; i++) {
	//	cout << parr+i << endl;
	//}//�ڸ��ּҴ� �״������ 4����Ʈ�� ����(parr+i)
	   //�ּ� ����ϱ�



	cout << arr[2] << endl;

	return 0;

}