#include<iostream>
using namespace std;
/*
enum{job_necromancer, job_babarian, job_wizard}; => �̸� ���� ����ü
          0               1            2
* enum(�ɺ�)
�� ��������
�� ��ġ�� �ǹ�
�� �̸� ���� ����/ �̸� �ִ� ���� ����
    enum{     }      enum ����ü �̸� {       }
�� ����ü ��ü�� Ÿ������ ���� �� ����
*/

/*
�� �⺻
enum{job_necromancer, job_babarian, job_wizard};
            0                1            2

�� �ε��� ���� ����
enum{job_necromancer, job_babarian=2, job_wizard};
            0                2             3
=> 1�� �ε��� x

*/
enum job_kinds { job_necromancer, job_babarian, job_wizard }; // �̸��ִ� ����ü

struct character {
	job_kinds jobtype; //0 : ���ɼ���, 1: �߸� ���, 2: ������
	// ����ü Ÿ��
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