//#include<iostream>
//using namespace std;
//
//int main() {
// �� �迭
// int k = 5;
//	k = 7;
//	cout << k << endl;
//
//
//  //�ڷ���/����ǥ�����(2�� ������)/�ڷ���size
//	const int i = 5; //32bit
//	cout << i << endl;
//	unsigned short s = 65535; //16bit
//	//signed (-2��15�� ~ +2��15��-1)
//	//unsigned (0 ~ 2��16��-1)
//	cout << s << endl;
//
//	//�迭
//	//int arr[4] = { 0 };
//	//�� �迭 0,1,2,3 0���� �ʱ�ȭ | {�ʱ�ȭ ��}
//	//arr[0] = -9;
//	//arr[3] = 30000;
//
//	int arr[4] = { -9,0,0,30000 };
//	//�� ����ÿ� �ʱ�ȭ
//
// �� ������
//
//	int* parr = &arr[0];
//������ = ��� �ּ�(*)
//parr=������ �̸� | &arr[0] = 0������ ������
//Ÿ��* �������̸� = &�迭�̸�[];
//	//�� �迭���� ������ �����
//
//
//
//	for (int i = 0; i < 4; i++) {
//		//cout <<*(parr+i)<<endl; ��������| �ּҷ� �� ���
//		//cout << parr[i] <<endl; ��������| ������ > �迭ó�� Ȱ��
//		//cout << arr[i] <<endl;  ��迭|�迭 ���
//		//cout << *(arr + i) << endl; ��迭| �迭 > ������ó�� Ȱ��
//	}
//
//	//for (int i = 0; i < 4; i++) {
//	//	cout << parr+i << endl;
//	//}�ڸ��ּҴ� �״������ +i(i�� 1���������� 4����Ʈ�� ����(parr+i))
//	// �ּ� ����ϱ�
// 
// �� auto
// 
//	/*Auto
//	 : �ڷ�Ÿ���� ���� ��ġ�� Auto��� Ű���� �ۼ���
//	   �ش� ���� Ű���带 ���� ������ �ڿ��� ������ �Ǵ� �ʱ�ȭ�Ǵ� ���鿡 ���ؼ�
//	   �߷��� �ؼ� Ÿ�� ���� => auto �����̸�
//
//	   �ֻ��� �迭 ���Ŀ��� auto������ ǥ�õ� �� ����.(auto �迭�̸� xxx)
//
//	   ex)�ڹٽ�ũ��Ʈ vr,�� Ű���� */
//
//	return 0;
//
//}
/*Auto
 : �ڷ�Ÿ���� ���� ��ġ�� Auto��� Ű���� �ۼ���
   �ش� ���� Ű���带 ���� ������ �ڿ��� ������ �Ǵ� �ʱ�ȭ�Ǵ� ���鿡 ���ؼ�
   �߷��� �ؼ� Ÿ�� ����(�־����� ���� ���� Ÿ�� ����)
//     �� auto �����̸�
//	   �� �ֻ��� �迭 ���Ŀ��� auto������ ǥ�õ� �� ����.(auto �迭�̸� xxx)
//	   �� const auto Ű���� ���û�� ����
//	   ex)�ڹٽ�ũ��Ʈ vr,�� Ű���� */
//
//auto f = 3.24f;//fǥ�ý� float ó��| ������ double ó����
//auto s = "test";
//cout << f << endl;
//cout << s << endl;
//cout << sizeof(f) << "\t" << typeid(f).name() << endl;
//cout << sizeof(s) << "\t" << typeid(s).name() << endl;
// 
//int* parr = &arr[0];
//������ = ��� �ּ�(*)
//parr=������ �̸� | &arr[0] = 0������ ������
//Ÿ��* �������̸� = &�迭�̸�[];
//�� �迭���� ������ �����

// �� void 
//
//short a = 2;
//int* ps;
//void* pv; //void������
//ps = &a;  >> ps = a�� �ּ�
//pv = &a;
//cout << *(short*)pv << endl;
// void�� ������ ������ � Ÿ�����ε� ���� �� ����
// ��� ����:  *(Ÿ��*)�������̸�
// ��� �������� Ÿ���̸��� ĳ�����Ͽ� ��������� ��°���

//cout << ps << endl; //ps = a ���� �ּ� >> cout ps = a�� ���� �ּ�
//cout << *ps << endl;//*ps = a��

//	char n[] = "hello"; // "" ���� �ڵ����� �������� 0(null) ����
//	char s[] = { 'h','e','l','l',0 };//�������� 0(null)�ȳ��� �� ������ ��µ� ����!
//	void* ps;
//	//ps = &s[0];
//	ps = s;
//	cout << *(char*)ps << endl;
//	for (int i = 0; i < sizeof(s); i++) {
//		cout << *((char*)ps+i);
//		// �����ͷ� �迭 �� ������� ����ϱ�
//
//		//cout << *(char*)ps+i;
//		//ps+i �κп��� ��� ĳ���� �Ͼ > ���ϴ� ��x
//		
//		//cout << *((char*)ps+i);
//		//�� (chat*)ps ��� �ּҿ� �� +i 
//   	}
//
//	// ����ü (Struct)
//struct StudentInfo {   // ����ü ������ 
//	int id;
//	float grade;
//	char bloodType;
//} s3 = { 12223433, 4.0f, 'B' }, s4;

// ����ü ���� ����� ���ÿ� �ʱ�ȭ���� �Ϸ�, ���� ���𸸵� ����

//int main() {
//
//
// ����ü ���� �ϳ� �����
//StudentInfo s1 = { 12223415, 4.1f, 'A' };
//StudentInfo s2 = { 12223485, 3.9f, 'B' };

//
	//cout << s2.grade << endl;
	//cout << s1.id << endl;
	//cout << s3.bloodType << endl;
//
//*s4.bloodType = 'AB';
//s4.id = 12223414;
//s4.grade = 3.9f;*/
//
//s4 = s2;   // ����ü�� ���� // ���� �ٸ� �޸𸮰� ���� // ������ ��

//cout << s4.bloodType << endl;

//s4.bloodType = 'O';
//cout << s4.bloodType << endl;
//cout << s2.bloodType << endl;   // s4 �� �������� �ٲ������ s2 �� �������� �ٲ��� �ʴ´�.
//s4.bloodType = 'O';
//s4.id = 12221317;
//s4.grade = 2.9f;

// Modern school code
//char letters[] = "Hello";
//void* ps;
//ps = letters;
//
// Ranged based for loop    ���� ��� for �� 
//for (auto letter : letters) {   // auto i : �迭
//   cout << letter;
//}
//
//* �� ���̽� �ڵ�� ���� (Modern)��
//for i in range(0, 3, 1):
//   print(subjects[i])
//*/

//
// Old school code
//char s[] = { 'H', 'e','l','l','o', 0 };
//void* ps;
//ps = &s[0];

//for (int i = 0; i < sizeof(s); i++) {
//   cout << *((char*)ps + i);
//
//}
//
//* �� ���̽� �ڵ�� ���� (Old)��
//for i in range(0, 3, 1):
//    print(subjects[i])
//*/

//for (int i : {1, 3, 5, 7, -9})
//   cout << i << " ";

//int a = 10;      // 10����
//int b = 0xA;   // 16����
//int c = 012;   // 8����
//int d = 0b1010;   // �������� 2���� ��� X   // c++ 14, binary literals

//cout << a << endl;
//cout << b << endl;
//cout << c << endl;
//cout << d << endl;
//
//
//
//
//		//return 0;
//	}