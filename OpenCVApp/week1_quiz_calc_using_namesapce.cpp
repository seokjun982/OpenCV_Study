//Quiz
//namespace�� �̿��Ͽ� ��Ģ���� ���⸦ ����� ���ϴ�.
//�� �� a,b �Է��� �޽��ϴ�.
//����� ��ȣ +,-,/,* �Է��� �޽��ϴ�.
//namespace Calc{} �����մϴ�.
//Calc ���̽����̽����� add(*),sub(-), mul(*), div(/) �Լ��� ������
// �Լ� �� �𸣰ھ��?...��ø� ��ٷ����ϴ�.�ϴ� ��������
// main�� �Լ��Դϴ�.
//�Է°� ����� cin, cout�� ����մϴ�.

//���� ����
Calc Program Started
input 1 - 10
input 2 - 20
input symbol - *
result => 10 * 20 = 200
�ʹ� ���ؼ� ... �Լ� ȣ�� �Ǵ� �κ��� ���׷��̵� �غ��ϴ�.
result �Լ��� ȣ���ؼ� ����� ����غ��ϴ�
�����е� add/sub/mul/div �ʹ� ���� Ÿ�����ϰ� ����?

hint
namespace Calc
{
	int a=0, b=0, resVal=0;
	char symbol=' ';
	int result()
	{
		resVale = 0;
		if (symbol == '+') resValue = add(a, b);
		else if (symbol == '-') resValue = sub(a, b);
		else if (symbol == '*') resValue = mul(a, b);
		else if (symbol == '/') resValue = div(a, b);
		return resVal;
	}



	int add(int a, b) { return a + b; }
	int sub(int a, b) { return a - b; }
	int mul(int a, b) { return a * b; }
	int div(int a, b) { return a / b; }
	//...
}
//using namespace Calc;





























































































































int main()
{
	//Set Calc variables
	//Call Calc result
	std::cout << "input 1 : "; std::cin >> Calc::a;
	std::cout << "input 2 : "; std::cin >> Calc::b;
	std::cout << "input S : "; std::cin >> Calc::symbol;
	std::cout << "result : " << Calc::result();



}