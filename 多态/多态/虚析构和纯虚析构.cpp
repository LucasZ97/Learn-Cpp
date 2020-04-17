#include<iostream>
#include <string>


using namespace std;


class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" <<endl;
	}
	virtual void speak() = 0;
	virtual ~Animal()
	{
		cout << "Animal析构函数调用" << endl;
	}
};


class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat的构造函数" <<endl;
		m_Name = new string(name);
	}

	virtual void speak()
	{
		cout << * m_Name << "小猫在说话" << endl;
	}
	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat的析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
		
	}

	string *m_Name;
};


void test01()
{
	Animal *animal = new Cat("Tom");
	animal->speak();
	delete animal;
}

int main()
{
	test01();

	return 0;
}