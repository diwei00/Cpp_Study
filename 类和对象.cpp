//#include <iostream>
//using namespace std;
//#define PI 3.14
//
//class Circle//类名
//{
//	//访问权限
//	//public    公共权限  类内和内外都可以访问
//	//protected 保护权限  类内可以访问，类外不可以访问
//	//private   私有权限  类内可以访问，类外不可以访问
//	//区别在于父子继承
//public:
//	//属性  成员属性  成员变量
//	int r;
//	//行为  成员函数  成员方法
//	//用属性所干的事情
//	double perimeter()
//	{
//		return 2 * PI * r;
//	}
//
//};
//class Stu
//{
//public:
//	string stu_num;
//	string name;
//
//	void print()
//	{
//		cout << "学号：" << stu_num << "\t" << "姓名：" << name << endl;
//	}
//	void get_name(string name2)
//	{
//		name = name2;
//	}
//	void Get_stu_num(string num)
//	{
//		stu_num = num;
//	}
//};
//int main()
//{
//	Circle c1;//用类创建的对象
//	c1.r = 10;//向类中成员赋值
//	//调用类的行为
//	cout << c1.perimeter() << endl;
//
//	Stu s1;
//	s1.name = "wuhao";
//	s1.stu_num = "2101190236";
//	s1.print();
//
//	Stu s2;
//	s2.get_name("qqqqq");
//	s2.Get_stu_num("56456456");
//	s2.print();
//
//	system("pause");
//	return 0;
//}