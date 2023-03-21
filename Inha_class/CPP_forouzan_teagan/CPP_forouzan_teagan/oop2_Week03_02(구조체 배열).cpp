//#include<iostream>
//using namespace std;
//struct student {
//	int id; // 4바이트
//	char name[20]; // 20바이트(char 1 , 20)
//	float grade[2]; //8바이트
//
//};
//
//int main() {
//	// ★ 구조체 배열
//	/*구조체 기능
//	  : 공통된 부분들을 하나의 그룹으로 묶어서 자료를 관리
//
//	  배열 : 타입이 동일 해야한다.
//	  */
//	
//	student sinfos[4] = {
//		{202001,"lee",{4.3f,4.1f}},
//		{202010,"choi",{3.3f,3.1f}},
//		{202107,"park",{3.5f,4.1f}},
//		{202101,"kim",{4.2f,3.7f}}
//	};
//
//	for (auto i = 0; i < 4; i++) {
//		cout << sinfos[i].id << endl;
//		cout << sinfos[i].name << endl;
//		cout << sinfos[i].grade[0]<< endl;
//		cout << sinfos[i].grade[1] << endl;
//
//	}
//
//		return 0;
//	}
//
//
//	