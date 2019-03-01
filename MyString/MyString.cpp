// Mystring implementation file
#include"Mystring.h"

 MyString::MyString()
{
	str = nullptr;
}
 MyString::~MyString()
 {
	 cout << "destructor is used" << endl;
	 delete[] str;
 }

 MyString:: MyString(const char *other)
 { 
	 cout << "copy constructor is used" << endl;
	 int size = strlen(other) + 1;
	 str = new char[size];
	 strcpy_s(str, strlen(other) + 1, other);

 }

 const char * MyString ::getc_str() const
 {
	 return str;
 }
 
MyString:: MyString(const MyString &other)//copy constructor
{
	int size = strlen(other.str) + 1;
	str = new char[size];
	strcpy_s(str, strlen(other.str) + 1, other.str);
}

MyString MyString ::operator = (const MyString &other)
{
	if (this != &other)
	{
		delete[] str;
		int size = strlen(other.str) + 1;
		str = new char[size];
		strcpy_s(str, size, other.str);
	}
	return *this;
}

MyString MyString::operator + (const MyString &other)
{
	MyString temp;
	int size = (strlen(other.str) + 1) + strlen(str) + 1;
	temp.str = new char[size];
	strcpy_s(temp.str, size, str);
	strcat_s(temp.str, size, " ");
	strcat_s(temp.str, size, other.str);
	return temp;
}
bool MyString :: operator ==(const MyString &other)
{
	bool status;
	if (strcmp(str, other.str) == 0)
	{
		status = true;
	}
	else
		status = false;
	return status;
}

ostream& operator<< (ostream &out, MyString & other)
{
	out << other.getc_str();
		return out;
}



