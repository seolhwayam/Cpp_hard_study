#pragma warning(disable:4996)
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
	char cstyle[10];
	string cppstyle;

	//cin >> cstyle;
	//cin >> cppstyle;
	/*
	cin >> Inha Univ 
	�����̽��ٰ� �����ڰ� �Ǿ �� ���� �Է�����
	cin >> cstyle;
	cin >> cppstyle;
	�Էµ�
	�Է½ÿ� ��ĭ(�����̽� Ű)�� ������ ����
	*/
	cin.getline(cstyle, 3);
	cin.clear();
	getline(cin, cppstyle);


	cout << cstyle <<endl;
	cout << cppstyle;



	return 0;
}