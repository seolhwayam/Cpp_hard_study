#include<iostream>
using namespace std;

enum{job_necromancer, job_babarian, job_wizard};
/*
* 
* enum
① 가독성↑
② 수치의 의미
*/

struct character {
	int jobtype; //0 : 강령술사, 1: 야만 용사, 2: 마법사
};

int main() {
	character c;
	c.jobtype = job_wizard;
	if (c.jobtype == job_wizard) {
		cout << "비전격류!" << endl;
	}
	c.jobtype = job_wizard;
	if (c.jobtype == 2) {
		cout << "비전격류!" << endl;
	}


	return 0;
}