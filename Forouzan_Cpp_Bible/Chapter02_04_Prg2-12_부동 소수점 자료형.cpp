//
// Created by rudnf on 2023-02-14.
//
#include <iostream>
using namespace std;

int main(){
    /* ���� ������ �ѷ����ϱ�
     * : ���� �������� ������� �ѷ��� ������ ���ϴ� ���α׷� */

    // ��� ����
    const double PI = 3.14159;

    // ���� 3�� ����
    double radius;
    double perimeter;
    double area;

    // ������ �Է¹ޱ�
    cout << "���� ������ �Է�:";
    cin >> radius;

    // �ѷ��� ������ ����ϰ� ������ ����
    perimeter = 2 * PI * radius;  // 2�� ���
    area = PI * PI * radius;

    // ������, �ѷ�, ���� ���
    cout << "������ : " << radius << endl;
    cout << "�ѷ� : " << perimeter <<endl;
    cout << "���� : " << area;
    

    return 0;

    /* �ε� �Ҽ��� �ڷ���
     * �ε� �Ҽ���
     * : �� �Ҽ����� ���� ����
     *   �� ��� ��ȣ�� �ִ�
     *   �� float / double / long double
     *   �� ���ͷ��� double�� �⺻����
     *
     * ���ͷ� ũ���� �����ϴ� ���̻�
     * float         |  f or F
     * double        |
     * long double   |  l or L
     * */




}
