#include<iostream>
#include<cstring>
#pragma warning(disable:4996)
using namespace std;

int main() {
	//// C Style -> cppStyle ����
	//char cstyle[] = "Hi~";
	//string cppstyle;
	//
	//cppstyle = cstyle; //������ ĳ����(�޸𸮻� ���簡 �Ͼ �� => ������ �޸� ����)
	//cppstyle[0] = 'A';

	//cout << cstyle << endl;
	//cout << cppstyle << endl;


	// cppStyle ->  C Style ����
	//string cppstyle = "Hello!";
	//const char* cstyle = NULL;

	//cstyle = cppstyle.c_str(); 
	////c_str : cppstyle�� �б��������θ� ���(�б�����) 
	////������ ĳ����(�޸𸮻� ���簡 �Ͼ �� => ������ �޸� ����)

	//cout << cstyle << endl;
	//cout << cppstyle << endl;

	//���纻 �����
	string cppstyle = "Hello!";
	char* cstyle = new char[cppstyle.size() + 1];

	strcpy(cstyle, cppstyle.c_str());

	cstyle[0] = 'Y';

	cout << cstyle << endl;
	cout << cppstyle << endl;




	return 0;
}