//#include<iostream>
//using namespace std;
///*
//��const_cast : const, volatile ���� �Ӽ��� ����
//[����]
//const_cast<Ÿ��>(����Ӽ� ������ ����)
//
//[����]
//�� const_cast�� ���� �����ڸ� ������ �� ������ ���� ������ �������� ���մϴ�.
//[Ÿ�� �� ���� �Ұ�]
//
//�� const_cast�� ��ü���Ŀ� ���� ������, ���� �Ǵ� �ɹ� �����Ϳ����Ѵ�.
//[�����ͷ� �޾ƾ� �ϰ�, ������ Ÿ�Ը� ����]
//
//
//��dynamic_cast : ��� ������ Ŭ���� ������ �� ���۷��� Ÿ�� üũ
//[����]
//const_cast<Ÿ��>(����)
//
//[����]
//�θ� = �ڽ� (0)
//�ڽ� = �θ� (x)
//
//
//��static_cast : �������� ��ȯ ������ Ÿ�Ը� ��ȯ, �� ���� ��ȯ�� ����� ó��.
//
//��reinterpret_cast : �����ͳ���, �����Ϳ� ��ġ�� ���� ��ȯ
//
//*/
//
//class A {
//public:
//	virtual void Func() {}
//
//};
//class B : public A {};
//class C : public B {};
//
//int main() {
//	A* pa1 = new C;
//	A* pa2 = new A;
//	C* pc1 = dynamic_cast<C*>(pa1);
//	C* pc2 = dynamic_cast<C*>(pa2); //ĳ���� �����ϸ� NULL����
//	cout << pc2 << endl;
//	try {
//		C& rc1 = dynamic_cast<C&>(*pa2); //ĳ���� ����, bad_cast ���ܹ߻�(���۷����� null�� ���� �ȵǹǷ� �����Ҽ��ֵ��� �����ε�)
//	}
//	catch (bad_cast& e) {
//		cout << "bad_cast~~" << endl;
//	}
//	return 0;
//
//
//}