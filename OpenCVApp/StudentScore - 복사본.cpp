#include "StudentScore.h"

StudentScore::StudentScore()
{

}

StudentScore::~StudentScore()
{
}

void StudentScore::SetStudentName(string Name)
{
	stStudentInfo.name = Name;
}

void StudentScore::SetSubjectScore(string subject, int score)
{
	string str = subject;
	//c-style
	for (size_t i = 0; i < str.size(); i++)
	{
		str[i] = std::toupper(str[i]);
	}
	//c++ lambda style
	std::transform(str.begin(), str.end(), str.begin(),
		[](unsigned char c) { return toupper(c); });
	if (str == "KOR") stStudentInfo.kor = score;
	else if (str == "ENG") stStudentInfo.eng = score;
	else if (str == "MATH") stStudentInfo.math = score;
	else
		cout << "Subject {Kor, Eng, Math} Only" << endl;
}

void StudentScore::DoCalc()
{
	//ȫ�浿 = ����:90, ���� : 90, ���� : 98, �̼� : 88, ���� : 94, ���� : 99���� = ? ? , ��� = ? ? , �ּ� = ? ? , �ִ� = ? ?
	cout << stStudentInfo.name << " => "
		<< "���� : " << stStudentInfo.kor << "\t"
		<< "���� : " << stStudentInfo.eng << "\t"
		<< "���� : " << stStudentInfo.math << "\t"
		<< "���� : " << GetSum() << "\t"
		<< "��� : " << GetAvg() << "\t"
		<< "�ּ� : " << GetMin() << "\t"
		<< "�ִ� : " << GetMax()
		<< endl;
		

}

int StudentScore::GetSum()
{
	return (stStudentInfo.kor+stStudentInfo.eng+stStudentInfo.math);
}

float StudentScore::GetAvg()
{
	return GetSum()/3.0;
}

int StudentScore::GetMin()
{
	int score[3] = { stStudentInfo.kor,
	stStudentInfo.eng,stStudentInfo.math };
	std::sort(score, score + 3);
	return score[0];
}

int StudentScore::GetMax()
{
	int score[3] = { stStudentInfo.kor,
	stStudentInfo.eng,stStudentInfo.math };
	std::sort(score, score + 3);
	return score[3-1];
}
