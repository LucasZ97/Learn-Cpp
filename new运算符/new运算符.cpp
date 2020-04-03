#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "mo ren gou zao" << endl;
	}

	~Person()
	{
		cout << "xi gou " << endl;
	}

	Person(int a)
	{
		cout << "you can gou zao" << endl;
	}

};



void test01()
{
	//Person p1;
	Person* p2 = new Person;
	
	delete p2;
}


void test02()
{
	void *p = new Person;
	//当用void* 接收new出来的指针，会出现释放的问题。
	delete p;
	//无法释放
}



void test03()
{
	Person *pArray = new Person[10];
	//new开辟数组一定会调用默认构造函数,所以一定要提供默认构造函数
	Person pArray2[10] = { Person(1),Person(2) };
	//释放数组 []
	delete [] pArray;
}






int main()
{

	//test01();
	//test02();
	test03();
	return EXIT_SUCCESS;
}