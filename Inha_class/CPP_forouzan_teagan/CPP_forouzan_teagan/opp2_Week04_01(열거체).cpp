#include<iostream>
using namespace std;
enum{JOB_NECROMANCER, JOB_BARBARIAN=2, JOB_WIZARD }; 
//           0              2             3
//=2 지정으로 인하여 1번 pass


//enum{JOB_NECROMANCER, JOB_BARBARIAN, JOB_WIZARD }; 
//           0              1             2
/*열거체 생성 
  : ① enum{         }
    ② 수치의 의미도 가진다*/

struct Character
{
	int jobType; //0 : 강렬술사 , 1: 야만용사 , 2:마법사

};

int main() {
	Character c;//구조체 타입의 변수
	c.jobType = JOB_WIZARD;
	if (c.jobType == 3) {
		cout << "비전격류!" << endl;
	}

	return 0;
}