//
// Created by rudnf on 2023-02-20.
//
#include <iostream>
#include <limits>
using namespace std;

int main(){
    /*double �ڷ����� �����÷ο�� ����÷ο�
     * : double �ڷ����� �����÷ο�� ����÷ο� Ȯ���ϱ�*/

    //double �ڷ����� �ִ밪�� �ּҰ� �˻�
    double num1 = +numeric_limits<double>::max();
    double num2 = -numeric_limits<double>::max();

    //double �ڷ����� �ִ밪�� �ּҰ� ���
    cout << "double�� �ִ밪 : "<<num1 <<endl;
    cout << "double�� �ּҰ� : "<<num2 <<endl;

    //���� 1000.00 ���ϱ�
    num1 *= 1000.00;
    num2 *= 1000.00;

    cout << "�����÷ο찡 �Ͼ num1 *1000�� �� : "<<num1<<endl;
    cout << "����÷ο찡 �Ͼ num2 *1000�� �� : "<<num2<<endl;

    return 0;
}
