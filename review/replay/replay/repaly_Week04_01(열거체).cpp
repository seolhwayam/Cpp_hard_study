#include<iostream>
using namespace std;

enum{job_necromancer, job_babarian, job_wizard};
/*
* 
* enum
�� ��������
�� ��ġ�� �ǹ�
*/

struct character {
	int jobtype; //0 : ���ɼ���, 1: �߸� ���, 2: ������
};

int main() {
	character c;
	c.jobtype = job_wizard;
	if (c.jobtype == job_wizard) {
		cout << "�����ݷ�!" << endl;
	}
	c.jobtype = job_wizard;
	if (c.jobtype == 2) {
		cout << "�����ݷ�!" << endl;
	}


	return 0;
}