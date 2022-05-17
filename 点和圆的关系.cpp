#include <iostream>

using namespace std;
#include <cmath>
class Circle
{
public:
	void set_x(int x)
	{
		m_x = x;
	}
	void set_y(int y)
	{
		m_y = y;
	}
	void set_r(int r)
	{
		m_r = r;
	}
	int Is_Relat(int x, int y)
	{
		if (pow((x - m_x), 2) + pow((y - m_y), 2) == pow(m_r, 2))
		{
			return 1;
		}
		else if (x > m_x - m_r && x < m_x + m_r && y > m_y - m_r && y < m_y + m_r)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	

private:
	int m_x;
	int m_y;
	int m_r;
};
int main()
{
	int x = 2;
	int y = 1;
	Circle c1;
	c1.set_x(0);
	c1.set_y(0);
	c1.set_r(1);
	int tmp = c1.Is_Relat(x, y);
	if (tmp == 1)
	{
		cout << "点在圆上" << endl;
	}
	else if (tmp == 0)
	{
		cout << "点在圆内" << endl;
	}
	else
	{
		cout << "点在圆外" << endl;
	}

	system("pause");
	return 0;
}