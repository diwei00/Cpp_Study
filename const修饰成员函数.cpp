#include <iostream>
using namespace std;
class person
{
public:

	//thisָ�뱾����ָ�볣���� ָ���ָ���ǲ����Ըĵ�  person* const this
	// 
	//const ���κ�����ֻ�ܷ��ʿɱ�ĳ�Ա
	//��ʱthisָ���Ϊ   const person* const this  ָ���ָ���ָ������ݶ��ǲ����Ըı��    ���ǽ�����������mutable�ɱ��
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


	//������ֻ�ܵ�������
	//ԭ��һ�㺯�������޸����ԣ��������������ԣ�

	const person p2;
	p2.fun(10);
	p2.m_A = 2000;
	cout << p2.m_A << endl;


	system("pause");
	return 0;
}