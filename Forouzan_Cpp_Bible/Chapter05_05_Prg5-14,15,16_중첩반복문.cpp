//
// Created by rudnf on 2023-03-13.
//
#include <iostream>
using namespace std;

int main(){
    /* for �ݺ��� ��ø�ϱ�
     * : �ݺ����� ��ø�ؼ� * ��ȣ�� ������ �������� ����ϴ� ���α׷�*/

    cout << "Prg 5-14 for �ݺ��� ��ø�ϱ�"<<endl;

    // ����
    int rows;
    int cols;

    // �Է¹ޱ�
    cout << "���� ���� �Է��ϼ���: ";
    cin >> rows;
    cout << "���� ���� �Է��ϼ���: ";
    cin >> cols;

    // ���
    for (int count1 =1; count1 <=rows; count1++){
        for(int count2=1; count2<=cols; count2++){
            cout <<"*";
        }
        cout <<endl;
    }

    return 0;
}