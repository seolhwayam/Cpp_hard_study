//#include<iostream>
//#include<cstring>
//#pragma warning(disable:4996)
//using namespace std;
///*
//�޸� �Ҵ� : ��ǻ�ͷκ��� �޸𸮸� ����
//���� �޸� �Ҵ� <-> static(����)
//1. �޸𸮸� �������� �Ҵ�
//   : �����Ͻ����� ���� �����ʰ�,���α׷��� ���ư��� ���߿��� �������� �޸𸮸� �Ҵ��ϴ� ���� ���Ѵ�.
//
//2. ���� �޸� �Ҵ�
//   Ÿ��* ������ ���� �̸� = new Ÿ��; //new Ÿ��[] : �迭
//
//3. ���� �޸� ����
//   1) ���� �޸� ����
//   *delete ������ �����̸�
//   *delete[] ������ �����̸� //�迭�� ���
//
//   2) ������ null�� ����
//   �����ͺ����̸� = null(nullptr)
//
//   �� ���� ������ �� ��� �޸� ���� ����
//
//
//
// C��� ���ڿ�
// 1. Char
// 2. strlen(���� Ÿ�� ����) : ���ڿ� ���� ���ϴ� �Լ�
// 3. strcpy(������ �� ����, ������ ���� ����) : ���ڿ� �����ϴ� �Լ�
//
//*/
//
//int main() {
//	char src[] = "inha univ";
//	int len = strlen(src); //strlen : ���ڿ��� ���� ���ϴ� �Լ�
//
//	cout << len << endl;
//
//	char* dest = new char[len + 1];
//	strcpy(dest, src);
//	//strcpy(������ ��, ������ ����)
//
//	cout << src << endl;
//	cout << dest << endl;
//
//	delete[]dest;
//	dest = NULL;
//
//
//	return 0;
//}