#include <iostream>
using namespace std;

struct StudentInfo {
	// ����ü ����
	int id;
	float grade;
	char bloodType;


}s3 = { 20201236,4.4f,'o' }, s4; //�� ������ ���� ���� �� �ʱ�ȭ | �� ����ü ���� ����
;
/* ����ü ����
����� : struct 

*/

int main() {
	// �� �Ϲ����� ����ü ���� ���� �� �ʱ�ȭ
	StudentInfo s1 = { 20201234,3.5f,'o' };
	StudentInfo s2 = { 20201235,3.7f,'A' };

	cout << s2.grade << endl;
	cout << s1.id << endl;
	cout << s3.bloodType << endl;

	//s4.bloodType = 'B'; //�� ����ü ���� �ʱ�ȭ
	//s4.id = 20201234;
	//s4.grade = 2.9f;

	s4 = s2; // ����(deepī�� / �ٸ� ���� �����)
	cout << s4.bloodType << endl;

	s4.bloodType = 'B';
	cout << s4.bloodType << endl;
	cout << s2.bloodType << endl;

	//����ü���� ����� ����
	return 0;
}