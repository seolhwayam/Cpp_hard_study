//#pragma warning(disable:4996)
//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
//
//int main() {
//	//�� cstyle -> cpp style
//
//	char cstyle_1[] = "Hi~";
//	string cppstyle_1;
//
//	cppstyle_1 = cstyle_1; 
//	// �޸𸮻��� �ּҰ� ����Ǵ� �ű⶧���� ������ �޸� �ּҸ� ������ �� -> ������ ���� X
//	cppstyle_1[0] = 'A';
//
//	cout << cstyle_1 << endl;
//	cout << cppstyle_1 << endl;
//
//	// �� cpp style -> cstyle
//
//	string cppstyle_2 = "Hello!";
//	const char* cstyle_2 = NULL;
//	// ������
//
//	cstyle_2 = cppstyle_2.c_str();
//	// cpp��Ÿ���� �޸� �����ּҸ� , ������ ���ڿ��� �ּҸ� ���ͼ� �� ������ ������ ������ ����
//	// c_str�� �б����� ������ ���� + �׷��� �Ϻη� const ->  �� ����x
//	// string �迭�ȿ� �ִ� ���ڿ��� �б�����θ� ���ʹ�! -> c_str()
//
//	cout << cstyle_2 << endl;
//	cout << cppstyle_2 << endl;
//
//	// �� ���纻 �����
//	string cppstyle_3 = "Hello!";
//	char* cstyle_3 = new char[cppstyle_3.size() + 1]; // null���� ó�����ؼ� +1
//	// ������
//
//	strcpy(cstyle_3, cppstyle_3.c_str());
//	//�ּҸ� �޾Ƽ� �����Ͱ� ����Ű�� ������ �޸� �������ٰ� ����
//	//�Ϻ��� ī�Ǻ� ����
//
//	cstyle_3[0] = 'Y';
//	 
//	cout << cstyle_3 << endl; // Yello
//	cout << cppstyle_3 << endl; //Hello
//
//	delete[] cstyle_3;
//	cstyle_3 = NULL;
//
//
//	// �� ���ڿ� �Է¹ޱ�
//	char cstyle_4[10]; // 10�Ѿ �Է��ϰ� �Ǹ� ���߰Ե� | ���� ��ġ�� �ȵ��ư�
//	string cppstyle_4; // string�� ���� �־ ��� X
//
//	cin >> cstyle_4; //Inha University -> �߰��� �����̽��ٸ� �������� ������ -> cstyle : Inha / cppstyle : University �� ���� ��
//	//cin >> cppstyle_4;
//	
//	cin.getline(cstyle_4, 3); // �Ϲ��Լ� #include<string> �ʿ�  ������ ����
//	cin.clear();
//	getline(cin, cppstyle_4);
//
//	cout << cstyle_4 << endl;
//	cout << cppstyle_4 << endl;
//
//
//
//	return 0;
//}