//
// Created by rudnf on 2023-02-20.
//
#include <iostream>
#include <limits>
using namespace std;

int main(){
    /*unsigned int �ڷ����� �����÷ο�� ����÷ο�
     * - ��ȣ ���� ���� �ڷ����� �����÷ο�� ����÷ο� Ȯ���ϱ�*/

    //��ȣ ���� ������ �ִ밪�� �ּҰ� �˻�
    unsigned int num1 = numeric_limits<unsigned int>::max();
    unsigned int num2 = numeric_limits<unsigned int>::min();

    //�ִ밪�� �ּҰ� ���
    cout << "��ȣ ���� ������ �ִ밪 : "<< num1 <<endl;
    cout << "��ȣ ���� ������ �ּҰ� : "<< num2 <<endl;

    //������ �����÷ο�� ����÷ο� ����
    num1 +=1;
    num2 -=1;

    //�����÷ο�� ����÷ο�� �� ���
    cout << "�����÷ο찡 �Ͼ num1 + 1�� �� : "<<num1 <<endl;
    cout << "����÷ο찡 �Ͼ num2 - 1�� �� : "<<num2 <<endl;

    return 0;

    /*������ �����÷ο�� ����÷ο�
     * �����ڷ���
     * 1. ��ȣ ���� ������ �����÷ο�� ����÷ο�
     *    �ִ밪���� ū �� ��� �� >> �����÷ο�
     *    �ּҰ����� ���� �� ��� �� >> ����÷ο�
     *
     *    �����÷ο�� ����÷ο� �߻��ϸ� �� ������ ���Ƽ� ������ ��Ű���� �մϴ�.
     *
     * */
}