//#include "myexception(repaly_Week11_01).h"
//#include<iostream>
//using namespace std;
///*
//��ü�� ���ܷ� ������
//1. ��ü �ȿ� �������� �پ��� ������ ���� �� �ִ�.
//2. ��ü�� �ɹ������鵵 �ٰ��� ������� ���̱� ������ ���ϴ� ��ŭ ������ ���� ����������
//3. ���� : �Լ��� ������ �ǳʰ����� ���� ����.
// 
// C++ ��Ģ
// : �����ڰ� �ùٸ��� �����߸� ��ü�� ������ ������ �����Ѵ�. 
// -> �Ҹ��� ���� ����
//
// ������
// 1. ������ ����ó�� ���� -> ����Ʈ ������ �Լ��� ���� ����
// (���ð��� ��� delete�κ����� �Լ��� ������ �޸� �������� �߻�)
// -> Ŭ���� ������ ���ؼ� �ذ���.
//
// 2. ������ �� ����ó��
// -> �޸� ���� ����
//*/
//
//class dynamicarray {
//		public:
//			dynamicarray(int arraysize); //�Ű����� ������
//			~dynamicarray(); //�Ҹ���
//	
//			void setat(int index, int value);
//			int getat(int index) const;
//			int getsize() const;
//	protected:
//		int* arr;
//		int size;
//	
//		};
//		
//dynamicarray::dynamicarray(int arraysize) {
//		try {
//		arr = new int[arraysize]; //���� �Ҵ�
//		size = arraysize;
//
//		throw MyException(this, "Constructor Inside Exception", 100);
//		}
//		catch (...) {
//			cout << "������ ���� ĳġ ����! " << endl;
//			delete[]arr; // �޸� ����
//
//			throw;// ���� ���ܸ� �ٽ� ����
//		}
//}
//dynamicarray::~dynamicarray() { //�Ҹ���
//
//		try {
//			cout << "�Ҹ��� ����" << endl;
//			delete[] arr;
//			arr = 0;
//		}
//		catch (...) {
//
//		}
//}
//
//		void dynamicarray::setat(int index, int value) {
//			if(index < 0 || index > getsize())
//				throw MyException(this, "out of range!!", index);
//			arr[index] = value;
//	
//		}
//		int dynamicarray::getat(int index) const {
//			return arr[index];
//		}
//		int dynamicarray::getsize() const {
//			return size;
//		}
//		void usearray(dynamicarray& a, dynamicarray& b) {
//			try {
//				a.setat(3, 9);
//				b.setat(3, 9);
//	
//				a.setat(9, -17); //���ܹ߻�
//				b.setat(9, -17); //���ܹ߻�
//	
//				a.setat(20, 7);
//				b.setat(20, 7);
//			}
//			catch (MyException& e) {
//				cout << &a << "," << &b << endl;
//				cout << e.sender << endl;
//				cout << e.description << endl;
//				cout << e.intfo << endl;
//			}
//			catch (const char* e) {
//				cout << "���� : " << e << endl;
//			}
//		}
//		
//		int main() {
//			try {
//				dynamicarray arr1(100);
//				//dynamicarray arr2(7);
//				//usearray(arr1, arr2);
//			}
//			catch (MyException& e) {
//				cout << e.description << endl;
//			}
//			return 0;
//		}