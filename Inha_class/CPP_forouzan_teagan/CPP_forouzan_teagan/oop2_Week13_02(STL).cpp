#include<iostream>
#include<algorithm> // ����, �˻���� ���� �˰����� �����س��� �Լ����� ����
#include<list> // ��ũ�� ����Ʈ(����, ������ ����) -> ������Ʈ ����� �� ����
#include<vector> // ���� �迭(�˻� ���ֿ� ���� -> ������Ʈ ���� ��
using namespace std;

void main() {
	vector<char> vec;
	vec.push_back('e');
	vec.push_back('b');
	vec.push_back('a');
	vec.push_back('d');
	vec.push_back('c');

	for (auto i = vec.begin(); i != vec.end(); i++) {
		cout << *i << endl;
	}

	sort(vec.begin(), vec.end());
	//sort(���ۺκ�, ���κ�)
	for (auto i = vec.begin(); i != vec.end(); i++) {
		cout << *i << endl;
	}

	//vec.end() => �Ǹ��������� ���� ����Ŵ

	char arr[5] = { 'e','b','a','d','c' };
	//               0   1   2   3   4
	sort(arr,arr + 5);
	// ���� 4������ 5�� �Է� 

	for (char* p = arr; p != arr + 5; ++p) {
		cout << *p << endl;
	}


}