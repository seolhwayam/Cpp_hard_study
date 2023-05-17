//#include <iostream>
//using namespace std;
//
//int main() {
//	// Old 버전
//	/*
//	char s[] = { 'H','e','l','l','o' };
//	void* ps;
//	ps = s;
//	for (int i = 0; i < sizeof(s); i++)
//		cout << *((char*)ps + i);
//	*/
//
//	// Modern(범위기반)
//	char letters[] = "Hello";
//	void* ps;
//	ps = letters;
//
//	//ranged based for loop (범위기반 for문) 
//	//① 예시1 
//	for (char letter : letters)  //letters안에 있는 원소를 하나씩 꺼냄
//		cout << letter;
//
//	//② 예시2
//	for (int i : {1, 3, 5, 7, -9})
//		cout << i;
//
//
//	return 0;
//}
