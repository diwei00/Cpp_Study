#include <iostream>
using namespace std;
class person
{
public:
	//Ĭ�Ϲ��캯�����޲Σ�
	person()
	{
		cout << "aaaaaaaaaaaaaaaaaa" << endl;
	}
	//��������
	~person()
	{
		cout << "bbbbbbbbbbbbb" << endl;
	}
	//�вι��캯��
	person(int n)
	{
		cout << "dddddddddd" << endl;
		age = n;
	}
	//�������캯��
	person(const person& p)
	{
		age = p.age;
		cout << "wwwwwwwww" << endl;
	}

	int age;
	
};

void test()
{
	//���ŵ���
	/*person p1;*/
	person p2(10);//�����вι��캯��    ���ú������ط���˼�����
	//���ã����вι��캯������ʼ��p2�����еĳ�Ա����ʱ���ڻ����Ĭ�Ϲ��캯��

	person p3(p2);//���ÿ������캯��
	
	//��ʾ����
	//��������
	//person(10)    �������������ϵͳ����������
	/*person p1 = person(10);
	person p2 = person(p1);*/

	////��ʽ����
	////ת������������
	//person p1 = 10;
	//person p2 = p1;
	
	

}
int main()
{
	test();

	system("pause");
	return 0;
}