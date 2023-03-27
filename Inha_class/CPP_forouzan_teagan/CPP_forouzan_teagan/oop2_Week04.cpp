#include<iostream>
using namespace std;

int squares(int n) {
	return n * n;
}

void squares(int* n) {
	*n = *n * *n;
}

void squaresRef(int& n) {
	n = n * n;
}



int main() {
	//포인터 만이 주소를 받을 수 있음. 
	int a = 10;
	int b = 5;
	int c = 2;

	cout << squares(a) << endl; //pass by walue
	squares(&b); //pass by pointer
	cout << b << endl;

	squaresRef(c);//pass by reference


	return 0;
}