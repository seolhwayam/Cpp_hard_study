//
// Created by rudnf on 2023-02-12.
//
#include <iostream>
using namespace std;
// 3ȸ �ŷ� ���� ���� �ܾ��� ���ϴ� ���α׷�


int main(){
    //���� ����
    int balance =0;
    int transaction;

    //ù ��° �ŷ� �� �ܾ� ����
    cout << "ù ��° �ŷ� �ݾ� �Է� : ";
    cin >> transaction;
    balance = balance + transaction;

    //�� ��° �ŷ� �� �ܾ� ����
    cout << "�� ��° �ŷ� �ݾ� �Է� : ";
    cin >> transaction;
    balance = balance + transaction;

    //�� ��° �ŷ� �� �ܾ� ����
    cout << "�� ��° �ŷ� �ݾ� �Է� : ";
    cin >> transaction;
    balance = balance + transaction;

    //���� �ܾ� ���
    cout << "������ ���� �ܾ���"<<balance<<"�޷��Դϴ�.";

    //=============================================
    // <���� �ڷ���>
    // ���� >> short int | int | long int
    // ��ȣ ���� ��(���λ�) >> unsigned
    return 0;
}
