#include <iostream>
#include <string>
using namespace std;


class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;

	}

};


void MyPrint02(string test)
{
	cout << test << endl;
}

	
void test01()
{

	MyPrint myPrint;
	myPrint("Hello World!");

	MyPrint02("Hello World");
}


class MyAdd
{
public:
	int operator()(int num1,int num2)
		{

		return  num1 + num2 ;

		}
};

void test02()
{

	MyAdd a1;
	int ret = a1(1, 2);

	cout << "ret =" << ret <<  endl;
	cout << "ret = " << MyAdd()(100, 100) << endl; //匿名函数对象

	return;

}






int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}