//#include <iostream>
//using namespace std;
//
//int main() {
//	// Old ����
//	/*
//	char s[] = { 'H','e','l','l','o' };
//	void* ps;
//	ps = s;
//	for (int i = 0; i < sizeof(s); i++)
//		cout << *((char*)ps + i);
//	*/
//
//	// Modern(�������)
//	char letters[] = "Hello";
//	void* ps;
//	ps = letters;
//
//	//ranged based for loop (������� for��) 
//	//�� ����1 
//	for (char letter : letters)  //letters�ȿ� �ִ� ���Ҹ� �ϳ��� ����
//		cout << letter;
//
//	//�� ����2
//	for (int i : {1, 3, 5, 7, -9})
//		cout << i;
//
//
//	return 0;
//}
