#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
#include "employee.h"
#include "boss.h"
#include "manager.h"
#include <fstream>
#define FILENAME "emFile.txt"

class WorkerManager
{

public:

	WorkerManager();

	void Show_Menu();


	void exitSystem();

	void Add_Emp();

	int m_EmpNum;

	Worker ** m_EmpArray;

	void save();


	bool m_FileIsEmpty;

	int get_EmpNum();

	void init_Emp();

	~WorkerManager();
};

