#include<iostream>
using namespace std;

enum{JOB_NECROMANCER, JOB_BABARIAN, JOB_WIZARD};

struct Character {
	int jobType; //0 : ���ɼ���, 1: �߸� ���, 2: ������
};

int main() {
	Character c;
	c.jobType = JOB_BABARIAN;
	if (c.jobType == JOB_BABARIAN) {
		cout << "�����ݷ�!" << endl;
	}


	return 0;
}