//
// Created by rudnf on 2023-02-23.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    /*�Ű������� �ִ� ������
     * : �ε� �Ҽ��� ���� ������ ����ϱ�*/

    //����
    double x = 1237234.1235;

    //�⺻ ��� ��� ����
    cout << fixed << setprecision(2)<<showpos<<setfill('*');

    //x�� 3���� �������� ���
    cout << setw(15) <<left<<x<<endl;
    cout << setw(15) << internal <<x <<endl;
    cout << setw(15)<<right <<x;
    return 0;
}