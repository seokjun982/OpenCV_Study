#include <iostream>
//namespace
//���α׷��� �����ϴ� ��ҵ��� �������� ����
//�� �ֵ��� ���ӽ����̽� ��� ����� ����
namespace text{
	void draw() { std::cout << "draw text" << std::endl; }
}
namespace graphic{
	void draw() { std::cout << "draw graphic" << std::endl; }
}
using namespace std;
using namespace text;
using namespace graphic;

//using ���� 
namespace calc {
	const double PI = 3.14;
	int add(int a, int b) { return a + b; }
}
using calc::PI;

int main(){
	//cout << "PI=" << calc::PI << endl;
	cout << "PI=" << PI << endl;
	cout << "namespace example" << endl;
	//text::draw();
	//graphic::draw();
	//draw();-error when using namespace text/graphic
	graphic::draw();//ok-����� �������� ������ ��� 
	return 1;
}