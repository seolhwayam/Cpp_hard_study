//#include<iostream>
//using namespace std;
//
//union JobUnion
//{
//	char name[32];
//	float salary;
//	int workerId;
//
//
//}uJob;
//
//struct JobStruct
//{
//	char name[32]; //32바이트 (1바이트*32)
//	float salary; // 4바이트
//	int workerId; //4바이트
//
//	// 총 40바이트
//}sJob;
//int main() {
//
//	uJob.salary = 1.1;
//	uJob.workerId = 1234;
//
//	sJob.salary = 2.1;
//	sJob.workerId = 44434;
//
//	cout << uJob.salary << endl; //1.1과 다른 값 출력(1.7292e-42) 
//	cout << uJob.workerId << endl; // 같은 메모리 공간 활용 -> salary에 workerid값이 덧씌워짐
//
//	cout << sJob.salary << endl; // 2.1 출력 
//	cout << sJob.workerId << endl;// 다른 메모리 공간 활용
//
//
//	cout << sizeof(uJob) << endl; //32
//	cout << sizeof(sJob) << endl; //40
//
//	/*
//	Union : 가장 큰 맴버 변수의 크기로 메모리 할당
//	구조체 : 가지고 있는 맴버 변수의 크기의 합과 같거나 크게 메모리 할당
//	*/
//
//
//
//	return 0;
//}