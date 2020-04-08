#include<iostream>

using namespace std;

class Person
{
public:

	//Person operator+(Person &p)
	//{
	//	Person temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;

	//	return temp;

	//}


	int m_A;
	int m_B;



};

Person operator+(Person &p1, Person &p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_B;
	temp.m_B = p1.m_B + p2.m_B;

	return temp;


}


Person operator+(Person &p1, int number)
{
	Person temp;
	temp.m_A = p1.m_A + number;
	temp.m_B = p1.m_B + number;

	return temp;




}

void test01()
{
	Person p1;
	Person p2;


	p1.m_A = 11;
	p1.m_B = 20;


	p2.m_A = 10;
	p2.m_B = 20;


	//Person p3 = p1 + p2;

	//cout << "p3.m_A : " << p3.m_A<< endl;
	//cout << "p3.m_B : " << p3.m_B<< endl;

	Person p3 = p1 + 10;

	cout << p3.m_A << endl;

}



int main()
{

	test01();
	system("pause");
	return EXIT_SUCCESS;
}