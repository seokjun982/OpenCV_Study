#include "StudentScore_rev0.0.h"

StudentScore::StudentScore()
{
	cout << "StudentScore::Ctor"<<endl;
}

StudentScore::~StudentScore()
{
	cout << "StudentScore::Dtor" << endl;
}

int StudentScore::GetSum()
{
	return (studentinfo.kor+
		studentinfo.eng+
		studentinfo.math);
}

float StudentScore::GetAvg()
{
	return GetSum()/3.0;
}

int StudentScore::GetMin()
{
	//studentinfo.kor/.eng/.math
	//if(.kor > .eng)
	//	if(.kor > .math)
	int score[3] = { studentinfo.kor,
	studentinfo.eng,
	studentinfo.math };
	int min = score[0];
	for (size_t i = 0; i < 3; i++)
		if (min > score[i]) 
			min = score[i];
	//sort
	//��������[0,������].....[N-1,ū��]
	std::sort(score, score + 3);//score.begin(), score.end()
	return score[0];//���� ��ȯ
}

int StudentScore::GetMax()
{
	//studentinfo.kor/.eng/.math
	//if(.kor > .eng)
	//	if(.kor > .math)
	int score[3] = { studentinfo.kor,
	studentinfo.eng,
	studentinfo.math };
	int min = score[0];
	for (size_t i = 0; i < 3; i++)
		if (min > score[i])
			min = score[i];
	//sort
	//��������[0,������].....[N-1,ū��]
	std::sort(score, score + 3);//score.begin(), score.end()
	return score[3-1];//���� ��ȯ
}

int StudentScore::SetStudentName(string name)
{
	studentinfo.name = name;
	return 0;
}

int StudentScore::SetSubjectScore(string subject, int score)
{
	string str = subject;
	//kor, KOR, Kor, koR, kOr
	//KOR - UpperCase
	//Convert Char
	//str -> lower -> upper

	//string {'a','b','c','d','e','f'} => "abcdef"
	//lower -> upper
	//str[0] 'a'--> 'A'                =?"Abcdef"
	//str[1] 'b'--> 'B'                =?"ABcdef"
	/*--------------------------------------------------------*/
	//c-style
	for (size_t i = 0; i < str.size(); i++)
	{
		str[i] = std::toupper(str[i]);
	}
	//c++ style :: lambda expresstion
	std::transform(str.begin(),
		str.end(), 
		str.begin(), [](uchar c) {return toupper(c); });

	//�̸����� �Լ� : lambda
	//[](uchar c) /// ??  [�Լ� �̸�??](uchar c)
	//{
	//	return toupper(c);
	//}
	/*--------------------------------------------------------*/

	if (str == "KOR")		studentinfo.kor = score;
	else if (str == "ENG")	studentinfo.eng = score;
	else if (str == "MATH") studentinfo.math = score;
	else cout << "Subject {Kor, Eng, Math} Only" << endl;
	return 0;
}

int StudentScore::DoCalc()
{
	/*
	ȫ�浿 = ����:90, ����:90, ����:98, �̼�:88, ����:94, ����:99
	���� = ??, ��� = ??, �ּ� = ??, �ִ� = ??
	*/
	cout << studentinfo.name << "="
		<< "���� : " << studentinfo.kor<<" | "
		<<"���� : " << studentinfo.eng<<" | "
		<<"���� : " << studentinfo.math<<" | "
		<<"���� : " << GetSum() <<" | "
		<<"��� : " << GetAvg() <<" | "
		<<"�ּ� : " << GetMin() <<" | "
		<<"�ִ� : " << GetMax()
		<< endl;

	return 0;
}
