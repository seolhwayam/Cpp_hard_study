////#include<iostream>
////using namespace std;
//
//template <typename t, typename A,int MAX> // ���ø�
//// typename ������ ����, ������ ���� ���� ����
//// �����Ϸ��� ����
//
////������ �� �� �ִ�
//
//
//class autoarray {
//public:
//	autoarray(t* ptr) {
//		_ptr = ptr;
//	}
//	~autoarray() {
//		delete[]_ptr;
//	}
//	t& operator[] (int index) {
//		return _ptr[index];
//	}
//private:
//	t* _ptr;
//};
//
//int main() {
//	autoarray<int> arri(new int[100]);
//	//autoarrayŸ��(int) ptr(new int
//	arri[0] = 100;
//
//	autoarray<float> arrf(new float[100]);
//	arrf[99] = 2.71f;
//
//	autoarray<short> arrs(new short[100]);
//	arrs[7] = 2.71;
//	return 0;
//
//}
///*�� ������ �س����� �ؿ��� ���� ���� Ŭ���� ������ξ��� ��밡��*/
