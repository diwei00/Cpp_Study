#include <iostream>
using namespace std;
class person
{
public:
	person()
	{
		cout << "���캯��" << endl;
	}
	person(int age, int height)
	{
		m_age = age;
		m_height = new int(height);
		cout << "���캬�κ���" << endl;
	}

	//��������������Ϊ�˳�ʼ��p2
	person(const person& p)
	{
		m_age = p.m_age;
		//�����ֱ�ӿ������ݣ�����ڶ���
		m_height = new int(*p.m_height);
		cout << "��������" << endl;
	}

	~person()
	{
		//���������н����ͷ�
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "��������" << endl;
	}
	int m_age;
	int* m_height;
};
void test()
{
	person p1(20, 182);
	cout << p1.m_age << "\t" << *p1.m_height << endl;
	//ǳ������ɶ����ڴ��ظ��ͷ�
	//ԭ��m_heightָ��ͬһ��ռ�
	//������������ݣ�����������ٿ�ռ�
	person p2(p1);
	cout << p2.m_age << "\t" << *p2.m_height << endl;

}
int main()
{

	test();

	system("pause");
	return 0;
}