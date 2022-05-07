#include <iostream>
#include <string>
using namespace std;//使用
int main()
{
	char s = '0';
	cin >> s;
	cout << "char 的内存大小" << sizeof(char) << endl;
	cout << "s = " << s << endl;
	int a = 0;
	cin >> a;
	cout << "a = "<< a << endl;
	string str = "wuhao";
	cout << "名字： " << str << endl;
	cout << "Hello Word" << endl;
	/*system("pause");*/
	return 0;
}