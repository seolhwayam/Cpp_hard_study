#include<iostream>
using namespace std;

int main() {
	/* hipŸ�� during run time�� ����� ����.
	  �޸𸮴� �ֹ߼� Ÿ��

	  hip�� �����ѰŴ� �� ���� ����ߴ�
	  ���� Ư¡
	  1. ���� ��ü �̸� ���� -> �ݵ�� �����Ͱ� �־�� �Ѵ�.
	  2. ���� �����ʹ� ���ο� ���ӵ��� �ʴ´�.

	  */

	int total = 0;
	int humans = 0;
	//int* prhumans = nullptr;//nullptr �ƹ��뵵 �Ȱ���Ų��.(����ų �ּҰ� ���ٴ� Ű����) |  null ,0�̶� ���~ 


	cout << "�� �� �̼���? ";
	cin >> humans; 

	int* ptrhumans = new int[humans]; //���� �޸� �Ҵ� 4*humans ����Ʈ �Ҵ�

	for (int i = 0; i < humans; i++) {
		cout << "���̰� ��� �Ǽ���? " << endl;
		cin >> ptrhumans[i]; // == cin >> *(ptrhumans+i);   ()�߿� 
	}

	cout << "���� Ȯ���մϴ�" << endl;

	for (int k = 0; k < humans; k++){
		int age = 0;
		
		age = ptrhumans[k];
		cout << ptrhumans[k] << " ";

		if (age < 8) {
			total = total + 5000;
		}
		else if (age < 20) {
			total = total + 10000;
		}
		else if (age >= 20) {
			total = total + 20000;
		}
		else {
			cout << "�������� ���̰� �ƴմϴ�." << endl;
			break;
		}
	}

	cout << "\n �� ������ " << total << "���Դϴ�" << endl;




	delete[] ptrhumans;  //���� �Ҵ� ����
	ptrhumans = nullptr; //�� �޸𸮸� ����Ű�� �ִ� �����͸� �����. 

	//������ �ϸ� �����
	//���� �Ⱦ�����


	return 0;
}