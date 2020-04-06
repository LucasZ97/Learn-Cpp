#include<iostream>
using namespace std;


class Person
{
public:

	void ShowClassName()
	{
		cout << "This is Person class " << endl;

	}
	void ShowClassAge()
	{
		if (this == NULL)
		{
			return;
		}
		cout << "age = "<< m_Age << endl;
	}

	int m_Age;
};

void test03()
{
	Person *p = NULL;

	p->ShowClassName();
	p->ShowClassAge();
	

}

int main()
{
	test03();
	
	system("pause");
	return EXIT_SUCCESS;
}