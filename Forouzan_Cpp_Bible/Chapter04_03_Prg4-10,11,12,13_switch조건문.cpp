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

    /*������ ������� ���� ����ϱ�
     *  : switch ������ ����ؼ� ������ ������� ���� ����ϱ�*/

    cout << "�� default�� �߰��� switch��" <<endl;

    // ��������
    int score;
    char grade_01;

    // �Է¹ޱ�
    cout << "0~100�� ������ ������ �Է��ϼ��� : ";
    cin >> score;

    // �ǻ����
    switch (score / 10) {
        case 10: grade_01 = 'A';
                break;
        case 9 : grade_01 = 'A';
                break;
        case 8 : grade_01 = 'B';
                break;
        case 7 : grade_01 = 'C';
                break;
        case 6 : grade_01 = 'D';
                break;
        default: grade_01 = 'F';

    }
    //���
    cout << "Score : "<<score<<endl;
    cout << "Grade : " << grade_01 << endl;

    /*������ ������� pass/fail ����ϱ�
     *  : switch ���ǹ��� ����ؼ� pass/fail ���� ã��*/

    cout << "�� switch�� �б����" <<endl;

    // ��������
    char grade_02;

    // �Է¹ޱ�
    cout << "������ �Է��ϼ���(A,B,C,D,F) : ";
    cin >> grade_02;

    // �ǻ����
    switch (grade_02) {
        case 'A':
        case 'B':
        case 'C': cout << "pass �Դϴ�.";
                  break;
        case 'D':
        case 'F': cout << "fail �Դϴ�.";
                  break;
        default: cout << "�Է� �����Դϴ�. �ٽ� �õ��ϼ���.";


    }


    /*switch
     *  : Ư���� ���� ������� ������ �б��� �� ���
     * �� switch(ǥ����){
     *         case ��1 : ���๮;
     *         case ��2 : ���๮;}
     *  case �� �ϳ��� �ɸ��� �Ʒ� ���๮ ��� ����
     *
     * �� switch(ǥ����){
     *         case ��1 : ���๮;
     *                    break;
     *         case ��2 : ���๮;
     *                    break;}
     *  case ���� �ɸ��� �ش� ���๮�� ������ ����
     *
     *  �� switch(ǥ����){
     *         case ��1 : ���๮;
     *         case ��2 : ���๮;
     *         default : ���ܹ�;}
     *  case ���� �ɸ��� �ʾƵ� default ���๮ ������ ����
     *
     *  - break : ����
     *  - default : ��� �б⿡�� �������� ���� ��� Ư�� ������ ������
     *       */




	return 0;
}