#pragma once
#include<iostream>
#include<string>
using namespace std;

class Worker {
	
public:
	int m_Id;
	string m_Name;
	int m_DeptId;//部门名称编号
	virtual void showInfo() = 0;//显示个人信息

	virtual string getDeptName() = 0;//获取岗位名称

	
};