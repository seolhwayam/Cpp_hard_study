/**************************************************************
 * strcpy�� strncpy �Լ��� ����ؼ�                           *
 * ���ڿ� ��ü �Ǵ� ���ڿ� �Ϻθ�                             *
 * �ٸ� ���ڿ��� �����ϴ� ���α׷�                            *
 **************************************************************/
#pragma warning(disable:4996);
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

char* mystrcat(char s1[],const char* s2) {
	int startlen = strlen(s1);
	int k = 0;
	int i = startlen;
	for (; s2[k] != NULL; i++) {
		s1[i] = s2[k];
		k++;
	}
	s1[i] = NULL; // c��𿡼��� null c++������ 0



	return s1;
}



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

	char a[20] = "inha";
	char b[] = "world";


	cout << myLen(a) << endl;
	cout << mystrcat(a, b);
}



	/*
	#include <iostream>
using namespace std;

int main(){
    char str1[6] = {'H', 'e', 'l', 'l', 'o', 0};
    cout << str1 << endl;
    //cin >> str1;  // enter , tap , space bar �Է��� ���������� ����
    cin.getline(str1,6); 
	cout << str1 << endl;


	char* cPtr = strchr(str1, 'l');
    cout << cPtr - &str1[0] << endl; /// ��ġ �ľ� ����

	���� : strchr �Լ� �ְ� �ε��� ��ȣ ã�� �ڵ� �־��
	cPtr - &str1[0] �ۼ�

	char
	10-8�� ��ŵ

	strstr -> ���ڿ� 2���� ������ 0/ �ƴϸ� 1
	������ 0/ Ʋ���� 1 (�տ����� ũ�� 1 , �ڿ����� ũ�� -1) -> �Լ� ����� ����

	stringcat -> �Լ� ����� ����

	
    
    return 0;

	���� + ���� + c++string class -> 541p
}
	*/

	//����� ����



