#include <iostream>
using namespace std;

class DynamicArray {
public:
	int* arr; //포인터 변수

	DynamicArray(int arraySize);
	~DynamicArray();
};

DynamicArray::DynamicArray(int arraySize) { // 생성자
	arr = new int[arraySize]; //동적 할당
}

DynamicArray:: ~DynamicArray() { // 소멸자 | 프로그램 끝내면 자동으로 그 시점에 소멸자 실행
	cout << "소멸자 동작 " << endl;
	delete[] arr;
	arr = NULL;

	/*소멸자
	 : main함수가 끝나는 시점에 자동적으로 소멸자 동작
	   사용한 자원 정리*/
}

int main() {
	int size;
	cout << "몇 개의 정수를 입력하시겠소? ";
	cin >> size;

	DynamicArray da(size); // 동적배열 생성

	for (int i = 0; i < size; i++) { // 배열 입력
		cin >> da.arr[i]; // 포인터 배열 처럼 쓰기
	};

	for (int i = size - 1; i >= 0; --i) { // 출력
		cout << da.arr[i] << " ";
	}

	cout << "\n";

	

	return 0;
}