#include <iostream>
using namespace std;


class Person
{
public:
	//this指针的本质是指针常量 指针的指向是不可以修改的
	void showPerson() const
	{
		//m_A = 100;
		m_B = 200;
	}

	void func()
	{



	}


	int m_A;
	mutable int m_B;

};

void test01()
{
	Person p;
	p.showPerson();
	

}


void test02()
{

	const Person p2;
	//p2.m_A = 100;
	p2.m_B = 200;
	//p2.func();
	p2.showPerson();
}


int main()
{

	system("pause");
}