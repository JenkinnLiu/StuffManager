#pragma once
#include<iostream>
#include<fstream>
#include "worker.h"
#define FILENAME "empFile.txt"
using namespace std;

class WorkerManager {
public:
	int m_EmpNum;

	int get_EmpNum();//ͳ������

	bool m_FileIsEmpty;//��־�ļ��Ƿ�Ϊ��

	Worker** m_EmpArray;//����ָ��

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

