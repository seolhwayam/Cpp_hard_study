#include<iostream>
using namespace std;

int main() {
	/*���� �޸� �Ҵ�
	 :  �޸𸮸� �ٷ�� ��� �� �ϳ�
		�޸𸮸� �������� �Ҵ��Ѵ�.
		
		�޸𸮸� ������ ��
		500����Ʈ ¥�� ���� ���� �� �� �� ������?
		�� �˾ƺ���~~~ >> �޸� �Ҵ�(�޸𸮸� ��û�ϴ� Ȱ��)

		�Ϲ� �޸� �Ҵ� >> ���� ����

		static(����) <-> ����
		�޸𸮿� ũ�Ⱑ ������ ������ ���� x
		���α׷��� ���ư��� �߰����� �������� �Ҵ�



	    */

	int* p; //������ ����
	int length,total=0;
	double average;
	cin >> length;
	p = new int[length]; // �����޸� �Ҵ�

	for (auto i = 0; i < length; ++i) {
		cin >> *(p + i);
	}

	for (auto i = 0; i < length; ++i) {
		total = total + p[i];
	}

	average = total / (double)length;
	cout << total << endl;
	cout << 1 << endl;










	return 0;
}