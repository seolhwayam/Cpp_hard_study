//#include<iostream>
//using namespace std;
//
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
//   2) ������ NULL�� ����
//   �����ͺ����̸� = NULL(Nullptr)
//
//   �� ���� ������ �� ��� �޸� ���� ����
//
//*/
//
//char* RecerseString(const char* src, int len) {
//	char* rev = new char[len + 1];
//	for (auto i = 0; i < len; ++i)
//		rev[i] = src[len - i - 1];
//	rev[len] = NULL;
//	return rev;
//}
//
//int main() {
//	char orig[] = "Inha";
//	char* copy = RecerseString(orig, 4);
//
//	cout << orig << "\n";
//	cout << copy << "\n";
//
//
//
//	delete[] copy; // �Ҵ�� ���� �޸� ����
//	copy = NULL; // ����Ű�� �ִ� ������(����)�� null�� ����(������ �����޸� �Ҵ��� �ߴ� �ּҰ��� ������ ����)
//
//	return 0;
//}