#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	static int m_Age; //����static�����Ǿ�̬��Ա�������Ṳ�����ݡ�
	//��̬��Ա������������������������г�ʼ����
	int m_A;
	static void func()
	{
		cout << "func " << endl;
		//m_A = 10;   //��̬�����ڵı���ҲҪ�Ǿ�̬��

	}

private:
	static int m_Other; //˽��Ȩ��
	static void func2()
	{
		cout << "func2�ĵ���" <<endl;
	}
};

int Person::m_Age = 0;
int Person::m_Other = 10;   //˽�е�static�����ʼ��  ��Ϊǰ����Person��������Ϊ��{}��

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
	/*cout << "ͨ����������other" << Person::m_Other << endl;*/  //���ɷ���

	p1.func();
	p2.func();



	//Person::func2();
	return 0;
}



int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
