/**************************************************************
 * strcpy�� strncpy �Լ��� ����ؼ�                           *
 * ���ڿ� ��ü �Ǵ� ���ڿ� �Ϻθ�                             *
 * �ٸ� ���ڿ��� �����ϴ� ���α׷�                            *
 **************************************************************/

#include <cstring> //c���� ����ϴ� �Լ��� c�� �ٴ´�.
#include<string> // c++��Ÿ��
#include <iostream>
using namespace std;

int myLen(const char* a) {
	int count = 0;
	for (int i = 0; a[i] != NULL; i++) {
		count++;
	}
	return count;


};

int main()
{
	//// str2 ��ü�� str1���� ���� �Ŀ� str1�� ������ ����
	//char str1[] = "This is the first string.";
	//char str2[] = "This is the second string.";

	//// �迭 ���� ����!!!! �ٸ��� �Ҵ� �ȵǰԲ�!

	//strcpy(str1, str2);
	//cout << "str1: " << str1 << endl;
	//// str4�� �Ϻθ� str3�� ���� �Ŀ� str3�� ���� �Ϻ� ����
	//char str3[] = "abcdefghijk.";
	//const char* str4 = "ABCDEFGHIJK";
	//strncpy(str3, str4, 4); // 4���� ���� str3�� str4�� ����
	//cout << "str3: " << str3 << endl;


	//string a = "ABC"; //���������� �����Ҵ�
	//string b = "DEF";
	//a = b;
	//cout << a << endl;

	char a[] = "inha";

	cout << myLen(a);

	return 0;
}