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
    cout <<"�� ū ���� = "<<larger<<endl;

    /*�� ������ ����ã��
     * : �Է¹��� �� ���ڰ� ������ �� ū��, ������, �� ������ ����ϴ� ���α׷�*/

    // ��������
    int number1,number2;

    // �Է¹ޱ�
    cout << "ù ��° ���� �Է� : ";
    cin >> number1;
    cout << "�� ��° ���� �Է� : ";
    cin >> number2;

    //if-else ���ǹ��� ��ø�ؼ� �ǻ� ����
    if(number1>= number2){
        if(number1>number2){
            cout << number1 << ">"<<number2<<endl;
        }else{
            cout << number1 <<"=="<<number2<<endl;
        }

    }else{
        cout << number1 << "<" <<number2<<endl;
    }

    /* ������ ������� ���� ���ϱ�
     *  : ���� ���� ���� �б⸦ ����ؼ� ������ ���ϴ� ���α׷�*/

    // ��������
    int score_2;
    char grade;

    // �Է¹ޱ�
    cout << "0~100�� ������ ���� �Է� : ";
    cin >> score_2;

    //if else ���ǹ��� ����� ���� ���� ���� �б�
    if(score_2 >=90){
        grade = 'A';
    }else if(score_2>=80){
        grade = 'B';
    }else if(score_2>=70){
        grade = 'C';
    }else if(score_2>=60){
        grade = 'D';
    }else{
        grade = 'F';
    }

    //���
    cout <<"���� ���� = "<<grade;

    /*���ǹ�
     * �� if(���ǹ�){���๮}
     * �� if(���ǹ�){
     *       ���๮
     *    }else{
     *       ���๮ }
     * �� if(���ǹ�){
     *       ���๮
     *    }else if(���ǹ�){
     *        ���๮  }
     *
     */



    return 0;
}