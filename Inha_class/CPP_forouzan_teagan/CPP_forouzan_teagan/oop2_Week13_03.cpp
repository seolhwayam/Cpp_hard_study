#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>

using namespace std;

void main() {

	vector<char> vec;
		vec.push_back('e');
		vec.push_back('b');
		vec.push_back('a');
		vec.push_back('d');
		vec.push_back('c');
		
		//① #include<functional>
		sort(vec.begin(), vec.end(),greater<char>()); //내림차순
		
		for (auto v : vec)
			cout << v <<endl;

		//② 람다 표현식(함수 확장)
		sort(vec.begin(), vec.end(), [](int i, int j) {return i > j; }); //내림차순

		for (auto v : vec)
			cout << v << endl;


	




}