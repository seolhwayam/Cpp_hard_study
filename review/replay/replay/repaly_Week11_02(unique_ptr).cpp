//#include<iostream>
//#include<memory>
//using namespace std;
///*
//* unique_ptr
//* Ư�� �������� �ο��� ������ 
//* unique_ptr�� �������� �ο��� �������̹Ƿ�, �ٸ� �����Ϳ��� ����ų������(������ ����)
//* #include<memory> �ʿ�
//* delete �����޸� �������� ���༭ ����!
//
//
//*/
//
//class Test {
//	int* data;
//public:
//	Test() {
//		cout << "������! " << endl;
//		data = new int[100];
//	}
//	~Test() {
//		cout << "�Ҹ���!" << endl;
//		delete[] data;
//	}
//	void t() { cout << "�׽�Ʈ ��..." << endl; }
//};
//void testing() {
//	/*unique_ptr ���� 
//	unique_ptr<Test> up(new Test()); //c++11 (������ auto_ptr�� ���� ��ü)
//	up->t();
//
//	�� �Լ� ����Ǹ� �Ҹ��� ����
//	*/
//	/* ���� ����(����)
//	Test* t1 = new Test();
//	Test* t2 = t1;
//	t1 �����Ҵ�
//	t2 t1�� �����Ҵ� �ּ�
//
//	delete t1;
//	delete t2;
//	�ι� ���� -> ����
//	*/
//	unique_ptr<Test> up1(new Test());//c++11 (������ auto_ptr�� ���� ��ü)
//	// Test* up1 = new Test();
//	unique_ptr<Test> up2 = up1;  
//	/*����
//	* unique_ptr�� �������� �ο��� �������̹Ƿ�, �ٸ� �����Ϳ��� ����ų������(������ ����)
//	
//	*/
//}
//void main() {
//	testing();
//}