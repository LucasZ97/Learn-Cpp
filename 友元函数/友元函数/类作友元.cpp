#include<iostream>
#include<string>
using namespace std;



class Building;


class GoodGuy
{
	

public:

	GoodGuy();
	void visit();


	Building * building;
};


class Building
{
	//class GoodGuy allow to use this class `s private
	friend class GoodGuy;

public:
	Building();
public:
	string m_SittingRoom;

private:

	string m_BedRoom;
};


Building::Building()
{
	m_SittingRoom = "ke ting";
	m_BedRoom = "wo shi";
}



GoodGuy::GoodGuy()
{
	building = new Building;
}



void GoodGuy::visit()
{
	cout << "Class goodguy is visting : " <<  building->m_SittingRoom << endl;
	cout << "Class goodguy is visting : " << building->m_BedRoom << endl;

}


void test01()
{
	GoodGuy gg;
	gg.visit();

}
int  main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}