//#include<iostream>
//#pragma warning(disable:4996)
//#include<cstring>
//using namespace std;
//
///*
//c++ ���ڿ�
//1. string �ڷ�Ÿ��
//2. string ���ڿ� ���� �̸� .size : ���ڿ� ���� ���ϴ� �Լ�
//3. ������ ���ڿ� ���� = ������ ���ڿ� ���� : ���� �����ϱ�
//4. ���ڿ� ����1 + ���ڿ� ����2 : ���ڿ� ��ġ��(���ڿ� ����1�� ������ ���ڰ� ����ȴ�)
//5. ���ڿ� ����1 == ���ڿ� ����2 : ���ڿ� ���ϱ�
//   1) (���ڿ� ����1 == ���ڿ� ����2) ���� => 1 ����
//   2) (���ڿ� ����1 != ���ڿ� ����2) ����x => 0 ����
//   * true.false ������ ���� (true 1 / false 0)
//6  ���ڿ� ����.find(ã�� ����) : ���ڿ��������� ã�� ������ �ε��� ���� ���ϴ� �Լ�
//7. ���ڿ� ����.substr(���� �ε���, ����) : ���ڿ� ������ �����ε������� ���� ��ŭ�� ���ڿ��� ��ȯ�ϴ� �Լ�
//
//6. C Style ��� ����ӵ��� ���� ������ ����.
//
//*/
//
//int main() {
//	//string src = "Inha Univ";
//	//string dest; //�����
//
//	// ���ڿ� �����ϱ�
//	//dest = src; 
//
//	// ���ڿ� ���� ���ϱ�
//	//cout << src.size() << endl; //src ��ü
//	
//	//cout << src << endl;
//	//cout << dest << endl;
//
//	string str1 = "Inha";
//	string str2 = "Univ";
//
//	//���ڿ� ��ġ��
//	str1 = str1 + str2;
//	cout << str1 << endl;
//	cout << str2 << endl;
//	
//	//���ڿ� ���ϱ�
//	if (str1 == str2) {
//		cout << (str1 == str2) << endl;
//		cout << "����" << endl; //1
//	}
//	else {
//		cout << (str1 == str2) << endl;
//		cout << "�ٸ���" << endl; //0
//	}
//
//	string str = "Hi, Inha Univ.";
//	cout << str.find("Inha") << endl;
//		
//	string capture = str.substr(4, 4);
//	cout << capture;
//
//	return 0;
//}