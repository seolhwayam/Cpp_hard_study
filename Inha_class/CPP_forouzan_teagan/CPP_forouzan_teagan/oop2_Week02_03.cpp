#include<iostream>
using namespace std;
	//�� �������� ����ϱ�(���� ��� for��)
	// Modern
	//char letters[] = "Hell";
	//void* ps;
	//ps = letters;


	//range based for loop
	/*for (auto i : letters)
		cout << i;
		*/

	// Old School
		/*char s[] = "Hell";
		char s[] = { 'H','e','l','l','o' };
		void* ps;
		ps = s;
		
		for (auto i = 0; i < sizeof(s); i++)
		cout << *((char*)ps + i);
		cout << (char*)ps << endl;
		cout << s << endl;*/

	/*for (int i : {1, 3, 5, 7, -9})
		cout << i;*/

	//// �� ����ü
	//struct StudentInfo{
	//	int id;
	//	float grade;
	//	char bloodType;

	//}s3 = { 20201236,4.4f,'0' },s4,s5; //�� ���� ��� 2(����+�ʱ�ȭ) | �� ���� ��� 3(����)
	//int main() {
	//	//�� ���� ��� 1
	//	StudentInfo s1 = { 20201234,3.5f,'o' };
	//	StudentInfo s2 = { 20201235, 3.7f,'A' };

	//	//�� ���� ��� 3(�ʱ�ȭ)
	//	s4.bloodType = 'B';
	//	s4.id = 20201237;
	//	s4.grade = 2.9f;

	//	//�� ���� ��� 3(�ʱ�ȭ �������) : ���翩�� �ٸ� �޸� ���� ���
	//	s5 = s2;

	//	cout << s2.grade << endl;
	//	cout << s1.id << endl;
	//	cout << s3.bloodType << endl;
	//	cout << s4.grade << endl;
	//	cout << s5.bloodType<<endl;


	////�� binary literals
	//	int a = 10;
	//	int b = 0xA;
	//	//[16����]
	//	// - 16������ �� ������ 0x�� ����(�ٻ���)
	//	// - �ƶ��� ���� 0~9���� ���� ������ �κ��� A~F���� �����ͼ� 16�� ü�� ���

	//	int c = 012;
	//	//[8����]
	//	// - �տ� �׳� 0�� �ٿ���

	//	int d = 0b1010;
	//	//[2����]
	//	// c++14, binary literals
	//
	//	
	//	cout << a << endl;
	//	cout << b << endl;
	//	cout << c << endl;
	//	cout << d << endl;

	//	return 0;
	//}

	