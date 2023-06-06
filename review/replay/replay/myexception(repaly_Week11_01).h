#pragma once
#pragma once
class MyException {
public:
	const void* sender; //예외를 throw한 객체의 주소
	const char* description; // 예외에 대한 설명
	int intfo; //부가정보

	MyException(const void* sender, const char* description, int info) {
		this->sender = sender;
		this->description = description;
		this->intfo = info;

		/*
		this키워드 : 현재 실행시점의 객체의 메모리 번지주소를 가지고 있다.
		*/
	}
};