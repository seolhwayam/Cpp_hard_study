//#include<iostream>
//using namespace std;
//
//union jobunion
//{
//	char name[32];
//	float salary;
//	int workerid;
//
//
//}ujob;
//
//struct jobstruct
//{
//	char name[32]; //32바이트 (1바이트*32)
//	float salary; // 4바이트
//	int workerid; //4바이트
//
//	// 총 40바이트
//}sjob;
//int main() {
//
//	ujob.salary = 1.1;
//	ujob.workerid = 1234;
//
//	sjob.salary = 2.1;
//	sjob.workerid = 44434;
//
//	cout << ujob.salary << endl; //1.1과 다른 값 출력(1.7292e-42) 
//	cout << ujob.workerid << endl; // 같은 메모리 공간 활용 -> salary에 workerid값이 덧씌워짐
//
//	cout << sjob.salary << endl; // 2.1 출력 
//	cout << sjob.workerid << endl;// 다른 메모리 공간 활용
//
//
//	cout << sizeof(ujob) << endl; //32
//	cout << sizeof(sjob) << endl; //40
//
//	/*
//	union : 가장 큰 맴버 변수의 크기로 메모리 할당
//	구조체 : 가지고 있는 맴버 변수의 크기의 합과 같거나 크게 메모리 할당
//	*/
//
//
//
//	return 0;
//}