#pragma once
#include "common.h"

class Calc
{
public:
	//������
	Calc();//Ctor...default Ctor
	//Calc(int a=1, int b=2, char sym=' ');
	Calc(int a, int b, char sym);
	//�Ҹ���
	~Calc();//Dtor

	void Clear();
	void SetValue(int num1, int num2, char sym);
	int GetResult();
	int DoSum();
	int DoMul();
	int DoSub();
	int DoDiv();

	int sum(const int* const pData, size_t length);
	float avg(const int* const pData, size_t length);
	int min(const int* const pData, size_t length);
	int max(const int* const pData, size_t length);

	int number1 = 0;
private:
	int* pData = nullptr;//new -> shared_ptr
	//int number1=0;
	int number2=0;
	char symbol;
	int result;
	int a, b, sym;
};

/*usage*/
/*
7.c++_class.cpp ���弼��
 
#include "Calc.h"
int main()
{
	Calc calc;
	calc.SetValue(1,2,'+');
	calc.DoSum();
	cout<<"�μ��� ���� " <<calc.GetResult()<<endl;
}
//console â�� ���¸� ĸ���ϼ���.

*/
