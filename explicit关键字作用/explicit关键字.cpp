#define _CRT_SECRUE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyString
{
public:
	MyString(const char * str)
	{
		//
	};
	explicit MyString(int a)
	{

	}
	 
	char* mStr;
};


void test01()
{
	MyString str = "abc";
	MyString str3 = 10;
	MyString str2(10);
}
//explicit防止隐式类型转换

int main()
{
	

	system("pause");
	return EXIT_SUCCESS;
}