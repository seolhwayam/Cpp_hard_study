//
// Created by rudnf on 2023-02-21.
//
#include <iostream>
using namespace std;

int main(){

    /*boolalpha ������ ����ϱ�
     * : �� �ڷ����� boolalpha ������ ����ϱ�*/

    //����
    bool x = true;
    bool y = false;

    //������ ���� ���
    cout << "�⺻���� x�� ��� : "<<x <<endl;
    cout << "�⺻���� y�� ��� : "<<y <<endl;

    //�����ڸ� ����Ͽ� ���
    cout << "�����ڸ� ����� x�� �� : "<<boolalpha<<x<<endl;
    cout << "y�� �� : "<<y;
    return 0;
}