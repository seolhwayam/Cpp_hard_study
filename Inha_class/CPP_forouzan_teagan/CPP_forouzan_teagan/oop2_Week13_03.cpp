#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>

using namespace std;

void main() {

	vector<char> vec;
		vec.push_back('e');
		vec.push_back('b');
		vec.push_back('a');
		vec.push_back('d');
		vec.push_back('c');
		
		//�� #include<functional>
		sort(vec.begin(), vec.end(),greater<char>()); //��������
		
		for (auto v : vec)
			cout << v <<endl;

		//�� ���� ǥ����(�Լ� Ȯ��)
		sort(vec.begin(), vec.end(), [](int i, int j) {return i > j; }); //��������

		for (auto v : vec)
			cout << v << endl;


	




}