#include<iostream>
using namespace std;
/*
const_cast : const, volatile 등의 속성을 변경
[사용법]
const_cast<타입>(상수속성 제거할 변수)

volatile : 사전의미로는 휘발성
           컴퓨터가 변수를 상수로 만드는 작업을 함
		   그 작업에서 열외

*/

void main() {

	char univ[] = "Inga";
	const char* c1 = univ;
	char* c2;
	c2 = const_cast<char*>(c1);
	c2[0] = 'i';
	cout << c2 << endl;
	
}