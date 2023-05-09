#pragma once
#include "common.h"

class StudentScore
{
public:
	StudentScore();
	~StudentScore();
private:
	int GetSum();
	float GetAvg();
	int GetMin();
	int GetMax();
	struct StudentInfo
	{
		string name;
		int eng, kor, math;//������ ����
		int sum, min, max;
		float avg;
	};
	StudentInfo studentinfo;

public:
//���
//�Է� �л� �̸�
	int SetStudentName(string name);
//����,�����Է�
	int SetSubjectScore(string subject, int score);
//��� ����, sum, avg, min, max
	int DoCalc();

};

