//#include<iostream>
//using namespace std;
//
//
//class DynamicArray {
//	public:
//		int* arr;
//	
//		DynamicArray(int arraySize); 
//		~DynamicArray(); 
//	};
//	
//	DynamicArray::DynamicArray(int arraySize) {
//		arr = new int[arraySize];
//	}
//	DynamicArray::~DynamicArray() { \
//
//		delete[] arr;
//		arr = NULL;
//	}
//	
//	int main() {
//		int size;
//		DynamicArray da(size);
//	
//		for (int i = 0; i < size; ++i)
//			cin >> da.arr[i];
//	
//		for (int i = size - 1; i >= 0; --i) {
//			cout << da.arr[i] << " ";
//		}
//		cout << "\n";
//	}