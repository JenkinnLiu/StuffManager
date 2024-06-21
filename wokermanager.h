#pragma once
#include<iostream>
#include<fstream>
#include "worker.h"
#define FILENAME "empFile.txt"
using namespace std;

class WorkerManager {
public:
	int m_EmpNum;

	int get_EmpNum();//统计人数

	bool m_FileIsEmpty;//标志文件是否为空

	Worker** m_EmpArray;//数组指针

	WorkerManager();

	void save();

	void Show_Menu();

	void init_Emp();

	void Add_Emp();

	void Show_Emp();

	void Del_Emp();

	void Mod_Emp();

	void Find_Emp();

	int IsExist(int id);

	void Sort_Emp();

	~WorkerManager(){
		if (this->m_EmpArray != NULL) {
			delete[] this->m_EmpArray;
		}
	}
	void exitSystem();
};

