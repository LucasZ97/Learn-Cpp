#include<iostream>
#include<string>
using namespace std;



class Building;
class GoodGuy
{
public:

	GoodGuy();

	Building * building;

	void visit();    //visit���Է���building�е�˽�г�Ա
	void visit2();     //visit�����Է���building�е�˽�г�Ա
};


class Building
{
	friend void GoodGuy::visit();

public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
	

}

GoodGuy::GoodGuy()
{
	building = new Building;
}


void GoodGuy::visit()
{
	cout << "func visit() is visiting : " << building->m_SittingRoom <<endl;
	cout << "func visit() si visiting : " << building->m_BedRoom << endl;
	


}
void GoodGuy::visit2()
{

	//cout << "func visit() si visiting : " << building->m_BedRoom << endl;

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