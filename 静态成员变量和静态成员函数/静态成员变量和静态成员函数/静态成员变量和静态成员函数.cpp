#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	static int m_Age; //����static�����Ǿ�̬��Ա�������Ṳ�����ݡ�
	//��̬��Ա������������������������г�ʼ����
};

int Person::m_Age = 0;


int test01()
{
	//ͨ�������������
	Person p1;
	p1.m_Age = 10;
	

	Person p2;
	p2.m_Age = 20;

	cout << p1.m_Age << endl;
	cout << p2.m_Age << endl;
	//����20����Ϊ��������

	cout << "ͨ����������Age" << Person::m_Age <<endl;

	return 0;
}



int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
