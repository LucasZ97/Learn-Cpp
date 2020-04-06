#include<iostream>
using namespace std;


class Person
{
public:
	Person(int age)
	{
		this->age = age;
	
	}

	int age;

	Person& PersonAddAge(Person &p)
	{
	
		this->age += p.age;
		return *this;
	
	}
};

void test01()
{
	Person	p1(18);
	cout << "P1 age = " << p1.age << endl;
	
}

void test02()
{
	Person p1(10);
	Person p2(12);
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2`s age is : " << p2.age << endl;
}


int main()
{

	test02();
	
	system("pause");
	return EXIT_SUCCESS;
}