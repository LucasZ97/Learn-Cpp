#include<iostream>
using namespace std;

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

// cl /d1 reportSingleClassLayoutSon
class Son :public Base
{
public:
	int m_D;
};

void test01()
{
	cout << "size of son = " << sizeof(Son) << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}