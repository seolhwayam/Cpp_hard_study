#include<iostream>
using namespace std;

enum{JOB_NECROMANCER, JOB_BABARIAN, JOB_WIZARD};

struct Character {
	int jobType; //0 : 강령술사, 1: 야만 용사, 2: 마법사
};

int main() {
	Character c;
	c.jobType = JOB_BABARIAN;
	if (c.jobType == JOB_BABARIAN) {
		cout << "비전격류!" << endl;
	}


	return 0;
}