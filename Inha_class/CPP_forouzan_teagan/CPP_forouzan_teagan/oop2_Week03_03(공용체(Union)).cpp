//#include<iostream>
//using namespace std;
//
//union JobUnion {
//	char name[32]; //32����Ʈ
//	long salary; //4����Ʈ
//	int workerId; //4����Ʈ
//}uJob;//����ü ���� ����
//
//struct JobStruct{
//	char name[32]; //32����Ʈ
//	long salary; //4����Ʈ
//	int workerId; //4����Ʈ
//}sJob;
//
//int main() {
//
//	cout << sizeof(uJob) << endl; //����ü(Union):  ���� ����� ū �ɹ������� ������ �Ҵ�
//	cout << sizeof(sJob) << endl; //����ü(Struct): �ʿ��� ������(32+4+4=40)���ٴ� ũ�� �Ҵ�
//
//	uJob.salary = 11;
//	uJob.workerId = 1234;
//
//	sJob.salary = 21;
//	sJob.workerId = 44434;
//
//	cout << uJob.salary << endl; //������ 11��� | ���� : 1234
//	cout << uJob.workerId << endl;
//	//������ 11�� ��� > ���� �����̱� ������ 11�������� uJob.workerId(1234)������ ��������Ʈ
//
//	cout << sJob.salary << endl;
//	cout << sJob.workerId << endl;
//	// ����ü�� ������ �޸� ���� ����
//
//
//	//����ü ���� ���� ���� 
//
//
//	return 0;
//
//}
///*����ü(Union) Ư¡ : �� ���� �ɹ������� ũ��� �޸� �Ҵ�
//					   �� ������ ����(��Ұ���)
//
//  ����ü(Struct) Ư¡ : ������ ������ ��ŭ �Ҵ�*/