#include <iostream>
using namespace std;
class person
{
public:

	//this指针本质是指针常量， 指向的指向是不可以改的  person* const this
	// 
	//const 修饰函数，只能访问可变的成员
	//这时this指针变为   const person* const this  指针的指向和指向的内容都是不可以改变的    除非将变量声明成mutable可变的
	void init(int m)
	{
		m_A = m;
	}
	void fun(int a) const
	{
		this->m_A = a;
	}

	mutable int m_A;
};
int main()
{
	person p;
	p.fun(10);
	cout << p.m_A << endl;


	//常对象只能调常函数
	//原因：一般函数可以修改属性，而常变量不可以，

	const person p2;
	p2.fun(10);
	p2.m_A = 2000;
	cout << p2.m_A << endl;


	system("pause");
	return 0;
}