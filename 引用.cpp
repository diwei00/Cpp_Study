#include <iostream>
using namespace std;
//void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	/*cout << a << endl;
//	cout << b << endl;*/
//	//cout << a <<" " << b << endl;
//	int c = 10;
//	int& p = c;
//	p = 20;
//	cout << c << endl;
//	printf("%p\n", &c);
//	printf("%p\n", &p);
//
//	//实质
//	//编译器会开辟一块int类型的空间，
//	//把d的整数部分放到这个临时变量里面，我们实际上是给临时变量取别名
//	//由于临时你变量具有常属性，所以用const修饰
//	double d = 20;
//	const int& pd = d;
//	
//	printf("%p\n", &d);
//	printf("%p\n", &pd);
//
//
//	system("pause");
//	return 0;
// }

 
//引用做返回值，要保证其变量不被释放
//int& fun()
//{
//	static int tmp = 10;
//	return tmp;
//}
//int main()
//{
//	int& ret = fun();
//	cout << ret << endl;
//	cout << ret << endl;
//
//
//	system("pause");
//	return 0;
//}