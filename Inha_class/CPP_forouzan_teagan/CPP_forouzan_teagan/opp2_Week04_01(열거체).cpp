#include<iostream>
using namespace std;
enum{JOB_NECROMANCER, JOB_BARBARIAN=2, JOB_WIZARD }; 
//           0              2             3
//=2 �������� ���Ͽ� 1�� pass


//enum{JOB_NECROMANCER, JOB_BARBARIAN, JOB_WIZARD }; 
//           0              1             2
/*����ü ���� 
  : �� enum{         }
    �� ��ġ�� �ǹ̵� ������*/

struct Character
{
	int jobType; //0 : ���ļ��� , 1: �߸���� , 2:������

};

int main() {
	Character c;//����ü Ÿ���� ����
	c.jobType = JOB_WIZARD;
	if (c.jobType == 3) {
		cout << "�����ݷ�!" << endl;
	}

	return 0;
}