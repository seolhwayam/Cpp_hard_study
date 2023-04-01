#include<iostream>
	using namespace std;

    // ① stack메모리 사용
	//char* reverString(const char* src, int size) {
	//	char revers[5]; //동적 할당 x | 정적 할당o  stack메모리

	//	for (int i = 0; i < size; i++) {
	//		revers[i] = src[size-i-1]; //4개지만 실질적으로 5개 이므로 마지막에어 -1 번째까지임! 반대로 출력해야하니까 -i-1
	//	}

	//	revers[size] = NULL;

	//	cout << revers;
	//	return revers;
	//}

	//②hip 메모리
	char* reverstring(const char* src, int size) {
		char* revers= new char[size+1]; //동적 할당 x | 정적 할당o  stack메모리

		for (int i = 0; i < size; i++) {
			revers[i] = src[size-i-1]; //4개지만 실질적으로 5개 이므로 마지막에어 -1 번째까지임! 반대로 출력해야하니까 -i-1
		}

		revers[size] = NULL;

		//cout << revers;
		return revers;
	}

	int main() {
		char original[] = "inha"; 
		//char original[] = {'i','n','h','a'} -> 에러(문자열에 끝에 null이 없다. 다른 메모리 침범)  | char original[] = {'i','n','h','a','\0'} -> 에러x
		cout << original << endl; //문자열 타입의 배열이 왔을 때, (null,0)문자 앞에까지 출력하도록 설계되어있음.
		
		//char* copy = reverString(&origianl[0], 4); 
		char* copy = reverstring(original, 4); //배열의 주소를 받음
		cout << copy << endl;

		delete[] copy;
		copy = nullptr;



		return 0;
	}
