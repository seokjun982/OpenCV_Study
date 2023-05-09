#pragma once
#include "common.h"
class CDate
{
public :
	CDate() { year = month = day = 0; }
	CDate(int _year, int _month, int _day)
	{ year = _year, month = _month, day = _day; }
	~CDate() {}
	int GetYear() { return year; }
	int GetMonth() { return month; }
	int GetDay() { return day; }
private:
	int year, month, day;
};

class Employee
{
public:
	Employee();
	Employee(string name, string address, 
			 string phoneNum, CDate joinDate);
	void DisplayEmployee();
	void DoWork();

	~Employee();
protected:
private:
	string name, address, phoneNum;
	CDate joinDate;
};

class RegularEmployee : public Employee
{
public:
	RegularEmployee();
	RegularEmployee(string name, string address, 
				    string phoneNum, CDate joinDate, int salary);
	~RegularEmployee();
	void DoWork();
private:
	
	int salary;
};

