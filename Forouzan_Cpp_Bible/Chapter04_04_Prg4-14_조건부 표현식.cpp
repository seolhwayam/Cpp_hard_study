//
// Created by rudnf on 2023-03-05.
//
#include <iostream>
using namespace std;

int main(){
    /*���Ǻ� ǥ����
     *  : �� ���ڸ� �Է¹��� �ڿ� �� ���� �߿� �� ū ���� �Ǵ� ���� ��� ù ��° ���ڸ� ���Ǻ� ǥ�������� ã�� ����ϱ�*/

    // ��������
    int num1,num2;
    int larger;

    // �Է¹ޱ�
    cout << "ù ��° ���� �Է� : ";
    cin >> num1;
    cout << "�� ��° ���� �Է� : ";
    cin >> num2;

    // �ǻ� ����
    larger = num1>=num2 ? num1 : num2;

    // ���
    cout << "�� ū ���� = "<< larger;

    /*���Ǻ� ǥ����(���׿�����)
     * �� ���� ? ǥ����1 : ǥ����2 ;
     * �� ������ true >> ǥ���� 1 | false >>> ǥ����2
     * �� ������ �ڷ����� true �Ǵ� false������ ��ȯ������ ǥ����
     * */


    return 0;
}