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

    /*������ ���� �������� ����� �� �ְ� �ϴ� ������
     * : ������ ���� ����(10����, 8����, 16����)���� ����ϴ� ���α׷�*/

    //���� ����
    int z = 1237;

    //showbase���� 3���� ���ڸ� �������� �Է¹ޱ�
    cout << "z�� 10���� �� : "<<z <<endl;
    cout << "z�� 8���� �� : "<<oct <<z <<endl;
    cout << "z�� 16���� �� : "<<hex <<z <<endl;

    //showbase�� ����� ���·� z�� ������ �������� ���
    cout << "z�� 10���� �� : "<<showbase<<dec<<z <<endl;
    cout << "z�� 8���� �� : "<<showbase<<oct<<z <<endl;
    cout << "z�� 16���� �� : "<<showbase<<hex <<z <<endl;

    /*�ε� �Ҽ��� ������ ����ϱ�
     * : �ε� �Ҽ��� �ڷ����� ���õ� �� ���� ������ ����ϱ�*/

    //����
    double t = 1237;
    double v = 12376745.5623;

    //fixed�� showpoint ������ ���
    cout << "t�� ���� �Ҽ��� ���� : "<<t<<endl;
    cout << "t�� ���� ������ ����"<<showpoint<<t<<endl;

    //seientific ������ ���
    cout << "v�� ���� ǥ��� ���� : "<<v<<scientific;
    return 0;
}