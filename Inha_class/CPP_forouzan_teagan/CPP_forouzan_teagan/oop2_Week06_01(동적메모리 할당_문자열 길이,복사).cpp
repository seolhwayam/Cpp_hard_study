//#include<iostream>
//#pragma warning(disable:4996) // �� strcopy ���� �ذ�
//#include<cstring> //strlen �Լ� ���(���� �����ÿ��� �ʼ� �Է�)
//using namespace std;
//
//int main() {
//
//	// �� ���ڿ� ����
//	char src1[] = "Inha";
//	int len1 = strlen(src1);
//	// strlen : ���ڿ� ���� ��� �Լ�
//
//	cout << len1 << endl; //4
//
//	char src2[] = "Inha Univ";
//	int len2 = strlen(src2);
//
//	cout << len2 << endl; //9(�����̽��ٵ� 1�� �ν�)
//
//	// �� ���ڿ� ����
//	char* dest = new char[len1 + 1]; 
//	// ���� �޸� �Ҵ�
//	// ���ڿ� ���纻 ���� ������ �迭
//
//	strcpy(dest, src1);
//	// strcpy : ���ڿ� ����
//	// ù��° ���� : ���縦 �� �� | �� ��° ���� : ����
//
//	cout << src1 << endl;
//	cout << dest << endl;
//
//	//�� �߿� ���� ���!
//	delete[] dest; // ���� �޸� �Ҵ� ����
//	dest = NULL; // ������ ����
//
//
//	return 0;
//}