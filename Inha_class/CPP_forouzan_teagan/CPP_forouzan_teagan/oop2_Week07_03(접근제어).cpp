//#include <iostream>
//using namespace std;
//
//class AccessControl {
//public:
//	char publicDate;
//	void publicFunc() {};
//
///*public: ��� �ܺ��� ���� ���*/
//
//protected:
//	int protectedDate;
//	void protectedFunc() {};
//private:
//	float privateDate;
//	void privateFunc() {};
//
///*protected,private -> ��ȣ
//  public -> ������� -> protected,private ���� �����ϵ���*/
//
//public:
//	void AccesssAllMembers();
//	// AccessControl�ȿ� AccesssAllMembers �־ �����Ӱ� �������� ���ٰ���
//
///*���������� �̼���� �⺻������ private ����*/
//
//};
//void  AccessControl::AccesssAllMembers() {
//	publicDate = 'A';
//	publicFunc();
//
//	protectedDate = 100;
//	protectedFunc();
//
//	privateDate = 4.5f;
//	privateFunc();
//
//}
//
//int main() {
//	AccessControl ac;
//	ac.AccesssAllMembers();
//
//	//ac.publicDate = 'A';     //����
//	//ac.publicFunc();         //����
//	//
//	//ac.protectedDate = 100;  //����
//	//ac.protectedFunc();      //����
//
//	//ac.privateDate = 4.5f;   //����
//	//ac.privateFunc();        //����
//}