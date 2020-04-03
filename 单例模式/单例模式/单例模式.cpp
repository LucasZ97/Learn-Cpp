#include <iostream>
#include <string>
using namespace std;

class Printer 
{
public:
	static Printer* getInstance()
	{
		return pPrinter;
	}


	void PrintText(string text)
	{
		cout << "��ӡ����" << text <<endl;
		cout << "�Ѵ�ӡ����" << mTimes <<endl;
		cout << "--------------" <<endl;
		mTimes++;
	}


private:                    //Ϊ��ʵ��Ψһ�ԣ������캯���ɼ��Ը�Ϊprivate;
	Printer() 
	{
		mTimes = 0; 
	}

	Printer(const Printer&)
	{
	
	}

private:
	static Printer* pPrinter;  //��Ϊ���캯���ɼ��Ը�Ϊprivate�������޷�newһ���µĶ���
	                           //������static����һ����̬��Printer���͵�˽�г�Ա����
	                           //Ϊ�˱�֤��Ա�����ķ�װ�ԣ�pPrinter�Ŀɼ���Ҳ��Private;
	
	int mTimes;                

};

Printer* Printer::pPrinter = new Printer;



int main()
{
	Printer* printer = Printer::getInstance();
	printer->PrintText("��ְ����!");
	printer->PrintText("��ְ��ͬ!");
	printer->PrintText("�ύ����!");
	
	return 0;
}