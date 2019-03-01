#pragma once
#include<iostream>
#include<cstring>
using namespace std;
// MyString class declaration goes hereclass mystring


class MyString
{
private:
	char *str;
public:
	
	~MyString();

	MyString();

	MyString (const char *other);
	
	MyString (const MyString &other);//copy constructor
	
	MyString operator = (const MyString &other);//assingmrnt operator 
	
	MyString operator + (const MyString &other);//overlaoding operator
	
	bool operator ==(const MyString &other);//reational operator 

	const char *getc_str() const;	//getter fundtion of pointer of character
};
ostream& operator<< (ostream &out, MyString & other);//ostream operator


