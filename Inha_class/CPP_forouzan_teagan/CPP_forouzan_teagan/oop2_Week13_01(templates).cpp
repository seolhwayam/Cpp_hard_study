////#include<iostream>
////using namespace std;
//
//template <typename t, typename A,int MAX> // 템플릿
//// typename 여러개 가능, 고정된 값도 선언 가능
//// 컴파일러가 동작
//
////여러개 올 수 있다
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
//	//autoarray타입(int) ptr(new int
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
///*잘 디자인 해놓으면 밑에서 쓰는 것은 클래스 재디자인없이 사용가능*/
