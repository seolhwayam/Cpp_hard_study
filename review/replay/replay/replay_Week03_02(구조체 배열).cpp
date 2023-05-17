//#include<iostream>
//using namespace std;
//struct Student{
//	int id; //4바이트
//	char name[20]; //2바이트
//	float grade[2]; // 8바이트
//	/*
//	구조체 : 공통된 부분들을 하나의 그룹으로 묶어서 자료를 관리
//	배열 : 타입이 같아야 함
//	*/
//	
//};
//int main() {
//	//구조체 배열 사용하기
//	Student sInfos[4] = {
//		{202001,"Lee",{4.3f, 4.1f}},
//		{202010,"Choi",{3.3f, 3.1f}},
//		{202007,"Park",{3.5f, 4.1f}},
//		{202101,"Kim",{4.2f, 3.1f}}
//	}; // 설계도
//
//	for (auto i = 0; i < 4; i++) {
//		cout << sInfos[i].id << endl;
//		cout << sInfos[i].name << endl;
//		cout << sInfos[i].grade[0] << endl;
//		cout << sInfos[i].grade[1] << endl;
//	}
//
//
//	return 0;
//}