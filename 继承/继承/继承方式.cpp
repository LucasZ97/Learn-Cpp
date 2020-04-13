#include<iostream>
using namespace std;

class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;


};


class Son :public Base1
{
public:
	void func()
	{
		m_A = 10;
		m_B = 20;
		//m_C = 30;
	}
};


void test01()
{
	Son s1;
	s1.m_A = 100;
	//s1.m_B = 200;
}



class Son2 :protected Base1
{
public:
	void func()
	{
		m_A = 10;
		m_B = 20;
		//m_C = 30;
	}
};

void test02()
{
	Son2 s2;
	//s2.m_A = 100;
}

class Son3 :protected Base1
{
public:
	void func()
	{
		m_A = 10;
		m_B = 20;
		//m_C = 30;
	}
};

void test03()
{
	Son3 s3;
	//s3.m_A;
	
}