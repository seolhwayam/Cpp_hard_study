//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
///*문자열 입력받기(cin)*/
//
//int main() {
//	char cstyle[10];
//	string cppstyle;
//
//
//	//cin >> cstyle;
//	//cin >> cppstyle;
//	/*
//	cin >> Inha Univ 
//	스페이스바가 구분자가 되어서 한 번의 입력으로
//	cin >> cstyle;
//	cin >> cppstyle;
//	입력됨
//	입력시에 빈칸(스페이스 키)는 구분자 역할
//	*/
//	cin.getline(cstyle, 3);
//	cin.clear();
//	getline(cin, cppstyle);
//	/*
//	* 
//	cin.getline(받을 변수, 사이즈) : 받을 변수에 입력된 cin의 값중 3사이즈 까지만 받는다
//	cin.clear : cin.getline에 받을 사이즈보다 오버해서 받으면 오류가 생긴다. 그 오류를 clear해줌
//	getline(cin,받을 변수) : cin.getline에서 받은 입력값을 받을 변수에 초기화
//	*/
//
//
//	cout << cstyle <<endl;
//	cout << cppstyle;
//
//
//
//	return 0;
//}