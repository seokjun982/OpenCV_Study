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

	stStudentInfo.mTable.clear();
}

void StudentScore::SetSubjectScore(string subject, int score)
{
	if (stStudentInfo.mTable.find(subject) != stStudentInfo.mTable.end()) {
		cout << "same subject found" << endl;
		return;
	}
	else {
		stStudentInfo.mTable.insert({ subject, score });
	}

}

void StudentScore::DoCalc()
{
	//ȫ�浿 = ����:90, ���� : 90, ���� : 98, �̼� : 88, ���� : 94, ���� : 99���� = ? ? , ��� = ? ? , �ּ� = ? ? , �ִ� = ? ?
	if (stStudentInfo.mTable.size() > 0)
	{

		cout << stStudentInfo.name << " => ";
		for (auto iter = stStudentInfo.mTable.begin(); iter != stStudentInfo.mTable.end(); iter++)
		{
			cout << iter->first << " : " << iter->second << "  ";
		}

		cout << "| ���� : " << GetSum() << "  "
			<< "| ��� : " << GetAvg() << "  "
			<< "| �ּ� : " << GetMin() << "  "
			<< "| �ִ� : " << GetMax()
			<< endl;
	}

}

int StudentScore::GetSum()
{
	vector<int> vScores;
	for (auto iter = stStudentInfo.mTable.begin(); iter != stStudentInfo.mTable.end(); iter++)
	{
		vScores.push_back(iter->second);
	}
	int sum = 0;
	for (auto iter = vScores.begin(); iter != vScores.end(); iter++)
	{
		sum += *iter;
	}
	return sum;
}

float StudentScore::GetAvg()
{
	return GetSum() / stStudentInfo.mTable.size();
}

int StudentScore::GetMin()
{
	vector<int> vScores;
	for (auto iter = stStudentInfo.mTable.begin(); iter != stStudentInfo.mTable.end(); iter++)
	{
		vScores.push_back(iter->second);
	}
	std::sort(vScores.begin(), vScores.end());
	return vScores[0];
}

int StudentScore::GetMax()
{
	vector<int> vScores;
	for (auto iter = stStudentInfo.mTable.begin(); iter != stStudentInfo.mTable.end(); iter++)
	{
		vScores.push_back(iter->second);
	}
	std::sort(vScores.begin(), vScores.end());
	return vScores[vScores.size() - 1];
}
