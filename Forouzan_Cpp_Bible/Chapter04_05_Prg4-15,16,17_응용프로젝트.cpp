//
// Created by rudnf on 2023-03-05.
//
#include <iostream>
using namespace std;

int main(){
    /*���� �Է��� ������� �л��� ���� ã��
     * : �л� ������ 2�� �Է¹ޱ�
     * : �ּҰ��� �ִ밪�� ������� ����� ���ؼ�
     * : �л��� ������ ã�� ���α׷�*/

    cout << "Prg4-15 ���� �Է��� ������� �л��� ���� ã��"<<endl;

    // ��������
    int score1, score2, score3, maxScore,minScore,score;

    // �Է¹ޱ�
    cout << "ù ��° ���� �Է� : ";
    cin >> score1;
    cout << "�� ��° ���� �Է� : ";
    cin >> score2;
    cout << "�� ��° ���� �Է� : ";
    cin >> score3;

    // ���� ū ���� ã��
    if(score1>score2&&score1>score3){
        maxScore = score1;
    }else if(score2>score1&&score2>score3){
        maxScore = score2;
    }else{
        maxScore = score3;
    }

    // ���� ���� ���� ã��
    if(score1<score2&&score1<score3){
        minScore = score1;
    }else if(score2<score1&&score2<score3){
        minScore = score2;
    }else{
        minScore = score3;
    }

    // �л� ������ ���ϰ� �ø��ϱ�(Ȧ���� ���� �ø�)
    int temp = maxScore+minScore;
    if(temp%2 ==1){
        temp+=1;
    }
    score = temp/2;

    // ��� ���
    cout << "�Է��� ���� = "<<score1<< " "<<score2 <<" "<<score3<<endl;
    cout << "�ּ� ������ �ִ� ���� = "<<minScore << " "<<maxScore<<endl;
    cout << "�л� ���� = "<<score<<endl;

    /*�ҵ� ������ ���� ���� ���ϱ�
     *  :  4���� ���� �ٸ� �ҵ� ������ ������� ������ ����ؼ� ����ϴ� ���α׷�*/


    cout << "Prg4-16 �ҵ� ������ ���� ���� ���ϱ�"<<endl;

    // ��������
    double income, tax;
    bool bracket1, bracket2,bracket3,bracket4;
    double limit1 = 10000.00, limit2=50000.00, limit3 = 100000.00;
    double rate1 = 0.05, rate2 = 0.10 ,rate3=0.15,rate4=0.20;

    // �Է¹ޱ�
    cout << "������ �޷��� �Է��ϼ��� : ";
    cin >> income;

    // �ҵ���� ã��
    bracket1 = (income<=limit1)&&(income>=0);
    bracket2 = (income>limit1)&&(income<=limit2);
    bracket3 = (income>limit2)&&(income<=limit3);
    bracket4 = (income>limit3);

    // ���ݰ��
    if(bracket1){
        tax=income*rate1;
    }else if(bracket2){
        tax = limit1*rate1+(income-limit1)*rate2;
    }else if(bracket3){
        tax = limit1*rate1+(limit2-limit1)*rate2+(income-limit2)*rate3;
    }else if(bracket4){
        tax = limit1*rate1+(limit2-limit1)*rate2+(limit3-limit2)*rate3+(income-limit3)*rate4;
    }else{
        cout <<"�Է¿� ������ �ֽ��ϴ�.";
        return 0;
    }

    // ���԰� ���� ���
    cout <<"���� = "<<income<<endl;
    cout <<"���� = "<<tax<<endl;

    /*�� �� ���ϱ�
     *  : �� �� ��ĥ�� �Է¹޾��� ��
     *  : �ش� ��¥�� ���� �� ��° ��¥���� ���ϴ� ���α׷�*/

    cout << "Prg4-17 �� �� ���ϱ�"<<endl;

    // ��������
    int month;
    int day;
    int totalDays = 0;

    // �Է¹ޱ�
    cout << "�� ������ �Է��ϼ���";
    cin >> month;
    cout << "��ĥ���� �Է��ϼ���";
    cin >> day;

    // �� ���� �� ��
    int m01=31;
    int m02=28;
    int m03=31;
    int m04=30;
    int m05=31;
    int m06=30;
    int m07=31;
    int m08=31;
    int m09=30;
    int m10=31;
    int m11=30;

    //switch ���ǹ��� ����ؼ� Ư�� �ޱ����� �� ���� ���

    switch(month){
        case 12: totalDays+=m11;
        case 11: totalDays+=m10;
        case 10: totalDays+=m09;
        case 9: totalDays+=m08;
        case 8: totalDays+=m07;
        case 7: totalDays+=m06;
        case 6: totalDays+=m05;
        case 5: totalDays+=m04;
        case 4: totalDays+=m03;
        case 3: totalDays+=m02;
        case 2: totalDays+=m01;
        case 1: totalDays+=0;
    }

    // ���� ����� ����
    totalDays +=day;

    // ��� ���
    cout <<"������ "<<totalDays<<"��° ���Դϴ�.";



    return 0;
}