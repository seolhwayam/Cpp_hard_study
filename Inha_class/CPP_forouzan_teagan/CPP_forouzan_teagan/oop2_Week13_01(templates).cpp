//#include<iostream>
//using namespace std;
//
//template <typename T, typename A, typename B, int MAX> // ���ø�
////������ �� �� �ִ�
//
//
//class AutoArray {
//public:
//	AutoArray(T* ptr) {
//		_ptr = ptr;
//	}
//	~AutoArray() {
//		delete[]_ptr;
//	}
//	int& operator[] (int index) {
//		return _ptr[index];
//	}
//private:
//	T* _ptr;
//};
//
//int main() {
//	AutoArray<int> arri(new int[100]);
//	arri[0] = 100;
//
//	AutoArray<float> arrf(new float[100]);
//	arrf[99] = 2.71f;
//
//	AutoArray<short> arrs(new short[100]);
//	arrs[7] = 2.71f;
//	return 0;
//
//}
///*�� ������ �س����� �ؿ��� ���� ���� Ŭ���� ������ξ��� ��밡��*/