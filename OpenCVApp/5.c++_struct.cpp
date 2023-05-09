//struct
//class
#include <iostream>
#include <vector>
#include <string>

//�л�����-����
enum  {
	eEnglish,	//0
	eMath,		//eMath=5, 1->5
	eKorean,	//2->6
	eClassMax	//6->7
} ECLASS;
struct _stStudentInfo
{
	std::string name;
	//int eng, math, kor;
	int scores[eClassMax];
	//0 - english
	//1 - math
	//2 - Korean
	int sum, min, max;
	float avg;
};
//1?...50...�ϵ��ڵ�???
//scores[eEnglish] = 5;
//scores[eKorean] = 3;
//for (size_t score = 0; score < eClassMax; score++)


int sum(const int* const pData, size_t length)
{
	int sum = 0;
	for (size_t i = 0; i < length; i++) {
		sum += pData[i];
	}
	return sum;
}
float avg(const int* const pData, size_t length) {
	return sum(pData, length) / length;
}
int min(const int* const pData, size_t length){
	int min = pData[0];
	for (size_t i = 0; i < length; i++) {
		if (min > pData[i]) min = pData[i];
	}
	return min;
}
int max(const int* const pData, size_t length) {
	int max = pData[0];
	for (size_t i = 0; i < length; i++) {
		if (max < pData[i]) max = pData[i];
	}
	return max;
}
int main()
{
	/*
	if (0)
	{
		//namspace
		//{
		//}
		typedef unsigned char uchar;//����� Ÿ�� ������
		typedef unsigned int uint;
		class MyClass
		{
		};
		//����ü, struct ......Class   ..... 
		//struct(public) == class(private,protected,public) ? ....1���� ������
		struct _stData
		{
			//���� �ٸ� ������ ������ �׸��� �����Ͽ�
			//�ϳ��� ������ ������ [������ Ÿ��]
			int score;
			double ratio;
			std::string name;
			int datas[100];
			int* pPreData = nullptr;
			int* pPostData = nullptr;
			std::vector<int> vLines;
			//�Լ�
			void sum(int& a, int& b) { return a + b; }
			//Ŭ����
			MyClass _myClass;
		};
		int a;
		_stData stData = { 10, 0.1, "hello", nullptr, nullptr };
		_stData* pstData = new _stData;// nullptr;
		//c
		//typedef struc[tagName]
		//{
		//	//����Ÿ��
		//}[nickname];
		typedef struct _stDataC
		{
			int a;
			int b;
		}STDATAC;

		//useage
	}
	*/

	_stStudentInfo student;
	student.scores[eEnglish] = 90;
	student.scores[eMath] = 95;
	student.scores[eKorean] = 92;

	//1��
	//�Լ� ... sum, average, min, max
	//input scores[], length
	//return ... sum(int), average(float), min/max(int)

	//display
	//[�̸�]
	//english - ??, math - ??, korea - ??
	//sum - ??, average - ??, min - ??, max - ??

	//2�� - �ڵ����� �Է� �� ���� ���� ���
	//����ڷκ��� �Է��� �޽��ϴ�.
	//struct�� string name�� �Է� �޾ƿ�.
	//�� eng, math, kor ������ �Է� �޾ƿ�
	//�� display�� ����� �մϴ�.
	//Q�Է��� ������ �� �̻� �Է��� ���� �ʽ��ϴ�.
	std::vector<_stStudentInfo> vStudent;
	while (true)
	{
		std::cin >> student.name;
		if (student.name == "Q")break;
		std::cin >> student.scores[eEnglish];
		std::cin >> student.scores[eMath];
		std::cin >> student.scores[eKorean];

		
		vStudent.push_back(student);
	}


	for (size_t i =	0; i < vStudent.size(); i++)
	{
		_stStudentInfo* pStudent = &vStudent[i];

		std::cout << sum(pStudent->scores, eClassMax);
		std::cout << avg(pStudent->scores, eClassMax);
		std::cout << min(pStudent->scores, eClassMax);
		std::cout << max(pStudent->scores, eClassMax);

	}


	/*
	if (false)
	{
		//���� �ڵ� ��Ÿ��
		1. C / C++ �ڵ� �����ڵ�
			int arr[], int* p = nullptr, const int* const p
			�ڵ��׽�Ʈ...UnitTest...Aging(invalid range...out of range...die)
			2. �Լ� / ����
			������...name...�ǹ̾���...a->abc i / j / k / n / m / l ->
			a, b, c, d......a ? ...
			��� 1, 10, 3, ....... ? ... enum, TRUE(1), true
			if (1...true... > )//true or false
				3. �Ϲ�ȭ ����
				3���� ������ �ֽ��ϴ�...3������ �ذ�
				sum...(a + b + c)
				avg...(a + b + c) / 3...sum / 3...sum / length
				for �հ����� ������ �굵��..�ڵ��� ���� �㳷����
					�ڵ��׽�Ʈ...UnitTest...Aging(invalid range...out of range...die)
					for...N��...array[N]
					{ for != a + b + c }  .... for == N
						4. ���� / �Լ�...�̸��� �ߺ���
					{
					int a = 1;
												{//����
													int a = 0;
												}//�Ҹ�
									{//����
										int a = 2;
									}//�Ҹ�
					cout << a; ? ? ...0..2..1(�����Դϴ�~)
					}
		int sum;
		void sum();
		std::cout << sum
			5. pointer...array[N]
			index....value
			[0][1][2][3][4][][][][][][][][][][][][][][N - 1]
			index...access..
			value...array[index]
			for 0...N - 1
				array[index]
				pointer....start point
				[0][1][2][3][4][][][][][][][][][][][][][][N - 1]
				|| st || st + 10
				pointer 4, N = 10 ...partial
				6. �Լ� �Ű����� ...�ܺ� �Է�
				�ܼ� ��ɸ� ��...���..sum / avg / min / max
				�ּ����� ���� or ��ü�� ����Ű�� ����
				const int* const pDatas....length = > sum
				int a, b, c
				sum(int* a, int b[], int c)...N ?
			{ a, b, c
			}
		7. sum(struct * pSt)
	}
	*/
}







