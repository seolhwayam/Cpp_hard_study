#include<iostream>
using namespace std;
struct Student {
	/*구조체 기능
	공통된 부분들을 하나의 그룹으로 묶어서 자료를 관리	*/
	// 배열 : 타입이 동일 해야한다.

	int id; // 4바이트
	char name[20]; // 20바이트(char 1 , 20)
	float grade[2]; //8바이트

};

int main() {
	// ★ 구조체 배열
	Student sInfos[4] = {
		{202001,"Lee",{4.3f,4.1f}},
		{202010,"Choi",{3.3f,3.1f}},
		{202107,"Park",{3.5f,4.1f}},
		{202101,"Kim",{4.2f,3.7f}}
	};

	for (auto i = 0; i < 4; i++) {
		cout << sInfos[i].id << endl;
		cout << sInfos[i].name << endl;
		cout << sInfos[i].grade[0]<< endl;
		cout << sInfos[i].grade[1] << endl;

	}

		return 0;
	}


	