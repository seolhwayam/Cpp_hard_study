//
// Created by rudnf on 2023-02-18.
//
#include <iostream>
using namespace std;

int main(){
    /*���� �Ҵ� - ���� �Ҵ� ǥ������ �� ���� �����ִ� ���α׷�*/

    // 5���� ���� ����� �ʱ�ȭ
    int x = 20;
    int y = 30;
    int z = 40;
    int t = 50;
    int u = 60;

    // ���� �Ҵ� ���
    x += 5;
    y -= 3;
    z *= 10;
    t /= 8;
    u %= 7;

    //���
    cout << "x�� �� : "<<x<<endl;
    cout << "y�� �� : "<<y<<endl;
    cout << "z�� �� : "<<z<<endl;
    cout << "t�� �� : "<<t<<endl;
    cout << "u�� �� : "<<u<<endl;

    return 0;

    /* 2) ���� �Ҵ�
     *   : �� �����ڴ� 2�� ���
     *     �� Ư�� ������ ����( += | -= | *= | /= | %= )
     *
     *  - lvalue & rvalue
     *    lvalue(���� ������) = rvalue(���� �ҽ�)
     *
     *    (x += 3) == (x = x+3)
     *                x�� ����, ������ ��� ����
     *
     *     >> ���� ���������� �ҽ��� ���� >> lvalue���� rvalue
     *   */

}