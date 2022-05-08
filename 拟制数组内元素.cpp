//#include <iostream>
//using namespace std;
//void swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void reverse(int* arr, int left, int right)
//{
//	while (left < right)
//	{
//		swap(&arr[left], &arr[right]);
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, 0, sz -1);
//
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	system("pause");
//	return 0;
//}