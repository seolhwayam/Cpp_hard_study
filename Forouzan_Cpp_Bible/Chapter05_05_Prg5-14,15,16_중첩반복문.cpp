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
    int rows_01;
    int cols_01;

    // �Է¹ޱ�
    cout << "���� ���� �Է��ϼ���: ";
    cin >> rows_01;
    cout << "���� ���� �Է��ϼ���: ";
    cin >> cols_01;

    // ���
    for (int count1 =1; count1 <= rows_01; count1++){
        for(int count2=1; count2 <= cols_01; count2++){
            cout <<"*";
        }
        cout <<endl;
    }

    /* ���� ���� ����ϱ�
     *  : �ݺ����� ��ø�ؼ� ���ڸ� ������ �������� ����ϴ� ���α׷�*/

    cout << "Prg 5-15 ���� ���� ����ϱ�"<<endl;

    // ����
    int rows_02;
    int cols_02;

    // �Է¹ޱ�
    cout << "���� ���� �Է��ϼ���: ";
    cin >>rows_02;
    cout <<"���� ���� �Է��ϼ���: ";
    cin >>cols_02;

    // ��ø �ݺ���
    for(int i=1;i<=rows_02;i++){
        for(int j =i; j<=i+cols_02-1;j++){
            cout <<j<<" ";
        }
        cout <<endl;
    }

    return 0;
}