//
// Created by rudnf on 2023-03-13.
//
#include <iostream>
#include <iomanip>
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

    /*���� ǥ �����
     *  : �ݺ����� ��ø�ؼ� 2~10������ ���� ũ���� ���� ǥ�� ����ϴ� ���α׷�*/

    // ���� size ����
    int size;

    // �Է¹ް� ��ȿ�� �˻�
    do{
        cout <<"ǥ�� ũ�⸦ �Է��ϼ���(2~10): ";
        cin >> size;
    }while(size <2 ||size >10);

    // ��ø �ݺ������� ǥ ���
    for(int i =1; i<=size; i++){
        for(int j =1; j<=size; j++){
            cout <<setw(4)<<i*j;
        }
        cout <<endl;
    }

    /*��ø�ݺ���
     *  : 1. �ݺ����� ������ ����. �ݺ��� ���ο� �ݺ����� ��ø�Ǿ� �����ϴ� ����
             (������ ��ø���� ���� ����ǰ�, �ٽ� �ܺ��� ��ø���� ����Ǵ°��� �ݺ�... )
          2. �ݺ����� ��ø�Ǹ� ���� Ƚ���� ���� ���·� �����Ѵ�. */


    return 0;
}