#include<iostream>
using namespace std;

union JobUnion {
	char name[32]; //32바이트
	long salary; //4바이트
	int workerId; //4바이트
}uJob;//공용체 변수 선언

struct JobStruct{
	char name[32]; //32바이트
	long salary; //4바이트
	int workerId; //4바이트
}sJob;

int main() {

	cout << sizeof(uJob) << endl; //공용체(Union):  제일 사이즈가 큰 맴버변수로 사이즈 할당
	cout << sizeof(sJob) << endl; //구조체(Struct): 필요한 사이즈(32+4+4=40)보다는 크게 할당

	uJob.salary = 11;
	uJob.workerId = 1234;

	sJob.salary = 21;
	sJob.workerId = 44434;

	cout << uJob.salary << endl; //float 
	cout << uJob.workerId << endl;

	cout << sJob.salary << endl;
	cout << sJob.workerId << endl;


	return 0;

}
/*공용체(Union) 특징 : ① 가장 맴버변수의 크기로 메모리 할당
					   ② 공유

  구조체(Struct) 특징 : 선언한 사이즈 만큼 할당*/