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
		cout << "打印内容" << text <<endl;
		cout << "已打印次数" << mTimes <<endl;
		cout << "--------------" <<endl;
		mTimes++;
	}


private:                    //为了实现唯一性，将构造函数可见性改为private;
	Printer() 
	{
		mTimes = 0; 
	}

	Printer(const Printer&)
	{
	
	}

private:
	static Printer* pPrinter;  //因为构造函数可见性改为private，类外无法new一个新的对象，
	                           //所以用static定义一个静态的Printer类型的私有成员变量
	                           //为了保证成员变量的封装性，pPrinter的可见性也是Private;
	
	int mTimes;                

};

Printer* Printer::pPrinter = new Printer;



int main()
{
	Printer* printer = Printer::getInstance();
	printer->PrintText("升职报告!");
	printer->PrintText("入职合同!");
	printer->PrintText("提交代码!");
	
	return 0;
}