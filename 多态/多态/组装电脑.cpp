#include <iostream>
using namespace std;


class CPU
{
public:
	virtual void calculate() = 0;
};

class VideoCard
{
public:
	virtual void display() = 0;
};

class Memory
{
public:
	virtual void storage() = 0;
};

class Computer
{
public:
	Computer(CPU * cpu, VideoCard * vc, Memory * mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	void work()
	{
		m_cpu->calculate();

		m_vc->display();

		m_mem->storage();
	}

	~Computer()
	{
		if (m_cpu!=NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}

		if (m_mem != NULL)
		{
			delete m_cpu;
			m_mem = NULL;
		}
	}

		
private:
	CPU * m_cpu;
	VideoCard * m_vc;
	Memory * m_mem;
};



class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << " Lenovo的CPU开始工作了" << endl;
	}
};
class  LenovoGPU :public VideoCard
{
public:
	virtual void display()
	{
		cout << " Lenovo的GPU开始工作了" << endl;
	}
};
class  LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << " Lenovo的内存开始工作了" << endl;
	}
};



class IntelCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel的CPU开始工作了" << endl;
	}
};
class IntelGPU :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel的GPU开始工作了" << endl;
	}
};
class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel的内存开始工作了" << endl;
	}
};

void test()
{
	CPU * intelCpu = new IntelCPU;
	VideoCard * intelCard = new IntelGPU;
	Memory * intelMem = new IntelMemory;

	Computer * computer1 = new Computer(intelCpu, intelCard, intelMem);
	computer1->work();
	delete computer1;
}

void test01()
{
	CPU * lenovocpu = new LenovoCPU;
	VideoCard * lenovogpu = new LenovoGPU;
	Memory * memory = new LenovoMemory;

	Computer * computer2 = new Computer(lenovocpu, lenovogpu, memory);
	computer2->work();
	delete computer2;
}

int main()
{
	test();
	test01();
	return 0;
}