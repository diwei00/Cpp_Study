#include <iostream>
using namespace std;
class person
{
public:
	static void fun()
	{
		//ֻ�ܷ��ʣ���̬����
		//�����Է��ʷǾ�̬��Ա���������ڿ����������򷽷����ʣ���Ͳ�֪��������һ������ĳ�Ա
		m_A = 100;
		cout << "aaaaaaaaaaaaaaa" << endl;
	}
	static int m_A;
};
int person::m_A = 100;
int main()
{
	person p;
	p.fun();
	cout << p.m_A << endl;


	//�����������򷽷�����
	person::fun();


	return 0;
}