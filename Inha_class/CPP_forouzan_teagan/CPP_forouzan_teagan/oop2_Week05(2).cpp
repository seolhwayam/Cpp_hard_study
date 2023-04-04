//#include<iostream>
//	using namespace std;
//
//    // ① stack메모리 사용
//	//char* reverString(const char* src, int size) {
//	//	char revers[5]; //동적 할당 x | 정적 할당o  stack메모리
//
//	//	for (int i = 0; i < size; i++) {
//	//		revers[i] = src[size-i-1]; //4개지만 실질적으로 5개 이므로 마지막에어 -1 번째까지임! 반대로 출력해야하니까 -i-1
//	//	}
//
//	//	revers[size] = NULL;
//
//	//	cout << revers;
//	//	return revers;
//	//}
//
//	//②hip 메모리
//	char* reverstring(const char* src, int size) {
//		char* revers= new char[size+1]; //동적 할당 x | 정적 할당o  stack메모리
//
//		for (int i = 0; i < size; i++) {
//			revers[i] = src[size-i-1]; //4개지만 실질적으로 5개 이므로 마지막에어 -1 번째까지임! 반대로 출력해야하니까 -i-1
//		}
//
//		revers[size] = NULL;
//
//		//cout << revers;
//		return revers;
//	}
//
//	int main() {
//		char original[] = "inha"; 
//		//char original[] = {'i','n','h','a'} -> 에러(문자열에 끝에 null이 없다. 다른 메모리 침범)  | char original[] = {'i','n','h','a','\0'} -> 에러x
//		cout << original << endl; //문자열 타입의 배열이 왔을 때, (null,0)문자 앞에까지 출력하도록 설계되어있음.
//		
//		//char* copy = reverString(&origianl[0], 4); 
//		char* copy = reverstring(original, 4); //배열의 주소를 받음
//		cout << copy << endl; //*copy 주소로 받음 그래서 copy가 원래 주소가 나와야한다. 
//							  // cout null 문자열 앞까지 찍도록 설계 되어있어서 문자가 나옴(이미 설계되어 있기 때문에) 
//
//		delete[] copy;
//		// delete[] copy; double free error 2번하면 안됨
//
//		copy = nullptr;
//
//
//
//		return 0;
//
//		//힙은 메모리 할당 >> 델리트 하기전까지 공간을 계속 써먹을 수 있다.
//		// 동적할당하는 공간을 받을 포인터만 있으면 계속 써먹을 수 있다.
//		// 
//	}
