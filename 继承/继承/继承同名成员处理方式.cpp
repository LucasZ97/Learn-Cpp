#include<iostream>

using namespace std;

class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base - func ()的函数调用" << endl;
	}
	void func(int a)
	{
		cout << "Base - func ()的带参数函数调用" << endl;
	}

	int m_A;
};

class Son : public Base
{
public:

	Son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son - func ()的函数调用" << endl;

	}
	int m_A;
};


void test01()
{
	Son s;

	cout << "m_A = " << s.m_A << endl;
	cout << "Base下的m_A = " << s.Base::m_A << endl;

}

void test02()
{
	Son s;

	s.func();



}



int main()
{
	//test01();
	test02();
	return EXIT_SUCCESS;

}
