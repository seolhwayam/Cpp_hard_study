//#include<iostream>
//using namespace std;
//
//class NeedConstuructor {
//public:
//
//	// const, reference -> �ݵ�� �ʱ�ȭ �ʿ�
//	const int max;
//	int& ref; // ���۷��� �纰�� ��&
//	int temp;
//
//	NeedConstuructor(); //1.������
//	NeedConstuructor(int cnt, int& number); //2.������ (int Ÿ��, ���۷���)
//};
//NeedConstuructor::NeedConstuructor():max(100),ref(temp) { // const, reference �ʱ�ȭ ����Ʈ �̿��Ͽ��� �ʱ�ȭ!!
//	temp = 10;
//}
//NeedConstuructor::NeedConstuructor(int cnt, int& number)
//	: max(cnt),ref(number){
//	temp = 10;
//}
//
//
///* �Ű����� ���� ��
//�� ������ �����ε�
//�� �ʿ��� �κе� �Ѱܹ��� ������ �ʱ�ȭ, ����Ʈ �μ��� ����.
//*/
//
//
//int main() {
//	NeedConstuructor cr;
//
//	int num = 400;
//	NeedConstuructor cr1(500, num);
//	                        //���۷��� Ÿ�� > ���� ���̱� >> �����̸� �ֱ�
//
//	cout << cr.max << endl;
//	cout << cr.ref << endl;
//
//	cout << cr1.max << endl;
//	cout << cr1.ref << endl;
//
//	
//
//	
//	
//
//
//
//
//
//
//	return 0;
//}