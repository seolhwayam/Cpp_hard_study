//#include<iostream>
//#include "myexception(repaly_week11_01).h"
//using namespace std;
///*
//��ü�� ���ܷ� ������
//1. ��ü �ȿ� �������� �پ��� ������ ���� �� �ִ�.
//2. ��ü�� �ɹ������鵵 �ٰ��� ������� ���̱� ������ ���ϴ� ��ŭ ������ ���� ����������
//3. ���� : �Լ��� ������ �ǳʰ����� ���� ����.
// 
// ������
// 1. ������ ����ó�� ���� -> ����Ʈ ������ �Լ��� ���� ����
//
//
//*/
//
//class dynamicarray {
//	public:
//		dynamicarray(int arraysize); //�Ű����� ������
//		~dynamicarray(); //�Ҹ���
//
//		void setat(int index, int value);
//		int getat(int index) const;
//		int getsize() const;
//protected:
//	int* arr;
//	int size;
//
//	};
//	
//	dynamicarray::dynamicarray(int arraysize) {
//		arr = new int[arraysize]; //���� �Ҵ�
//		size = arraysize;
//	}
//	dynamicarray::~dynamicarray() { //�Ҹ���
//		cout << "�Ҹ��� ����" << endl;
//		delete[] arr;
//		arr = 0;
//	}
//	void dynamicarray::setat(int index, int value) {
//		if(index < 0 || index > getsize())
//			throw myexception(this, "out of range!!", index);
//		arr[index] = value;
//
//	}
//	int dynamicarray::getat(int index) const {
//		return arr[index];
//	}
//	int dynamicarray::getsize() const {
//		return size;
//	}
//	void usearray(dynamicarray& a, dynamicarray& b) {
//		try {
//			a.setat(3, 9);
//			b.setat(3, 9);
//
//			a.setat(9, -17); //���ܹ߻�
//			b.setat(9, -17); //���ܹ߻�
//
//			a.setat(20, 7);
//			b.setat(20, 7);
//		}
//		catch (myexception& e) {
//			cout << &a << "," << &b << endl;
//			cout << e.sender << endl;
//			cout << e.description << endl;
//			cout << e.intfo << endl;
//		}
//		catch (const char* e) {
//			cout << "���� : " << e << endl;
//		}
//	}
//	
//	int main() {
//		dynamicarray arr1(10);
//		dynamicarray arr2(7);
//		usearray(arr1, arr2);
//		return 0;
//	}