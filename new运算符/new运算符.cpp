#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "mo ren gou zao" << endl;
	}

	~Person()
	{
		cout << "xi gou " << endl;
	}

	Person(int a)
	{
		cout << "you can gou zao" << endl;
	}

};



void test01()
{
	//Person p1;
	Person* p2 = new Person;
	
	delete p2;
}


void test02()
{
	void *p = new Person;
	//����void* ����new������ָ�룬������ͷŵ����⡣
	delete p;
	//�޷��ͷ�
}



void test03()
{
	Person *pArray = new Person[10];
	//new��������һ�������Ĭ�Ϲ��캯��,����һ��Ҫ�ṩĬ�Ϲ��캯��
	Person pArray2[10] = { Person(1),Person(2) };
	//�ͷ����� []
	delete [] pArray;
}






int main()
{

	//test01();
	//test02();
	test03();
	return EXIT_SUCCESS;
}