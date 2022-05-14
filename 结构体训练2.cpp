//#include <iostream>
//using namespace std;
//#include <string>
//typedef struct hero
//{
//	string name;
//	int age;
//	string sex;
//}Hero;
//void Init(Hero* pi, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cin >> pi[i].name;
//		cin >> pi[i].age;
//		cin >> pi[i].sex;
//	}
//}
//void swap(Hero* a, Hero* b)
//{
//	Hero tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void BubbleSort(Hero* pi, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (pi[j].age > pi[j + 1].age)
//			{
//				swap(&pi[j], &pi[j + 1]);
//			}
//		}
//	}
//}
//void Print(Hero* pi, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << pi[i].name << "\t" << pi[i].age << "\t" << pi[i].sex << endl;
//	}
//}
//int main()
//{
//	Hero infor[5];
//	Init(infor, 5);
//	cout << "ÅÅÐòÇ°" << endl;
//	Print(infor, 5);
//	BubbleSort(infor, 5);
//	cout << "ÅÅÐòºó" << endl;
//
//	Print(infor, 5);
//
//	system("pause");
//	return 0;
//}