#include "Calc.h"

//���嵥��ŸŸ��
//int
//array[]
//struct
Calc calc_global;//����,global//���α׷� ����/���� �� Calc ����/�Ҹ�

int main()
{
	{
		Calc calc_local;//����, local
		//�Լ�/Logic ������{} ����/���� �� Calc ����/�Ҹ�
		//���嵥��ŸŸ��
		//int
		//array[]
		//struct
	}

	{
		
		Calc* pCalc = new Calc();//����, dynamic memory allocation
		//int* pData = new int[100];
		//new ����

		try
		{
			//logic
			//exception
			//return;
		}
		catch (const std::exception&)
		{
			if (pCalc != nullptr)
			{
				delete pCalc; //delete �Ҹ�
				pCalc = nullptr;
			}
			//if(pData!=nullptr)
			//{delete [] pData; pData = nullptr;}
			return -1;
		}
		if (pCalc != nullptr)
		{
			delete pCalc; //delete �Ҹ�
			pCalc = nullptr;
		}
		//if(pData!=nullptr)
		//{delete [] pData; pData = nullptr;}

		

	}




	if(true)
	{
		Calc calc;

		
		calc.Clear();
		//calc.SetValue(1, 2, '+');
		int data[3] = { 1,2,3 };

		calc.sum(data, 3);
		cout << "���� " << calc.GetResult() << endl;
		calc.Clear();
		calc.SetValue(1, 2, '+');
		calc.DoSum();
		cout << "���� " << calc.GetResult() << endl;
	}
	
	if(false)
	{
		Calc* pCalc = new Calc();

		int data[3] = { 1,2,3 };
		pCalc->sum(data, 3);
		cout << "���� " << pCalc->GetResult() << endl;
		pCalc->Clear();
		pCalc->SetValue(1, 2, '+');
		pCalc->DoSum();
		cout << "���� " << pCalc->GetResult() << endl;

		//return 1;

		if (pCalc != nullptr)
		{
			delete pCalc;
			pCalc = nullptr;
		}
	}
	


	{
		//smart pointer
		//Calc* pCalc = new Calc();
		std::shared_ptr<Calc> pCalc = std::make_shared<Calc>(1, 1, '+');

		int data[3] = { 1,2,3 };
		pCalc->sum(data, 3);
		cout << "���� " << pCalc->GetResult() << endl;
		pCalc->Clear();
		pCalc->SetValue(1, 2, '+');
		pCalc->DoSum();
		cout << "���� " << pCalc->GetResult() << endl;

	}

	return 1;
}