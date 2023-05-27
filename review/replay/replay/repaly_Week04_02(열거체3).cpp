#include<iostream>
using namespace std;

enum class Jave {PASS, FAIL};
enum class Python { PASS, FAIL };

enum  Cplusplus { PASS, FAIL };


/*
	열거체 PASS, FAIL 중복으로 오류

	해결법
	① namespace [Old Style
	  : 별도의 물리적인 공간을 따로 만들어서 해당 변수들이 개입하지 못하도록 하는 방법
	  - 사용법
	  namespace 이름{
	  enum 열거체 이름 {     ,         }
	  }

	  - 예시

	  namespace sophomore {
		enum Java { PASS, FAIL };
	  }

      namespace freshman {
	    enum Python { PASS, FAIL };
      }

	② enum Class [Mordern Style]
	- 사용법
	enum class 열거체 이름

	- 예시
	enum class Jave {PASS, FAIL};
	enum class Python { PASS, FAIL };


	*/


int main() {
	Cplusplus c = Cplusplus::PASS;

	switch (c)
	{
	case 0:
		cout << "합격 " << endl;
		break;
	case Cplusplus::FAIL:
		cout << "재수강!" << endl;
		break;
	default:
		break;
	}

	// enum 자체가 정수형으로 묵시적으로 변형되는 약한 결합
	// int -> c++ 타입으로 변경 불가능

	return 0;
}