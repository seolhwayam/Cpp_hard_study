#include<iostream>
using namespace std;

int main() {
	/*auto
	  : �ڷ�Ÿ���� ���� �ڸ��� autoŰ���� �ۼ��� �ش� autoŰ������ ���� ������ �ڿ��� ������ �Ǵ� �ʱ�ȭ�Ǵ� ���鿡 ���ؼ�
	    �߷��� �ؼ� Ÿ���� ����

		auto �迭(x) ���������� �迭�� autoó�� �Ұ���
		*/

	auto f = 3.24f;
	auto s = "test";
	// 1) auto�� ���� ���� �߷��Ͽ� �ش� Ÿ������ ����

	const auto a = 3.1f;
	// 2) auto Ű���嵵 const����

	cout << f << endl;
	cout << s << endl;

	cout << sizeof(f) << "\t" << typeid(f).name() << endl;
	cout << sizeof(s) << "\t" << typeid(s).name() << endl;


	return 0;
}