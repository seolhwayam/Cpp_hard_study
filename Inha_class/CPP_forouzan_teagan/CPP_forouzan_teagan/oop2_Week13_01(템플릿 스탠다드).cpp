/*���Ĵٵ� ���ø� ���̺귯��(STL) :  ���ø��� ����� ������� Ŭ������ �Լ����� ����
* ǥ������ �����ϴ� ���ø� ���̺귯�� ���� ������ ���꼺 �ִ� �Լ� ���� ����
* ��ũ�帮��Ʈ, �����迭 Ŭ����, ����, �˻� �Լ� ������ �Լ��� Ŭ���� ����
* �� ���ø����� ������� �ֱ� ������ Ȯ�� ����
* ���Ĵٵ� -> STL�� ǥ�� (������ �ۼ��� �ڵ� �����ϴµ��� ���� -> ǥ���̱� ������!)
* ���� -> ����, ȿ��
*/

#include<iostream>
#include<list> // stl
using namespace std;

void main() {
	list<int> iList;

	for (auto i = 0; i < 10; i++) {
		iList.push_back(i);
	}

	iList.remove(5); //

	//�����̳�: �ټ��� ������ ��� ������ �ϴ� Ŭ����(��ũ�� ����Ʈ, �����迭, ��, �� -> �����̳�)
    // �� ���õ� ����Ʈ �����̳�

	// old style
	list<int>::iterator it; //iterator ������ ���� ����ϰ� ����(�ݺ���)  list�ȿ� �ִ� ���ҵ��� �ϳ��� ������
	for (it = iList.begin(); it != iList.end(); ++it)//begin(������ġ ����) , ++it ���� ���� ++
		cout << *it << endl;

	//Modern Style
	for (auto k = iList.begin(); k != iList.end(); ++k) {
		cout << *k << endl;
	}


	
}
