//#include<iostream>
//using namespace std;
//
//int Factorial(int);
//int FactorialRecursion(int);
///*
//�Լ� ������
//1. ����Ÿ��(* �Լ� ������ �̸�)(�Ű����� Ÿ��)
//2. �Լ��� ����Ÿ�԰� �Ű����� Ÿ���� �¾ƾ� ��� ����
//�Լ� : int Factorial(int);      [����Ÿ�� int  �Ű����� Ÿ�� int]
//������ �Լ� : int(*pFact)(int); [����Ÿ�� int  �Ű����� Ÿ�� int]
//3. �����ʹ� �ּҸ� �޴´� -> �Լ������ʹ� �Լ��� �ּҸ� �޴´� -> & �Լ��̸�
//
//[����]
//1) �Լ� ������ ���� :  ����Ÿ��(* �Լ� ������ �̸�)(�Ű����� Ÿ��)
//2) �Լ� ������ �ʱ�ȭ : �Լ� ������ �̸� = &�Լ��̸�
//3) ����ϱ� : (*�Լ� ������ �̸�)(�Ű�����)
//*/ 
//
//int main() {
//
//	int in;
//	cin >> in;
//
//	int(*pFact)(int);
//
//	pFact = &Factorial; 
//	/*
//	*�����ʹ� �ּҸ� �޴´� -> �Լ������ʹ� �Լ��� �ּҸ� �޴´� -> & �Լ��̸�
//	* ����Ÿ��, �Ű����� Ÿ�� ��Ī
//	*/
//
//	cout << (*pFact)(in) << endl;
//
//	cout << Factorial(in) << endl;
//	cout << FactorialRecursion(in) << endl;
//
//	return 0;
//}
//
//
//int FactorialRecursion(int f) {
//	if (f <= 1)
//		return 1;
//	else
//		return f * FactorialRecursion(f - 1);
//}
//
//int Factorial(int f) {
//	int result = 1;
//
//	for (int i = 1; i <= f; i++) {
//		result = result * i;
//	}
//	return result;
//}
//
//
