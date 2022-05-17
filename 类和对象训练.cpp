//#include <iostream>
//using namespace std;
//
//bool is_v(int v1, int v2)
//{
//	if (v1 == v2)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//class Cude
//{
//public:
//
//	void set_l(int l)
//	{
//		m_L = l;
//	}
//	int get_l()
//	{
//		return m_L;
//	}
//	void set_w(int w)
//	{
//		m_W = w;
//	}
//	int get_w()
//	{
//		return m_W;
//	}
//	void set_H(int h)
//	{
//		m_H = h;
//	}
//	int get_h()
//	{
//		return m_H;
//	}
//	int get_volume()
//	{
//		return m_L * m_W * m_H;
//	}
//	int get_area()
//	{
//		return m_L * m_W * 2 + m_L * m_H * 2 + m_W * m_H * 2;
//	}
//	bool Is_Volume(int v1, int v2)
//	{
//		if (v1 == v2)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	bool Is_Equal(Cude& c)
//	{
//		if (m_L == c.m_L && m_W == c.m_W && m_H == c.m_H)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//};
//int main()
//{
//	Cude s1;
//	Cude s2;
//	//设置s1
//	s1.set_l(3);
//	s1.set_w(5);
//	s1.set_H(6);
//	cout << s1.get_volume() << endl;
//	cout << s1.get_area() << endl;
//	//设置s2
//	s2.set_l(8);
//	s2.set_w(5);
//	s2.set_H(6);
//	cout << s2.get_volume() << endl;
//	cout << s2.get_area() << endl;
//
//	if (s1.Is_Volume(s1.get_volume(), s2.get_volume()))
//	{
//		cout << "体积相等" << endl;
//	}
//	else
//	{
//		cout << "不相等" << endl;
//	}
//
//	
//	if (is_v(s1.get_volume(), s2.get_volume()))
//	{
//		cout << "体积相等" << endl;
//
//	}
//	else
//	{
//		cout << "不相等" << endl;
//
//	}
//
//	//判断两个立方体是否相等
//	if (s1.Is_Equal(s2))
//	{
//		cout << "立方体相等" << endl;
//	}
//	else
//	{
//		cout << "立方体不相等" << endl;
//	}
//	system("pause");
//	return 0;
//}