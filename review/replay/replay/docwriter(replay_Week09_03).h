#pragma once
#include<iostream>
#include<string>
using namespace std;

class DocWriter {
public:
	DocWriter();
	DocWriter(const string& fileName, const string& content);
	~DocWriter();

	void SetFileName(const string& fileName); //�����ս� x
	void SetContent(const string& content); // �����ս� x
	void Write();

protected: //��Ӱ��迡 ���� ��� ���� ���
	string _fileName;
	string _content;
};

