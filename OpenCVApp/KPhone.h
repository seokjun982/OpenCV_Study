#pragma once
#include "common.h"

class KPhone
{
	string strAA[3] = { "a" ,"a" ,"a" };
public:
	KPhone();
	~KPhone();
	int Send();			// : ��ȭ�� �ɴ�
	int Cancel();		//��ȭ ����

	int Receive();		// : ��ȭ�� �޴�
	int Numbers(string _strNumber);// : ��ȭ��ȣ�� �Է��Ѵ�.
	int Numbers(int* pAudioData, int length);

private:
	string strNumber;	// : ��ȭ��ȣ
	bool isConnected;	// : ��ȭ���ΰ� ?
};

