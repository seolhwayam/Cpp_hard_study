//#include<iostream>
//using namespace std;
//// void ���ϰ��� ����
//
//void Hello(); /*�� �����ذ� : ������ Ÿ��(�μ� ���¹���) �� �Լ�����*/
//
//void Hi(int); //������ Ÿ�� ���(�μ� �ִ� ����)
//
//int Factorial(int); //���丮�� �Լ�(�ݺ��� �̿�)
//
//int FactorialRecursion(int); //���丮�� �Լ�(����Լ� �̿�)
//
//
//int main() {
//
//	Hello();
//	Hi(5);
//
//	cout << Factorial(5) << endl;
//
//	cout << FactorialRecursion(5) << endl;
//	//  Factorial() == FactorialRecursion() ��� ����
//
//
//
//	int(*pFact)(int); // �Լ� ������(�Լ��� �ּҸ� �޴´�)
//	void(*pHi)(int);
//
//	/*<�Լ� ������ ���� ����>
//	   ����Ÿ�� ��Ī (*�������̸�) (�Ű����� Ÿ�� ��Ī);
//	  �� �ٸ� Ÿ�� ������ ����*/ 
//
//	pFact = &Factorial;
//	pHi = &Hi;
//
//	int in;
//	cin >> in;
//		
//	
//	cout << (*pFact)(in) << endl;
//	// (*������ �̸�)(�Ѱ��� �Ű����� ��)
//
//	(*pHi)(in);
//
//	/*�Լ� ������
//	���� : ����Ÿ�� ��Ī (*�������̸�) (�Ű����� Ÿ�� ��Ī);
//	��� : (*������ �̸�)(�Ѱ��� �Ű����� ��) */		
//	
//	return 0;
//}
//
//void Hello() {
//	cout << "Hello~" << endl; //�� main���� Hello��ã�Ƽ� ������
//}
//
//void Hi(int n) {
//	cout << "Hi~"<<n << endl;
//}
//
//int Factorial(int f){
//	int result = 1;
//
//	for (int i = 1; i <= f; i++) {
//		result = result * i;
//	}
//	return result;
//}
//
//int FactorialRecursion(int f) {
//	// f = 4
//	// f = 3
//	// f = 2
//	if (f <= 1)
//		return 1;
//	else
//		return f * FactorialRecursion(f - 1);
//	// 4 * FactorialRecursion(3)
//	// 3 * FactorialRecursion(2)
//	// 2 * FactorialRecursion(1)  �� (f <= 1) �� ����!
//}
//
