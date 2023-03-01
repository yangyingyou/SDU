#include <iostream> //使用c++实现，可以自己看如何用c实现
#include <algorithm>

using namespace std;

void read(float *s)
{
	int m = 10;
	int i = 0;

	while(m!=0)
	{
		float sum;
		
		cin >> sum;

		if (sum >= 0 && sum <= 100) //校验
		{
			*(s + i) = sum;
			i++;
			m--;
		}
		else
			cout << "数据不合法，请重新输入" << endl;
	}
}

void ans(float* t)
{
	for (int i = 0; i < 10 ; i++)  //从头，找最小值
	{
		if (*(t + i) == *(t + i + 1))  //相同，逐个输出
		{
			cout << "成绩最低的学生为：" << i+1 << endl;
			cout << "成绩为：" << *(t + i) << endl;
		}

		if (*(t + i) < *(t + i + 1)) //与后一个不同，输出一次后跳出
		{
			cout << "成绩最低的学生为：" << i+1 << endl;
			cout << "成绩为：" << *(t + i) << endl;
			break;
		}
	}

	for (int i = 9; i > 0; i--) //从尾，找最大值 
	{
		if (*(t + i) == *(t + i - 1))  //原理相同
		{
			cout << "成绩最高的学生为：" << i+1 << endl;
			cout << "成绩为：" << *(t + i) << endl;
		}

		if (*(t + i) > *(t + i - 1))  
		{
			cout << "成绩最高的学生为：" << i+1 << endl;
			cout << "成绩为：" << *(t + i) << endl;
			break;
		}
	}
}

int main()
{
	float a[10];
	read(a); //读入函数，传递地址
	sort(a,a+10); //c++自带的排序函数，c请自己实现排序
	ans(a); //找值，输出。

	return 0;
}