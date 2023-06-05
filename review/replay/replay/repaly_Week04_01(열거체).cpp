#include<iostream>
using namespace std;
/*
enum{job_necromancer, job_babarian, job_wizard}; => 이름 없는 열거체
          0               1            2
* enum(심볼)
① 가독성↑
② 수치의 의미
③ 이름 없는 버전/ 이름 있는 버전 가능
    enum{     }      enum 열거체 이름 {       }
④ 열거체 자체를 타입으로 만들 수 있음
*/

/*
① 기본
enum{job_necromancer, job_babarian, job_wizard};
            0                1            2

② 인덱스 형태 변경
enum{job_necromancer, job_babarian=2, job_wizard};
            0                2             3
=> 1번 인덱스 x

*/
enum job_kinds { job_necromancer, job_babarian, job_wizard }; // 이름있는 열거체

struct character {
	job_kinds jobtype; //0 : 강령술사, 1: 야만 용사, 2: 마법사
	// 열거체 타입
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