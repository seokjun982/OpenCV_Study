#include "KPhone.h"

int main()
{
	//��ȭ �ɱ�
	{
		//��ȭ�⸦ ���
		KPhone* pKphone = new KPhone();

		//��ȭ ��ȣ �Է�
		//pKphone->Numbers("010-1234-5678");
		int* pAudio = new int[11] {
			0,1,0,1,2,3,4,5,6,7,8
		};
		int length = 11;
		pKphone->Numbers(pAudio, length);//revision 2.0
		//��ȭ �ɱ�
		pKphone->Send();
		pKphone->Cancel();//revision 3.0

		//��ȭ�⸦ ������
		if (pKphone != nullptr)
		{
			delete pKphone;
			pKphone = nullptr;
		}
	}
	

	//��ȭ �ޱ�
	{
		//��ȭ�⸦ ���
		KPhone* pKphone = new KPhone();

		//��ȭ �ɱ�
		pKphone->Receive();

		pKphone->Cancel();//revision 2.0

		//��ȭ�⸦ ������
		if (pKphone != nullptr)
		{
			delete pKphone;
			pKphone = nullptr;
		}
	}




	return 1;
}