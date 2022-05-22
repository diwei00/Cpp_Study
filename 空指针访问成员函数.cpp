//#include <iostream>
//using namespace std;
//
//class person
//{
//public:
//
//	void fun2()
//	{
//		cout << "aaaaaaaaaaaa" << endl;
//	}
//
//	void fun(int a)
//	{
//		//由于p为空指针，则this指针指向空，空指针就不可以指向成员
//		if (this == NULL)
//		{
//			cout << "this为空" << endl;
//			return;
//		}
//		//成员前默认都是有this的
//		m_A = a;
//	}
//
//	int m_A;
//};
//int main()
//{
//	person* p = NULL;
//	p->fun2();
//	p->fun(10);
//	cout << p->m_A << endl;
//
//	system("pause");
//	return 0;
//}