//#include <iostream>
//using namespace std;
//class person
//{
//public:
//
//
//	//thisָ�����ֱ������ͳ�Ա����ͬ�����
//	//ԭ��thisָ����ָ�����ĳ�Ա�ģ���ʹ�ö����Աʱ���ͻ�ʹ��thisָ��
//	void fun(int m_Age)
//	{
//		this->m_Age = m_Age;
//	}
//	void init(int n)
//	{
//		m_Age = n;
//	}
//	//�������ã���֤��ͬһ��������
//	person& fun2(int age)
//	{
//		this->m_Age += age;
//		return *this;//�����ڷ��ض���
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