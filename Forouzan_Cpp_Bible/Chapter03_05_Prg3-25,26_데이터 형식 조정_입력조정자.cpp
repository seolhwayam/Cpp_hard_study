//
// Created by rudnf on 2023-02-24.
//
#include <iostream>
using namespace std;

int main(){
    /*�� �ڷ������� �Է��ϱ�
     *  : �� �ڷ����� false�� true�� �Է¹ޱ�*/

    //����
    bool flag;

    //�����ڸ� ����ؼ� �Է¹ޱ�
    cout << "�� �ڷ����� true �Ǵ� false�� �Է� : "<<endl;
    cin >> boolalpha >> flag;

    //���
    cout << flag<<endl;

    /*���� �������� ���� �Է¹ޱ�*/

    //����
    int num1,num2,num3;

    //10������ ù ��° ���� �Է¹ޱ�(������ ����)
    cout << "ù ��° ���ڸ� 10������ �Է� : ";
    cin >> num1;
    //8������ �� ���� ���� �Է¹ޱ�
    cout << "�� ��° ���ڸ� 8������ �Է� : ";
    cin >>oct>> num2;
    //16������ �� ��° ���� �Է¹ޱ�
    cout << "�� ��° ���ڸ� 16������ �Է� : ";
    cin >>hex>> num3;

    //���
    cout << num1 <<endl;
    cout << num2 <<endl;
    cout << num3;

    /*�������� ����
     * :��Ȳ�� ���� ����� ������ �ٲ㼭 ����� �� ���
     *
     * 1. ��� ������
     * 2. �Է� ������
     *   �� �� �ڷ���
     *      noboolalpha >    0    1    �Է�
     *      boolalpha   > false  true  �Է�
     *
     *
     * /



    return 0;
}