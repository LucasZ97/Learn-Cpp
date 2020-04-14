#include <iostream>

using namespace std;


class Animal
{
public:

	virtual void speak()
	{
		cout << " Animal are speaking " << endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "cat are speaking" <<endl;
	}
};


class Dog :public Animal
{
public:
	void speak() 
	{
		cout << "Dog are speaking " << endl;
	}
};

void doSpeak(Animal &animal)
{
	animal.speak();
}


void test01()
{

	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

int main()
{



	test01();
	return EXIT_SUCCESS;
}