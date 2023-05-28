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
	스페이스바가 구분자가 되어서 한 번의 입력으로
	cin >> cstyle;
	cin >> cppstyle;
	입력됨
	입력시에 빈칸(스페이스 키)는 구분자 역할
	*/
	cin.getline(cstyle, 3);
	cin.clear();
	getline(cin, cppstyle);


	cout << cstyle <<endl;
	cout << cppstyle;



	return 0;
}