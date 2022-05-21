#include <iostream>
using namespace std;
class person
{
public:

	
	//类内创建，类外初始化
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
	//可通过作用域方法访问
	cout << person::m_A << endl;
	system("pause");
	return 0;
}