//#include<iostream>
//using namespace std;
//
//char* ReverseString(const char* src, int len) {
//	/*  �� const + char*(������) : ������ ���� �ٲ��� ����(�б� ����)
//	*   �� char* + src : �޸� ���� ����. �ּ�(orig -> Inha)
//	*   �� int + len : ���ڿ��� ����
//	*   src -> orig -> []Inha
//	*   len -> 4
//   */
//	char* rev = new char[len + 1]; 
//	//�����޸� �Ҵ� 5����Ʈ
//	// cout  ��½� null�������� ���, cout���� �˷��ֱ� ���ؼ� null�� ���� -> null�� ó�� ���� 5����Ʈ
//
//
//	for (auto i = 0; i < len; ++i) {
//		rev[i] = src[len - i - 1];
//		// src������ -> orig[] �迭 �ּ� -> rev������ �迭
//	}
//	rev[len] = NULL;
//	// cout  ��½� null�������� ���, cout���� �˷��ֱ� ���ؼ� null�� ����
//	// �����ؼ� char* rev = new char[len + 1] -> null�� ó������ 5����Ʈ
//
//	return rev;
//	}
//
//int main() {
//	char orig[] = "Inha";
//	// ���ڿ� �迭 Inha +null �� ����
//	// orig[] = [ I , n , h , a , null(0) ]
//
//	char* copy = ReverseString(orig, 4); // �Լ� ȣ��(���ڿ� �迭, ���ڿ� ����)
//	cout << orig << "\n";
//	cout << copy << "\n";
//
//
//	//�� �߿� ���� ���!
//	delete[] copy;
//	// [] = [ a,  h  , n , I ,  null] ����
//
//	copy = NULL;
//	//������X �ϵ��� ����
//
//
//
//	return 0;
//}