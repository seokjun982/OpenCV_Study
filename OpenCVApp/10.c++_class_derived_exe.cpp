#include "Employee.h"

int main()
{
	CDate date(2023, 2, 24);
	{
		Employee e("Parent", "Here",
			"000-0000-0000",
			date);
		e.DisplayEmployee();
		//e.DoWork();

	}
	{

		RegularEmployee re("KCCI", "Here",
			"010-1234-5678",
			date, 10000000);
		re.DisplayEmployee();//??? whre are you from???
		//re.DoWork();
	}


	////pointer....class....derived class....pointer
	////parent class pointer
	////derived class pointer
	//Employee* pEmployee = &e;  //int* pA = &a;
	//RegularEmployee* pReEmployee = &re;
	////Down-Casting, �ٿ� ĳ����....�⺻ Ŭ������ �Ļ�Ŭ������ ����Ų��.
	//pEmployee = &re;
	//pEmployee->DisplayEmployee();
	//


	return 1;
}