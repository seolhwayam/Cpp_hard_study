#include<iostream>
using namespace std;

int main() {
	/*���� ����ϱ�
	 : switch���ǹ��� ����ؼ� Ư�� ���Ϻ��� ������ ���ϱ��� ����ϴ� ���α׷�*/

	// ��������
	int day;

	// �Է¹ޱ�
	cout << "0~6 ������ ������ �Է��ϼ���";
	cin >> day;

	//switch ���ǹ�(�ǻ� �����ϰ� ���)
	switch (day)
	{
	    case 0: cout << "�Ͽ���" << endl;
		case 1: cout << "������" << endl;
		case 2: cout << "ȭ����" << endl;
		case 3: cout << "������" << endl;
		case 4: cout << "�����" << endl;
		case 5: cout << "�ݿ���" << endl;
		case 6: cout << "�����" << endl;

	}

    /*�־��� ��¥�� ���� ����ϱ�
     * : switch ���ǹ��� break ������ �����ؼ� ������ ����ϴ� ���α׷�*/

    cout << "�� break�� �߰��� switch��" <<endl;

    switch (day)
    {
        case 0: cout << "�Ͽ���1" << endl;
                cout << "�� ���� ù ��° ���� �Դϴ�."<<endl;
        case 1: cout << "������" << endl;
                break;
        case 2: cout << "ȭ����" << endl;
                break;
        case 3: cout << "������" << endl;
                break;
        case 4: cout << "�����" << endl;
                break;
        case 5: cout << "�ݿ���" << endl;
                break;
        case 6: cout << "�����" << endl;
                cout <<"�� ���� ������ �����Դϴ�."<<endl;
                break;

    }




	return 0;
}