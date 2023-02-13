//
// Created by rudnf on 2023-02-13.
//
# include <iostream>
using namespace std;

int main(){
    // 이스케이프 문자를 사용하는 프로그램

    cout<<"Hello\n";  // \n : endl 같은 역할
    cout<<"Hi\t friends."<<endl; // \t : 탭문자
    cout<<"Buenos dias  \bamigos." <<endl; // \b : 이전 글자를 삭제
    cout<<"Hello\rBonjour mes amis."<<endl; // \r : 줄의 앞부분으로 커서를 옮기고 다시 입력(따라서 앞의 내용이 삭제)
    cout<<"This is a single quote\'."<<endl; // \' : 작은 따옴표 출력
    cout<<"This is a double quote\"."<<endl; // \" : 큰 따옴표 출력
    cout<<"This is how to print a backslash \\."; // \\ : 역슬래시 출력

    /* [이스케이프 문자]
     * \n : 줄바꿈 문자
     * \t : 탭 문자
     * \b : 백스페이스
     * \r : 캐리지 리턴(커서의 위치를 앞으로 이동)
     * \f : 폼피드(다음 페이지로 넘기기)
     * \' : 작은 따옴표
     * \" : 큰 따옴표
     * \\ : 역 슬래시
     * */

    return 0;

}