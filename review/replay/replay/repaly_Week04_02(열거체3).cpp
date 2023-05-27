#include<iostream>
using namespace std;

enum class Jave {PASS, FAIL};
enum class Python { PASS, FAIL };

enum  Cplusplus { PASS, FAIL };


/*
	����ü PASS, FAIL �ߺ����� ����

	�ذ��
	�� namespace [Old Style
	  : ������ �������� ������ ���� ���� �ش� �������� �������� ���ϵ��� �ϴ� ���
	  - ����
	  namespace �̸�{
	  enum ����ü �̸� {     ,         }
	  }

	  - ����

	  namespace sophomore {
		enum Java { PASS, FAIL };
	  }

      namespace freshman {
	    enum Python { PASS, FAIL };
      }

	�� enum Class [Mordern Style]
	- ����
	enum class ����ü �̸�

	- ����
	enum class Jave {PASS, FAIL};
	enum class Python { PASS, FAIL };


	*/


int main() {
	Cplusplus c = Cplusplus::PASS;

	switch (c)
	{
	case 0:
		cout << "�հ� " << endl;
		break;
	case Cplusplus::FAIL:
		cout << "�����!" << endl;
		break;
	default:
		break;
	}

	// enum ��ü�� ���������� ���������� �����Ǵ� ���� ����
	// int -> c++ Ÿ������ ���� �Ұ���

	return 0;
}