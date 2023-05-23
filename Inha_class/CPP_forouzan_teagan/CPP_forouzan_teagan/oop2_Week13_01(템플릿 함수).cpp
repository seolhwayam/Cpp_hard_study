#include<iostream>
using namespace std;
template<typename T>

T max(T a, T b) {
	return (a > b) ? a : b;

}
void main() {

	int i1 = 7, i2 = 4;
	int i3 = max(i1, i2);
	cout << i3 << endl;

	double d1 = 3.14, d2 = 2.71;
	double d3 = max(d1, d2);
	cout << d3 << endl;
}