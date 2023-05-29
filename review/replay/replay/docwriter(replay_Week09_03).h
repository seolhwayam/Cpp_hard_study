#pragma once
#include<iostream>
#include<string>
using namespace std;

class DocWriter {
public:
	DocWriter();
	DocWriter(const string& fileName, const string& content);
	~DocWriter();

	void SetFileName(const string& fileName); //원본손실 x
	void SetContent(const string& content); // 원본손실 x
	void Write();

protected: //상속관계에 있을 경우 접근 허용
	string _fileName;
	string _content;
};

