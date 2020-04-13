#include <iostream>
using namespace std;


class Person
{

public:
	Person(string name,int age)
	{

		m_Age = age;
		m_Name = name;

	}

	bool operator==(Person &p)
	{
		if ((this->m_Age == p.m_Age) && (this->m_Name == p.m_Name))
		{
			return true;
		}
		return false;

	}


private:
	int m_Age;
	string m_Name;
};


void test01()
{

	Person	p1("Tom", 18);

	Person  p2("Tim", 18);

	if (p1 == p2)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1!= p2" <<endl;
	}


}
int main()
{
	test01();


	system("pause");
	return 0;
}