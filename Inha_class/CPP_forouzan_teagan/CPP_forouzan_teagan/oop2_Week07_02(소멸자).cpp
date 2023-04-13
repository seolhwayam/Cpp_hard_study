#include <iostream>
using namespace std;

class DynamicArray {
public:
	int* arr; //������ ����

	DynamicArray(int arraySize);
	~DynamicArray();
};

DynamicArray::DynamicArray(int arraySize) { // ������
	arr = new int[arraySize]; //���� �Ҵ�
}

DynamicArray:: ~DynamicArray() { // �Ҹ��� | ���α׷� ������ �ڵ����� �� ������ �Ҹ��� ����
	cout << "�Ҹ��� ���� " << endl;
	delete[] arr;
	arr = NULL;

	/*�Ҹ���
	 : main�Լ��� ������ ������ �ڵ������� �Ҹ��� ����
	   ����� �ڿ� ����*/
}

int main() {
	int size;
	cout << "�� ���� ������ �Է��Ͻðڼ�? ";
	cin >> size;

	DynamicArray da(size); // �����迭 ����

	for (int i = 0; i < size; i++) { // �迭 �Է�
		cin >> da.arr[i]; // ������ �迭 ó�� ����
	};

	for (int i = size - 1; i >= 0; --i) { // ���
		cout << da.arr[i] << " ";
	}

	cout << "\n";

	

	return 0;
}