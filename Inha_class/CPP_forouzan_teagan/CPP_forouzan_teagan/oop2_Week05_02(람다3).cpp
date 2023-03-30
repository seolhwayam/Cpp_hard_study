#include<iostream>
#include<functional> //3. #include<functional> �߰�
using namespace std;


int main() {

	//�� �ŵ�����
	// [ĸ�ĺ�] (�Ű����� ����Ʈ) -> ����Ÿ��{�Լ� �ٵ� (�͸��Լ�)};
	auto power = [](int b, int e)->int {
		int r = 1;
		for (auto i = 1; i <= e; i++)
			r = r * b;
		return r;
	};

	cout << power(2, 8) << endl;
	cout << power(4, 2) << endl;

	//�� ���丮��(����Լ�)
	function<int(int)> fact = [&fact](int n) ->int { //2 . [&fact] -> auto���� ���� (�߷� �Ұ�) -> auto >> function<int(int)>  fact -> function �νĺҰ�
		if (n <= 1)
			return 1;
		else
			return n * fact(n - 1); // 1. auto �� �������� fact��� �Լ� ���� ���� -> &fact
	};
	
	cout << fact(6) << endl;

	// �� ���丮��(���׿�����)
	function<int(int)> fact1 = [&fact1](int n) ->int { 
		return n <= 1 ? 1 : n * fact1(n - 1);
	};

	cout << fact1(6) << endl;

	return 0;




}