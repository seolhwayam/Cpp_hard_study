//
// Created by rudnf on 2023-02-28.
//
#include <iostream>
using namespace std;

int main(){
    /*������ ������� �հ�/���հ� Ȯ���ϱ�
     * : if-else ���ǹ��� ����ؼ� �շ�/���հ� ���� ã��*/

    //���� ����
    int score;

    //�Է¹ޱ�
    cout << "0~100�� ������ ������ �Է��ϼ��� : ";
    cin >>score;

    //�ǻ� ����
    if(score >= 70){
        cout <<"pass�Դϴ�."<<endl;
    }else{
        cout <<"fail�Դϴ�."<<endl;
    }

    /*�� ���� �߿��� ū ���� ã��
     * : if -else ���ǹ��� ����ؼ� �Է¹��� �� ū ���� �Ǵ� ���ڰ� ���� ��� ù ��° ���ڸ� ����ϴ� ���α׷�*/

    //���� ����
    int num1,num2;
    int larger;

    //�Է¹ޱ�
    cout << "ù ��° ���� �Է� : ";
    cin >> num1;
    cout << "�� ��° ���� �Է� : ";
    cin >>num2;

    //�ǻ� ����
    if(num1>=num2){
        larger=num1;
    }else{
        larger=num2;
    }

    //��� ���
    cout <<"�� ū ���� = "<<larger;

    /**/


    return 0;
}