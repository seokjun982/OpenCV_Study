#include <stdio.h>
#include <iostream>

//#define _CRT_SECURE_NO_WARNINGS
//istream vs ostream
//cin ">>"   cout "<<" 



//#include "abc.h" user defined header file
//�Լ� ����
//[��ȯ��] [�Լ���][(�Ű�����)] {   }


int main()
{
	//���
	printf("Hello, ");
	printf("World\n");
	std::cout << "Hello, ";
	std::cout << "World\n";
	std::cout << "Hello, World" << std::endl;
	//����
	printf("math - %d\n", 100);
	std::cout << "math - " << 100 << std::endl;
	//�Ҽ�
	printf("pi - %lf\n", 3.14);
	std::cout << "pi - " << 3.14 << std::endl;
	//����
	printf("Score - %c\n", 'A');
	std::cout << "Score - " << 'A' << std::endl;

	printf("%d %lf %c", 100, 3.14, 'A');

	//�Է�
	//c
	int i = 0;
	scanf("input-%d", &i);//�ڡڡڡڡ�
	printf("%d typed", i);

	//c++
	std::cout << "input - "; 
	std::cin >> i;//�ڡڡڡڡ�
	std::cout << i << " typed" << std::endl;

	return 1;//TRUE - 1, FALSE - 0
}