//#include<iostream>
//using namespace std;
//// Old Style(namespace �����ذ� ��)
////namespace sophomore{
////	enum Java { PASS, FAIL };
////}
////
////namespace freshman {
////	enum Python { PASS, FAIL };
////}
//
//// Modern Style (enum Class c++11 �����ذ� ��)
//enum class Jave { PASS, FAIL };
//enum class Python{PASS, FAIL};
//enum Cplusplus { PASS, FAIL };
//
//
///*�����ذ� �� namespace�� ���������� �ٸ� ���� �Ҵ�(����ó��)
//		   �� enum class
//		   
//{���� �̸��� ���� �������� ����}*/
//
//int main() {
//	Cplusplus c = Cplusplus::PASS;
//
//	switch (c)
//	{
//	case 0:
//		cout << "�հ�";
//		break;
//	case Cplusplus::FAIL:
//		cout << "�����!";
//		break;
//		}
//	/*enum class ���� �ε��� ������ ��� �Ұ��� 
//	  enum�� ���� ������ ĳ���õ�(int) �����̱⿡ �ε��� �� ��� ����
//	  enum class�� ���� �����̱⿡ �ε��� �� ��� �Ұ���*/
//
//	return 0; 
//}