#include <iostream>
#include <algorithm>
#define SIZE 100  //宏定义

using namespace std;

bool cmp(int a,int b) //比较函数，用于实现sort的降序
{
	return a > b;
}

int Func(int* s)
{
	sort(s, s + SIZE, cmp); //降序排列，这里写个别的排序方法也行

	for (int i = 0; i < SIZE; i++)  //找第一个0元素下标
	{
		if (*(s + i) == 0)
		{
			return i;
			break;
		}
	}
}

int main()
{
	int A[SIZE];

	srand((unsigned)time(NULL));  //用当前时间作为种子生成随机数，不使用则rand函数会一直返回同样的值

	for (int i = 0; i < SIZE; i++)
	{
		int sum;
		sum = rand();  //随机数生成

		if (sum <= 20000)  //随机数校验
		{
			A[i] = sum;
		}
		else
		{
			A[i] = 0;
		}
	}


	cout << "第一个为0的元素下标为" << Func(A) << endl;
	
	return 0;
}
