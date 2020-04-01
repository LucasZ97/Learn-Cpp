#define _CRT_SECRUE_NO_WARNINGS
#include <iostream>
#include<string>
using namespace std;

class Phone
{
public:
	Phone()
	{
		cout << "手机构造函数" << endl;
	}
	Phone(string Name)
	{
		cout << "手机的有参构造函数调用" << endl;
		m_PhoneName = Name;

	}
	~Phone()
	{
		cout << "手机析构函数" << endl;
	}

	string m_PhoneName;
};

class Game
{
public:
	Game()
	{
		cout << "Game默认构造函数调用" <<endl;
	}
	Game(string name)
	{
		cout<<"游戏的有参构造函数调用"<<endl;
		m_GameName = name;
	}
	~Game()
	{
		cout << "Game析构函数调用" << endl;
	}

	string m_GameName;


};

class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person(string name,string phoneName,string gameName):m_Name(name),m_Phone(phoneName),m_Game(gameName)
	{
		cout << "Person的有参构造函数调用" <<endl;
	/*	m_Name = name;*/
	}

	void playGame()
	{
		cout << m_Name << "用" << m_Phone.m_PhoneName << "牌手机，玩着" << m_Game.m_GameName << "游戏" << endl;
	}


	~Person()
	{
		cout << "Person析构函数调用" << endl;
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