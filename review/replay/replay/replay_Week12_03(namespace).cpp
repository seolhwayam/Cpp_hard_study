//#include<iostream>
//using namespace std;
//namespace python {
//	struct info
//	{
//		string prof;
//		int id;
//		float grade;
//	};
//	
//	void talk() {
//		cout << "����� ���̽�" << endl;
//	};
//}
//namespace java {
//	float grade;
//}
//namespace cplusplus {
//	class info {
//	public:
//		string prof;
//		int id;
//	};
//	float grade;
//	void talk();
//}
//
//// �ߺ�namespace
//namespace data {
//	namespace user {
//		int number;
//	}
//}
//
//
//
//float grade = 0.0f; //����Ʈ namespace
//
///*
//namespace 
//: �������� ����(�ҽ����ϰ� �ڵ带 ���������� ����)
//* Ŭ����, ����, �Լ� �� �� �� �ִ�.
//* ���������� ����Ʈ namespace 
//  => ���� :  :: �����̸�
//* �̸� ���� namespace�� ������ �ٸ� �ܺο��� ���� �Ҽ�����(extern����ص� �ȵ�)
//
//*[����]
//1. main ���� ������ ����
//�� using  namespace�̸�::�Լ� ��;
//   void main() {}
//
//ex)
//using  python::talk;
//void main() {}
//
//�� using namespace namespace�̸�
//   void main() {}
//
//ex)
//using  namespace  python
//void main() {}
//
//2. ���ÿ� ������ ����
//namespace�̸�::�Լ�,���� ��
//
//ex) cplusplus::grade = 4.5f;
//=========================================
//3. �ߺ� namespace
//- ����
//namespace a {
//	namespace b {
//		int c;
//	}
//}
//-���
//a::b::c
//
//4. namespace ���� �����ֱ�
//namespace ���� = �� �̸�
//*/
//
////using cplusplus::talk; //��� ��������
////using  python::talk;
//using namespace cplusplus;
//void main() {
//	//float grade;
//	//cplusplus::grade = 4.5f; // cplusplus grade
//	//::grade = 4.0f; //�������� grade
//
//	//cout << ::grade << endl;
//
//	info p1;
//	p1.prof = "������";
//	p1.id = 2020;
//
//	talk();
//	cplusplus::grade = 3.96f;
//
//	//�ߺ� namespace ����ϱ�
//	int user_no = data::user::number;
//
//	
//}
//
////cplusplus�� talk�Լ� ����
//namespace cplusplus {
//	void talk() {
//		cout << "�����" << endl;
//	}
//}