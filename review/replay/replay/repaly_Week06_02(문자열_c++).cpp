#include<iostream>
#pragma warning(disable:4996)
#include<cstring>
using namespace std;

/*
c++ 문자열
1. string 자료타입


*/

int main() {
	string src = "Inha Univ";
	string dest; //복사용

	dest = src; // src 복사하기

	cout << src.size() << endl;
	
	cout << src << endl;
	cout << dest << endl;


	return 0;
}