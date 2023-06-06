//#include<iostream>
//#include "myexception(repaly_week11_01).h"
//using namespace std;
///*
//객체를 예외로 던지기
//1. 객체 안에 여러가지 다양한 정보를 담을 수 있다.
//2. 객체의 맴버변수들도 다같이 던져기는 것이기 때문에 원하는 만큼 변수를 만들어서 던질수있음
//3. 예외 : 함수를 여러개 건너가지고도 전달 가능.
// 
// 문제점
// 1. 구조적 예외처리 문제 -> 리소트 정리전 함수가 먼저 끝남
//
//
//*/
//
//class dynamicarray {
//	public:
//		dynamicarray(int arraysize); //매개변수 생성자
//		~dynamicarray(); //소멸자
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
//		arr = new int[arraysize]; //동적 할당
//		size = arraysize;
//	}
//	dynamicarray::~dynamicarray() { //소멸자
//		cout << "소멸자 동작" << endl;
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
//			a.setat(9, -17); //예외발생
//			b.setat(9, -17); //예외발생
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
//			cout << "예외 : " << e << endl;
//		}
//	}
//	
//	int main() {
//		dynamicarray arr1(10);
//		dynamicarray arr2(7);
//		usearray(arr1, arr2);
//		return 0;
//	}