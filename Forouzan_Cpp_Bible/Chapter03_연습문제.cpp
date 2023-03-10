//
// Created by rudnf on 2023-02-26.
//
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main(){
    // 01 short 자료형과 unsigned int 자료형의 최대값과 최소값을 찾는 프로그램
     cout << "01 short 자료형과 unsigned int 자료형의 최대값과 최소값을 찾는 프로그램 " <<endl;

     short short_num_max = numeric_limits<short>::max();
     short short_num_min = numeric_limits<short>::min();
     cout << "short 최댓값 : "<< short_num_max << "| short 최소값 : "<<short_num_min<<endl;

     unsigned int numsigned_int_max = numeric_limits<unsigned int>::max();
     unsigned int numsigned_int_min = numeric_limits<unsigned int>::min();
     cout << "unsigned int 최댓값 : "<<numsigned_int_max <<"|unsigned int 최소값 : " <<numsigned_int_min<<endl;

    // 02 long자료형과 longlong 자료형의 최대값과 최소값을 찾는 프로그램
    cout << "02 long자료형과 longlong 자료형의 최대값과 최소값을 찾는 프로그램 " <<endl;

    long long_num_max = numeric_limits<long>::max();
    long long_num_min = numeric_limits<long>::min();
    cout << "long 최댓값 : "<< long_num_max << "| long 최소값 : "<<long_num_min<<endl;

    long long longlong_max = numeric_limits<long long>::max();
    long long longlong_min = numeric_limits<long long>::min();
    cout << "longlong int 최댓값 : "<<longlong_max <<"|longlong 최소값 : " <<longlong_min<<endl;


    // 03 float자료형과 double 자료형의 최대값과 최소값을 찾는 프로그램
    cout << "03 float자료형과 double 자료형의 최대값과 최소값을 찾는 프로그램 " <<endl;

    float float_max = numeric_limits<float>::max();
    float float_min = numeric_limits<float>::min();
    cout << "float int 최댓값 : "<<float_max <<"|float 최소값 : " <<float_min<<endl;

    double double_max = numeric_limits<double>::max();
    double double_min = numeric_limits<double>::min();
    cout << "double 최댓값 : "<<double_max <<"|double 최소값 : " <<double_min<<endl;


    // 04 int 자료형의 정수를 입력받아서, 두 번째 자릿수를 추출한 뒤 출력하는 프로그램

    // 05 int자료형의 입력받아서, 첫 번째부터 세 번째 자릿수를 각각 출력하는 프로그램

    // 06 세 자릴수의 정수가 주어졌을 떄, 해당 숫자를 역순으로 하는 정수를 구성하고 출력하는 프로그램(ex 372 >> 273)

    // 07 시간을 입력으로 받았을 때, 이를 주,일(0~6일 사이의 값),시간(0~23시 사이의 값)으로 변환하는 프로그램

    // 08 시간을 시,분,초 단위로 입력받았을 때, 이를 초 단위로 변환하는 프로그램

    // 09 초 단위(long 자료형)를 입력받았을 때, 이를 시,분,초 단위로 변환하는 프로그램

    // 10 4개의 점수(int 자료형)를 입력받고, 이를 기반으로 평균 점수(double 자료형)를 찾아 출력하는 프로그램

    // 11 주어진 섭씨 온도(Celsius)를 화씨 온도(Fahrenheit)로 변환해서 출력하는 프로그램 ( 섭씨온도를 화씨온도로 변환하는 공식 F = (9/5)C +32)

    // 12 주어진 화씨 온도(Fahrenheit)를 섭씨 온도(Celsius)로 변환해서 출력하는 프로그램 ( 화씨온도를 섭씨온도로 변환하는 공식 C = (F-32)*5/9)

    // 13 아르바이트로 일주일에 기본 40시간을 일한다고 가정합니다.그리고 40시간을 넘겨 일을 하는 경우, 넘는 시급은 60%추가로 지급됩니다.
    //    일주일의 기본 급여와 추가로 일한 시간을 입력했을 때, 전체 급여를 구하는 프로그램

    // 14 1,400달러의 텔레비전, 220달러의 DVD플레이어, 35.20달러의 리모컨 3가지 제품을 판매하는 회사가 있습니다.
    //    고객이 구입한 장비의 수를 입력으로 받는다고 할 때, 8.25%의 소비세가 추가된 전체 비용을 계산하는 프로그램




    return 0;
}