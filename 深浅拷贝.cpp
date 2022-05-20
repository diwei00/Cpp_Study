#include <iostream>
using namespace std;
class person
{
public:
	person()
	{
		cout << "构造函数" << endl;
	}
	person(int age, int height)
	{
		m_age = age;
		m_height = new int(height);
		cout << "构造含参函数" << endl;
	}

	//拷贝函数，就是为了初始化p2
	person(const person& p)
	{
		m_age = p.m_age;
		//深拷贝，直接拷贝内容，存放在堆区
		m_height = new int(*p.m_height);
		cout << "拷贝函数" << endl;
	}

	~person()
	{
		//析构函数中进行释放
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "析构函数" << endl;
	}
	int m_age;
	int* m_height;
};
void test()
{
	person p1(20, 182);
	cout << p1.m_age << "\t" << *p1.m_height << endl;
	//浅拷贝造成堆区内存重复释放
	//原因：m_height指向同一块空间
	//解决：拷贝内容，再向堆区开辟块空间
	person p2(p1);
	cout << p2.m_age << "\t" << *p2.m_height << endl;

}
int main()
{

	test();

	system("pause");
	return 0;
}