#include<iostream>
#include"MyString.h"
using namespace std;

int main()
{	

	MyString s1;
	//cheking default constractor that copy itself
	MyString s2("billy");
	cout << s2 << endl;
	//checking a copy constructor
	MyString s3(s2);
	cout << "after the assignment of s3" << endl;
	cout<<s3 << endl;
	char a[] = "hello";
	//cheking the default constructor that accept the array
	MyString s4(a);	
	cout << "passing an array of to defalut constructor for s4" << endl;
	cout <<"s4:"<< s4 << endl;
	//checking assignment operator
	s1 = s2;
	cout << "s1 after using assignment operator" << endl;
	cout << s1 << endl;

	s1 = s2 = s3;
	cout << "s2" << "   " << s2 << endl;
	cout << "s3" << "     " << s3 << endl;
	

	if (s1 == s2)
	{
		cout << "they are the same" << endl;
	}
	else
		cout << "they are not equal" << endl;
//checking  the operator overloading operator to add to strings
	s1 = "jimmy";
	
	s1 = "hello";
	s2 = " world";
    s3 = s1 + s2;
	cout << "s3 after cocatnation" << endl;
	cout << s1 << "+" << s2 <<"  "  << "s3:" << s3 <<endl;
	
	
	cout << "Before assignment: " << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	s1 = s2;
	cout << "After assignment: " << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;

}