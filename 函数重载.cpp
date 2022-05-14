#include <iostream>
using namespace std;
//函数重载要保证没有二异性
//函数重载条件：
//同一个作用域
//函数名称相同
//函数  参数类型不同  /  个数不同  /   顺序不同

//函数返回值不能作为函数重载条件

//函数重载碰到默认参数，考虑二异性
void fun(int a, double b)
{
	cout << "aaaaaaaa" << endl;
}
void fun(double a, int b)
{
	cout << "bbbbbbbbbbbbbbbb" << endl;
}
void fun(int a)
{
	cout << "wwwwwwwww" << endl;
}
void fun(double a)
{
	cout << "ffffffffff" << endl;
}
void fun2(int& a)
{
	cout << "lllllllllll" << endl;
}
void fun2(const int& a)
{
	cout << "HHHHHHHHHHH" << endl;
}
int main()
{

	fun(10, 3.14);
	fun(3.14, 10);
	fun(10);
	fun(3.14);
	int a = 10;
	fun2(a);
	fun2(10);
	system("pause");
	return 0;
}