//#include<iostream>
//using namespace std;
//
//
//
//
//void a();
//void b();
//void c();
//
//void c() {
//	/*throw 123;
//	throw "hello";*/
//	throw 2.71f;
//}
//void b() {
//	c();
//}
//void a() {
//	try {
//		b();
//	}
//	catch (int ex) {
//		cout << "����(a�Լ�)" << ex << "\n";
//		throw; //���� �ٽ� ������
//	}
//}
//
//int main() {
//	try {
//		a();
//	}
//	catch (int ex) {
//		cout << "����(main/����ó��) = " << ex << "\n";
//	}
//	catch (const char* ex) {
//		cout << "����(main/���ڿ� ó��) = " << ex << "\n";
//	}
//	catch (...) {
//		cout << "��Ÿ����" << "\n"; //��� ���ܸ� ������, ��Ȯ ����
//	}
//	return 0;
//}
//
