#pragma warning(disable:4996)
#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char cstyle[] = "Hi~";
	string cppstyle;

	cppstyle = cstyle; 
	// �޸𸮻��� �ּҰ� ����Ǵ� �ű⶧���� ������ �޸� �ּҸ� ������ �� -> ������ ���� X
	cppstyle[0] = 'A';

	cout << cstyle << endl;
	cout << cppstyle << endl;



	return 0;
}