//
// Created by rudnf on 2023-02-19.
//
#include <iostream>
using namespace std;

int main(){
    /*�Ϲ��� �ڷ��� �°�
     * - ��� �����ڰ� ���� �ڷ���(bool,char,short,float)
     * - ��� �����ڸ� �����ؼ� �Ϲ��� �ڷ��� ��ȯ�ϱ�       */

    //����
    bool x = true;
    char y = 'A';
    short z = 14;
    float t = 24.5;

    //bool���� int�� �ڷ��� ��ȯ
    cout << "x + 100�� �ڷ��� : "<<typeid(x + 100).name()<<endl;
    cout << "x + 100�� �� : "<<x+100<<endl;

    //char���� int�� �ڷ��� ��ȯ
    cout <<"y + 1000�� �ڷ��� : "<<typeid(y + 1000).name()<<endl;
    cout << "y + 1000�� �� : "<<y + 1000<<endl;

    //short���� int�� �ڷ��� ��ȯ
    cout <<"z + 100�� �ڷ��� : "<<typeid(z * 100).name()<<endl;
    cout << "z + 100�� �� : "<<z * 100<<endl;

    //float���� double�� �ڷ��� ��ȯ
    cout <<"t + 15000.2�� �ڷ��� : "<<typeid(t + 15000.2).name()<<endl;
    cout << "t + 15000.2�� �� : "<<t + 15000.2<<endl;

    return 0;

    /* �ڷ��� ��ȯ
     * 1. �Ϲ��� �ڷ��� ��ȯ(�ڵ�)
     *  : �ڷ����� �ڵ����� ��ȯ�Ǵ� ��
     *
     *  1) �Ϲ��� �ڷ��� �°�
     *     : ���� �ڷ����� �ǿ����ڸ� �� ū �ڷ������� �°�
     *       �� �ǿ������� �ڷ����� ��� ���꿡 �������� �ʴ� ���(�� �Ǵ� ����)
     *       �� �ǿ������� �ڷ����� ���� �����ڰ� ���� ���(short �Ǵ� float)
     *
     *       <�Ϲ��� �ڷ��� �°�>
     *         ���� �ڷ���         �°ݵ� �ڷ���
     *         bool                 int
     *         char                 int
     *         short                int
     *         unsigned short       unsigned int
     *         float                double
     *
     *        bool, char , short �ڷ��� >> int
     *        float �ڷ��� >> double
     *
     *
     *
     *  2) �Ϲ��� �ڷ��� ����
     * */
}