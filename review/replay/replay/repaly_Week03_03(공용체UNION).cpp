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
//	char name[32]; //32����Ʈ (1����Ʈ*32)
//	float salary; // 4����Ʈ
//	int workerid; //4����Ʈ
//
//	// �� 40����Ʈ
//}sjob;
//int main() {
//
//	ujob.salary = 1.1;
//	ujob.workerid = 1234;
//
//	sjob.salary = 2.1;
//	sjob.workerid = 44434;
//
//	cout << ujob.salary << endl; //1.1�� �ٸ� �� ���(1.7292e-42) 
//	cout << ujob.workerid << endl; // ���� �޸� ���� Ȱ�� -> salary�� workerid���� ��������
//
//	cout << sjob.salary << endl; // 2.1 ��� 
//	cout << sjob.workerid << endl;// �ٸ� �޸� ���� Ȱ��
//
//
//	cout << sizeof(ujob) << endl; //32
//	cout << sizeof(sjob) << endl; //40
//
//	/*
//	union : ���� ū �ɹ� ������ ũ��� �޸� �Ҵ�
//	����ü : ������ �ִ� �ɹ� ������ ũ���� �հ� ���ų� ũ�� �޸� �Ҵ�
//	*/
//
//
//
//	return 0;
//}