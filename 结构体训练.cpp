#include <iostream>
using namespace std;
#include <string>
#include <ctime>
typedef struct student
{
	string name_stu;
	int score;

}stu;
typedef struct teacher
{
	string name_tea;
	stu student[5];

}teac;
void fun(teac* pt, int len)
{
	for (int i = 0; i < len; i ++ )
	{
		pt[i].name_tea = "wuhao";
		for (int j = 0; j < 5; j++)
		{
			pt[i].student[j].name_stu = "aaaa";
			pt[i].student[j].score = rand() % 60 + 40;
		}
	}
}
void PrintInfor(teac* pt, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "教师姓名： " << pt[i].name_tea << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名： " << pt[i].student[j].name_stu<<"  " << "成绩： " << pt[i].student[j].score << endl;
		}
		cout << endl;
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	teac teacher[3];
	fun(teacher, 3);
	PrintInfor(teacher, 3);
	system("pause");
	return 0;
}