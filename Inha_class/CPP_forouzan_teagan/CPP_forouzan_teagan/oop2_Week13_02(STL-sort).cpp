//#include<iostream>
//#include<functional>
//#include<algorithm> // ����, �˻���� ���� �˰����� �����س��� �Լ����� ����
////sort(�⺻�� ��������), find(�����˻� �˰��� : ó������ �˻�) ,replace(ã�� -> ����), reverse(�ݴ��), binary_search �Լ�
//
//#include<list> // ��ũ�� ����Ʈ(����, ������ ����) -> ������Ʈ ����� �� ����
//#include<vector> // ���� �迭(�˻� ���ֿ� ���� -> ������Ʈ ���� ��
//// map, deque �����ϱ�
//
//using namespace std;
//
//bool myfunc(int i, int j) { return i > j; } //��������(true)
//
////bool myfunc(int i, int j) { return i < j; } //��������(false)
//
//
//struct mystruct
//{
//	bool operator() (int i, int j) { return (i > j); } //��������(true)
//}myobject;
//
//class myclass
//{
//public:
//	bool operator() (int i, int j) { return (i > j); } //��������(true)
//}myobj2;
//
//
//void main() {
//	//�� vector �˻� ����
//
//	vector<char> vec;
//	vec.push_back('e');
//	vec.push_back('b');
//	vec.push_back('a');
//	vec.push_back('d');
//	vec.push_back('c');
//
//	//sort(first,last,comp)
//    //comp : �Լ��̿� , Ŭ���� ��ü�̿�, ����ü �̿�
//
//	//�� �Լ� �̿�
//	cout << "�Լ� �̿� " << endl;
//
//	sort(vec.begin(), vec.end()); //��������
//	
//	for (auto v : vec)
//		cout << v <<endl;
//
//
//	sort(vec.begin(), vec.end(),myfunc); //��������
//
//	for (auto v : vec)
//		cout << v << endl;
//
//
//	//�� ������ ���� �̿�
//	cout << "����ü ���� �̿� " << endl;
//
//	sort(vec.begin(), vec.end(), myobject); //��������
//
//	for (auto v : vec)
//		cout << v << endl;
//
//
//	//�� ��ü �̿�
//	cout << "��ü �̿� " << endl;
//
//	sort(vec.begin(), vec.end(), myobj2); //��������
//
//	for (auto v : vec)
//		cout << v << endl;
//
//	//�� #include<functional>
//	sort(vec.begin(), vec.end(), greater<char>()); //��������
//
//	for (auto v : vec)
//		cout << v << endl;
//
//	//�� ���� �Լ�(�Լ� Ȯ��)
//	sort(vec.begin(), vec.end(), [](int i, int j) {return i > j; }); //��������
//	// �� ���� �Լ�
//	// ĸó����Ʈ [] + (�Ű����� Ÿ�� �����̸� , �Ű����� Ÿ�� �����̸�){return ���ϰ�;}
//
//	for (auto v : vec)
//		cout << v << endl;
//
//
//
//}