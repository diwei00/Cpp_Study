#include <iostream>
using namespace std;
class person
{
public:

	
	//���ڴ����������ʼ��
	static int m_A;
};
int person::m_A = 20;

int main()
{
	person p;
	cout << p.m_A << endl;
	person p2;
	p2.m_A = 80;
	cout << p.m_A << endl;
	//��ͨ�������򷽷�����
	cout << person::m_A << endl;
	system("pause");
	return 0;
}