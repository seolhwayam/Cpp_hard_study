//#include<iostream>
//#include<cstring>
//#pragma warning(disable:4996);
//using namespace std;
//
//int main() {
//	// ��C++ Style
//
//	//string src = "Inha Univ";
//	//C������ char �ڷ�Ÿ�� ��������� C++������ string����
//	//string dest;
//
//	//dest = src; // src copy
//
//	//cout << src.size() << endl;
//	//src�� ���ڿ��� ����
//	//C���� �񱳽� �������� �κ� ������ ����
//
//	//cout << src << endl;
//	//cout << dest << endl;
//
//
//
//	string str1 = "inha";
//	string str2 = "univ";
//
//	// ���ڿ� ����
//	str1 = str1 + str2;
//	cout << str1 << endl;
//	cout << str2 << endl;
//
//	// ���ڿ� ��
//	if (str1 == str2) { // str1 != str2 �� ���� ���갡��(���� �ʴ�)
//		cout << "����" << endl;
//		cout << (str1 == str2) << endl; // 1 ����
//	}
//	else {
//		cout << "�ٸ���" << endl;
//		cout << (str1 == str2) << endl; // 0 ����
//	}
//	// boolean (true, false)�� ����
//
//	// ���ڿ� ã��
//	string str_find_1 = "HI, Inha Univ.";
//
//	cout << str_find_1.find("Inha") << endl;
//	/*find: �� ���ڿ� ã��
//	        �� ���ڿ� ����.find("ã�� ����")
//			�� �ε����� ����(ã�� ��ġ �� ����)
//		*/	
//
//
//	// ���ڿ� �ڸ���
//	string str_capture_1 = "HI, Inha Univ.";
//
//	string capture = str_capture_1.substr(4, 4); // �ε����� 4����~ 4���� ĸó
//	cout << capture << endl;
//	
//
//	//�� Old Style (C Style)
//	/*char src[] = "inha univ";
//	int len = strlen(src);
//	cout << len << endl; 
//
// 	char* dest = new char[len + 1]; 
//	strcpy(dest, src);
//
//	cout << src << endl;
//	cout << dest << endl;
//
//	delete[] dest;
//	dest = null;*/
//
//
//
//	//���ڿ� ����
//	//char str1[] = "inha univ";
//	//char str2[] = "Harvard univ";
//	//
//	//strcat(str1, str2);
//	//// strcat : ���ڿ� ����(���ڰ�, ���� ���ڿ�)
//
//	//cout << str1 << endl; // ���յǾ� ������
//	//cout << str2 << endl; // �״��
//
//	//// ���ڿ� ��
//	//char str_1[10] = "Inha";
//	//char str_2[] = "Harvard";
//
//	//if (strcmp(str_1, str_2) == 0) { //�� ���ڿ��� ������ ������ 0�� ���ϵ�
//	//	cout << "����" << endl;
//	//}
//	//else {
//	//	cout << "�ٸ���" << endl;
//	//	cout << strcmp(str_1, str_2) << endl;
//	//}
//	// �ƽ�Ű�ڵ�(ascii) ������ ��
//	// str1 < str2  -1����
//	// str1 > str2   1����
//	
//	return 0;
//}