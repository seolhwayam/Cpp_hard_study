#include<iostream>
using namespace std;


int main() {
	/*2���� �迭 (505�� ������)
	  �� for���ȿ� for�� (�Ϲ���)
	  �� ������ �迭 (stack -> heep (���))
	  �� stack���� ->>>>>> ���δ� heep
	     arr ��������

		 //������ ���ؾߵ�!!!!! (delete �߿�)
		 1) heep�����
		 2) stack �����


		 for(int i =0 ; i<n+1; i++){
		 delete[] pascal[i]
		 }

		 delete[] pascal;
		 pascal = nulptr;

		 �� -->>>>
		 �� �������

	  */

	int total = 0;
	int student; //�� , ��
	int subject;
	cout << "������ �� �Է� : " << endl;
	cin >> student;

	cout << "�������� �� �Է� : " << endl;
	cin >> subject;

	int** Scores = new int* [student];

	for (auto i = 0; i < student; i++) {
		*(Scores + i) = new int[subject];
	    // Scores[i] ����
	}

	/*
	�л� ��(��), �������� ��(��)�� �Է¹޾� �� �л��� ������
	����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�
	*/

	for (int i = 0; i < student; i++) {
		cout << i + 1 << "�� �л�" << endl;
		for (int k = 0; k < subject; k++) {
			cout << k + 1 << "�� ������ ����" << endl;
			cin >> Scores[i][k];
		}
	}

	
	/*for (int i = 0; i < student; i++) {
		cout << i + 1 << "�� �л�" << endl;
		for (auto j = 0; j < subject; j++) {
			cout << j + 1 << "���� ���� �Է�:" << endl;
			cin >> Scores[i][j];
		}
	}

	for (int i = 0; i < student; i++) {
		total = 0;
		for (auto j = 0; j < subject; j++) {
			total = total + Scores[i][j];
		}

		cout << i + 1 << "�� �л��� ���� :  " << total << endl;
		cout << i + 1 << "�� �л��� ��� :  " << total/(double)subject << endl;
	}*/


	
	for (auto i = 0; i < student; i++) {
		delete[] *(Scores + i);
		// delete scores[i];
	}

	delete[] Scores;
	Scores = nullptr;
	
	// �����Ѱ� �� ������ ���� ����!! (�ȵȴ�!) double free bug
	// ��������!!!����!!!

	return 0;
}