//#include<iostream>
//using namespace std;
//
//int main() {
//
//	/*[������ �迭]
//	* 
//	* 
//	*/
//	short a, b, c=5, d=2; // �񿬼ӵ� ����
//	short* arr[4]; // ���ӵ� ���� / ���� ���ҵ��� a�ּ�, b�ּ�, c�ּ�, d�ּҸ� ����
//	arr[0] = &a; //a�� �ּҸ� ������ �迭�� �ʱ�ȭ
//	arr[1] = &b; //b�� �ּҸ� ������ �迭�� �ʱ�ȭ
//	arr[2] = &c; //c�� �ּҸ� ������ �迭�� �ʱ�ȭ
//	arr[3] = &d; //d�� �ּҸ� ������ �迭�� �ʱ�ȭ
//
//	cout << arr[0] << endl; //0000001A1C6FFAB4   a�ּ�
//	cout << arr[1] << endl; //0000001A1C6FFAD4   b�ּ�
//	cout << arr[2] << endl; //0000001A1C6FFAF4   c�ּ�
//	cout << arr[3] << endl; //0000001A1C6FFAF4   d�ּ�
//	// �ּ� ��� => ������ �迭�̸�[�ε�����]
//
//	cout << *arr[0] << endl; //- 13108  a��
//	cout << *arr[1] << endl; //- 13108  b��
//	cout << *arr[2] << endl; //5        c��    
//	cout << *arr[3] << endl; //2        d��
//	// �� ��� => *������ �迭�̸�[�ε�����]
//
//	cout << &arr[0] << endl; //0000007A10CFF7A8  arr[0] �ּ�
//	cout << &arr[1] << endl; //0000007A10CFF7B0  arr[1] �ּ�
//	cout << &arr[2] << endl; //0000007A10CFF7B8  arr[2] �ּ�
//	cout << &arr[3] << endl; //0000007A10CFF7C0  arr[3] �ּ�
//
//	/*a,b,c,d �񿬼ӵ� ����, arr ���ӵ� ����*/
//	
//
//
//
//	return 0;
//}