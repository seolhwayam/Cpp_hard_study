////
//// Created by rudnf on 2023-05-21.
////
//#include <iostream>
//using namespace std;
//
//void swap(int&, int& second);
//
//int main(){
//    /*참조로 전달을 사용해서 스왑 함수 만들기
//     * : 참조로 전달을 사용해서 함수로 전달한 2개의 값을 스왑하는 프로그램*/
//
//
//    // 변수 2개 정의
//    int x = 10;
//    int y = 20;
//
//    // 스왑하기 전에 x와 y값 출력
//    cout << "스왑하기 전의 x와 y값" << endl;
//    cout <<"x : " <<x <<" " <<"y : "<< y << endl;
//
//    // 스왑 함수를 호출해서 변수 x와 y 스왑
//    swap(x,y);
//
//    // 스왑 후에 변수 x와 y의 값 출력
//    cout << "스왑 후에 변수 x와 y의 값" << endl;
//    cout <<"x : " <<x <<" " <<"y : "<< y << endl;
//
//    return 0;
//}
///* 매개변수로 전달된 값을 스왑하는 swap 함수
// * 참조로 전달을 사용해서
// * main에서 전달받은 변수의 값을 교환*/
//
//void swap(int& rX, int& rY){
//    int temp = rX;
//    rX = rY;
//    rY = temp;
//}
