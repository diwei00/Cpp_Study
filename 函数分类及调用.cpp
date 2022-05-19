#include <iostream>
using namespace std;
class person
{
public:
	//默认构造函数（无参）
	person()
	{
		cout << "aaaaaaaaaaaaaaaaaa" << endl;
	}
	//析构函数
	~person()
	{
		cout << "bbbbbbbbbbbbb" << endl;
	}
	//有参构造函数
	person(int n)
	{
		cout << "dddddddddd" << endl;
		age = n;
	}
	//拷贝构造函数
	person(const person& p)
	{
		age = p.age;
		cout << "wwwwwwwww" << endl;
	}

	int age;
	
};

void test()
{
	//括号调用
	/*person p1;*/
	person p2(10);//调用有参构造函数    利用函数重载方法思想调用
	//作用：用有参构造函数来初始化p2对象中的成员，这时不在会调用默认构造函数

	person p3(p2);//调用拷贝构造函数
	
	//显示调用
	//匿名对象
	//person(10)    匿名对象调用完系统会立即回收
	/*person p1 = person(10);
	person p2 = person(p1);*/

	////隐式调用
	////转换成匿名对象
	//person p1 = 10;
	//person p2 = p1;
	
	

}
int main()
{
	test();

	system("pause");
	return 0;
}