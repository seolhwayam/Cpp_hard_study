#pragma warning(disable:4996)
#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char cstyle[] = "Hi~";
	string cppstyle;

	cppstyle = cstyle; 
	// 메모리상의 주소가 복사되는 거기때문에 별도의 메모리 주소를 가지게 됨 -> 원본에 영향 X
	cppstyle[0] = 'A';

	cout << cstyle << endl;
	cout << cppstyle << endl;



	return 0;
}