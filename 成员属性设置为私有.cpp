//#include <iostream>
//using namespace std;
////设置成员属性为私有，可以对其属性进行读写的设置
//// 可以对输入的数据进行判断
//class people
//{
//public:
//	void set_name(string name)
//	{
//		m_Name = name;
//	}
//	string get_name()
//	{
//		return m_Name;
//	}
//	void set_age(int age)
//	{
//		if (age > 0 && age <= 150)
//		{
//			m_Age = age;
//		}
//		else
//		{
//			cout << "你输入的年龄不在范围" << endl;
//			m_Age = 0;
//			return;
//		}
//		
//	}
//	int get_age()
//	{
//
//		
//		return m_Age;
//	}
//	void set_loc(string loc)
//	{
//		m_Loc = loc;
//	}
//private:
//	//可读可写
//	string m_Name;
//	//只读
//	int m_Age;
//	//只写
//	string m_Loc;
//
//
//};
//int main()
//{
//	people s1;
//	s1.set_name("wuhao");
//	cout << s1.get_name() << endl;
//	s1.set_age(200);
//	cout << "年龄为： " << s1.get_age() << endl;
//	s1.set_loc("aaaaaaaaaaaaaaaa");
//
//
//	system("pause");
//	return 0;
//}