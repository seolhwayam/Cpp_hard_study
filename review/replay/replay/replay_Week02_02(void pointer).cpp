//#include <iostream>
//using namespace std;
//
//int main() {
//
//	/*
//	short a = 2;
//	short* ps;
//	ps = &a;
//
//	@�������� Ÿ�԰� �������� ����� Ÿ���� ���ƾ� �Ѵ�
//
//	int a = 2;
//	short* ps;
//	ps = &a;  [�� ���� ]
//
//	@ Ÿ���� ���� �����Ƿ� ������ ����.
//	*/
//
//	short a = 2;
//	short* ps1;
//	//int* ps;
//	//ps = &a; [�� ����]
//	ps1 = &a;
//	cout << *ps1 << endl; // a�� �ּҸ� �޾Ƽ�(&a) �� ���(*ps)
//
//	void* pv1;
//	pv1 = &a; // [�� ���� X]
//	/*@���� �Ϳ� ���ؼ��� �� ���� �� ����.�ٸ� ����� �� � ������ �˷���� �Ѵ�.
//	   ���� ���� �޸��� �ּҸ� �޴´�. Ÿ��, ����Ʈ ���� �� �� ����.
//	   void pointer ������ : ���α׷��Ӱ� � Ÿ���� ����ߴ��� �˰� �־�� �Ѵ�.*/
//
//	cout << *(short*)pv1 << endl;
//	// ĳ���� ����� ��  
//	// ����� �� : *(Ÿ�� *)void pointer ���� ��
//	//            �� ��Ÿ�������͸� ��Ÿ���� �Ŷ�� ���(ĳ����)
//
//
//	char s1[] = "Hello"; // �ڵ����� �������� null���� ����
//	char s2[] = { 'H','e','l','l','o','\n'}; // ����� null(\n, 0������) �־� ��ߵ�. ��� ������ null�� �������� ���� ������
//	void* ps2;
//
//	//ps2 = &s2[0];
//	//ps2 = &s2;
//	/*�迭[0] �� �迭�� ������ ������ ��� �� �Ȱ��� �ǹ̸� ���´�.*/
//		
//    ps2 = &s1;
//
//	cout << *(char*)ps2 << endl; // char Ÿ�������͸� ��Ÿ���� �Ŷ�� ���(ĳ����) [ �� ���ڸ� ��� ]
//	
//	//��
//	cout << (char*)ps2 << endl;
//	//��
//	cout << s1 << endl;
//
//	// ��� ���� ������ ��� ���̴�[Hello]
//
//	for (int i = 0; i < sizeof(s1); i++) {
//		//cout << *(char*)ps2 + i; // i = intŸ��/ ps2 = charŸ��(ĳ���� ����) => int��char���� �ٽ� ĳ������ �Ͼ ���ϴ� �� x
//		cout << *((char*)ps2 + i);
//	}
//
//	for (auto i = 0; i < sizeof(s1); i++) {
//		cout << *((char*)ps2 + i);
//	}
//
//
//
//	return 0;
//}
