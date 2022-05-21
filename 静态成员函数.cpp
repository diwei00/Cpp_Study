#include <iostream>
using namespace std;
class person
{
public:
	static void fun()
	{
		//只能访问，静态变量
		//不可以访问非静态成员变量，由于可以用作用域方法访问，则就不知道访问哪一个对象的成员
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


	//可以用作用域方法访问
	person::fun();


	return 0;
}