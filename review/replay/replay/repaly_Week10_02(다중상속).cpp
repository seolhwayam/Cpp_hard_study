#include<iostream>
#include<string>
using namespace std;
/*
���߻��
: 2�� �̻��� �θ� Ŭ������ ���ÿ� ����ϴ� ���


*/
class UnderGradStudent {
public:
	string name;
	string dept;
};
class DormStudent {
public:
	string building;
	int roomNo;
};

class UnderGrad_DormStudent :
	public UnderGradStudent, public DormStudent {
public:

};


void main() {

	UnderGrad_DormStudent s1;
	s1.name = "������";
	s1.dept = "CSE";
	s1.building = "1st";
	s1.roomNo = 1024;



}