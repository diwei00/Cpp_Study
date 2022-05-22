//#include <iostream>
//using namespace std;
//class person
//{
//public:
//
//
//	//this指针区分变量名和成员名相同的情况
//	//原理：this指针是指向对象的成员的，当使用对象成员时，就会使用this指针
//	void fun(int m_Age)
//	{
//		this->m_Age = m_Age;
//	}
//	void init(int n)
//	{
//		m_Age = n;
//	}
//	//返回引用，保证在同一个对象上
//	person& fun2(int age)
//	{
//		this->m_Age += age;
//		return *this;//可用于返回对象
//	}
//
//	int m_Age;
//};
//int main()
//{
//	person p;
//	p.init(10);
//	
//	p.fun2(10).fun2(10).fun2(10);
//	cout << p.m_Age << endl;
//
//	system("pause");
//	return 0;
//}