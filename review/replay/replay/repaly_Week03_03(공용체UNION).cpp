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
//	char name[32]; //32����Ʈ (1����Ʈ*32)
//	float salary; // 4����Ʈ
//	int workerId; //4����Ʈ
//
//	// �� 40����Ʈ
//}sJob;
//int main() {
//
//	uJob.salary = 1.1;
//	uJob.workerId = 1234;
//
//	sJob.salary = 2.1;
//	sJob.workerId = 44434;
//
//	cout << uJob.salary << endl; //1.1�� �ٸ� �� ���(1.7292e-42) 
//	cout << uJob.workerId << endl; // ���� �޸� ���� Ȱ�� -> salary�� workerid���� ��������
//
//	cout << sJob.salary << endl; // 2.1 ��� 
//	cout << sJob.workerId << endl;// �ٸ� �޸� ���� Ȱ��
//
//
//	cout << sizeof(uJob) << endl; //32
//	cout << sizeof(sJob) << endl; //40
//
//	/*
//	Union : ���� ū �ɹ� ������ ũ��� �޸� �Ҵ�
//	����ü : ������ �ִ� �ɹ� ������ ũ���� �հ� ���ų� ũ�� �޸� �Ҵ�
//	*/
//
//
//
//	return 0;
//}