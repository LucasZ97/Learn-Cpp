#include<iostream>
#include<string>
using namespace std;

class Building
{

	friend void goodGuy(Building *building);

public:
	Building()
	{
		m_SittingRoom = "¿ÍÌü";
		m_BedRoom = "ÎÔÊÒ";
	}
public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};

void goodGuy(Building *building)
{
	cout << "goodGuy is visting :" << building->m_SittingRoom << endl;
	cout << "goodGuy is visting :" << building->m_BedRoom << endl;
}

void test01()
{
	Building building;
	goodGuy(& building);
}


int  main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}