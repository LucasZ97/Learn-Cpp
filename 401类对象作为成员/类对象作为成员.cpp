#define _CRT_SECRUE_NO_WARNINGS
#include <iostream>
#include<string>
using namespace std;

class Phone
{
public:
	Phone()
	{
		cout << "�ֻ����캯��" << endl;
	}
	Phone(string Name)
	{
		cout << "�ֻ����вι��캯������" << endl;
		m_PhoneName = Name;

	}
	~Phone()
	{
		cout << "�ֻ���������" << endl;
	}

	string m_PhoneName;
};

class Game
{
public:
	Game()
	{
		cout << "GameĬ�Ϲ��캯������" <<endl;
	}
	Game(string name)
	{
		cout<<"��Ϸ���вι��캯������"<<endl;
		m_GameName = name;
	}
	~Game()
	{
		cout << "Game������������" << endl;
	}

	string m_GameName;


};

class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person(string name,string phoneName,string gameName):m_Name(name),m_Phone(phoneName),m_Game(gameName)
	{
		cout << "Person���вι��캯������" <<endl;
	/*	m_Name = name;*/
	}

	void playGame()
	{
		cout << m_Name << "��" << m_Phone.m_PhoneName << "���ֻ�������" << m_Game.m_GameName << "��Ϸ" << endl;
	}


	~Person()
	{
		cout << "Person������������" << endl;
	}

	string m_Name;
	Phone m_Phone;
	Game m_Game;

};

void test01()
{
	Person p("Zhang san","iphone","wang zhe rong yao");
	p.playGame();
	//p.m_Phone.m_PhoneName = "iphone";
	//p.m_Game.m_GameName = "dou di zhu";
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}