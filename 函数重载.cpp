#include <iostream>
using namespace std;
//��������Ҫ��֤û�ж�����
//��������������
//ͬһ��������
//����������ͬ
//����  �������Ͳ�ͬ  /  ������ͬ  /   ˳��ͬ

//��������ֵ������Ϊ������������

//������������Ĭ�ϲ��������Ƕ�����
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