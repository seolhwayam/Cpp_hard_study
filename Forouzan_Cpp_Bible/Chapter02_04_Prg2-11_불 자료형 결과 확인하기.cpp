//
// Created by rudnf on 2023-02-14.
//
#include <iostream>
using namespace std;

int main(){
    // �� ������ ���� ����ϴ� ���α׷�

    //��������
    bool x = 123; // true
    bool y = -8;  // true
    bool z = 0;   // false
    bool t = -0;  // false
    bool u = true;  //true (1)
    bool v = false; //false(0)

    //�� ���
    cout << "x�� ��: "<<x<<endl;
    cout << "y�� ��: "<<y<<endl;
    cout << "z�� ��: "<<z<<endl;
    cout << "t�� ��: "<<t<<endl;
    cout << "u�� ��: "<<u<<endl;
    cout << "v�� ��: "<<v<<endl;

    /*[�� Ÿ��]
     * ��(bool)
     * : ��(True) �Ǵ� ����(false) �� ��Ÿ���� ��
     *
     * �� ���ͷ�
     * : 0 (false) | 0�� �ƴ� �� (true=1)
     *
     * */
    return 0;
}