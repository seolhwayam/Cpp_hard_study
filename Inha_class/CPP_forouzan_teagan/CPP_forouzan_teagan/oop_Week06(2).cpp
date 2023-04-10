#include<iostream>
using namespace std;


int main() {
	/*2차원 배열 (505쪽 보세용)
	  ① for문안에 for문 (일반적)
	  ② 포인터 배열 (stack -> heep (행렬))
	  ③ stack변수 ->>>>>> 전부다 heep
	     arr 지역변수

		 //해지를 잘해야됨!!!!! (delete 중요)
		 1) heep지우기
		 2) stack 지우기


		 for(int i =0 ; i<n+1; i++){
		 delete[] pascal[i]
		 }

		 delete[] pascal;
		 pascal = nulptr;

		 행 -->>>>
		 열 ↓↓↓↓↓↓

	  */

	int total = 0;
	int student; //행 , 열
	int subject;
	cout << "힉생의 수 입력 : " << endl;
	cin >> student;

	cout << "수강과목 수 입력 : " << endl;
	cin >> subject;

	int** Scores = new int* [student];

	for (auto i = 0; i < student; i++) {
		*(Scores + i) = new int[subject];
	    // Scores[i] 가능
	}

	/*
	학생 수(행), 수강과목 수(열)을 입력받아 각 학생의 총점과
	평균을 구하는 프로그램을 작성하시오
	*/

	for (int i = 0; i < student; i++) {
		cout << i + 1 << "번 학생" << endl;
		for (int k = 0; k < subject; k++) {
			cout << k + 1 << "번 과목의 성적" << endl;
			cin >> Scores[i][k];
		}
	}

	
	/*for (int i = 0; i < student; i++) {
		cout << i + 1 << "번 학생" << endl;
		for (auto j = 0; j < subject; j++) {
			cout << j + 1 << "과목 성적 입력:" << endl;
			cin >> Scores[i][j];
		}
	}

	for (int i = 0; i < student; i++) {
		total = 0;
		for (auto j = 0; j < subject; j++) {
			total = total + Scores[i][j];
		}

		cout << i + 1 << "번 학생의 총점 :  " << total << endl;
		cout << i + 1 << "번 학생의 평균 :  " << total/(double)subject << endl;
	}*/


	
	for (auto i = 0; i < student; i++) {
		delete[] *(Scores + i);
		// delete scores[i];
	}

	delete[] Scores;
	Scores = nullptr;
	
	// 삭제한거 또 삭제시 더블 프리!! (안된다!) double free bug
	// 더블프리!!!주의!!!

	return 0;
}