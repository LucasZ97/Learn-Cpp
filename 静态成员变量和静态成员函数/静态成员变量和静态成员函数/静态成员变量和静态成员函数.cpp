#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	static int m_Age; //加入static，就是静态成员变量，会共享数据。
	//静态成员变量，在类内声明，类外进行初始化。
	int m_A;
	static void func()
	{
		cout << "func " << endl;
		//m_A = 10;   //静态函数内的变量也要是静态的

	}

private:
	static int m_Other; //私有权限
	static void func2()
	{
		cout << "func2的调用" <<endl;
	}
};

int Person::m_Age = 0;
int Person::m_Other = 10;   //私有的static类外初始化  因为前面有Person，所以认为在{}内

int test01()
{
	//通过对象访问属性
	Person p1;
	p1.m_Age = 10;
	

	Person p2;
	p2.m_Age = 20;

	cout << p1.m_Age << endl;
	cout << p2.m_Age << endl;
	//都是20，因为共享数据

	cout << "通过类名访问Age" << Person::m_Age <<endl;
	/*cout << "通过类名访问other" << Person::m_Other << endl;*/  //不可访问

	p1.func();
	p2.func();



	//Person::func2();
	return 0;
}



int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
