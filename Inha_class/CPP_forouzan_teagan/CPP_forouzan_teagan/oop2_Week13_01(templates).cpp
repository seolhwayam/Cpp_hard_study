//#include<iostream>
//using namespace std;

template <typename T> // 템플릿
//여러개 올 수 있다


class Autoarray {
public:
	Autoarray(T* ptr) {
		_ptr = ptr;
	}
	~Autoarray() {
		delete[]_ptr;
	}
	T& operator[] (int index) {
		return _ptr[index];
	}
private:
	T* _ptr;
};

int main() {
	Autoarray<int> arri(new int[100]);
	arri[0] = 100;

	Autoarray<float> arrf(new float[100]);
	arrf[99] = 2.71f;

	Autoarray<short> arrs(new short[100]);
	arrs[7] = 2.71;
	return 0;

}
/*잘 디자인 해놓으면 밑에서 쓰는 것은 클래스 재디자인없이 사용가능*/