#include <iostream>
#include <algorithm>
#define SIZE 100

using namespace std;

bool cmp(int a,int b) //�ȽϺ���������ʵ��sort�Ľ���
{
	return a > b;
}
int Func(int* s)
{
	sort(s, s + SIZE, cmp);

	for (int i = 0; i < SIZE; i++)
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

	srand((unsigned)time(NULL));

	for (int i = 0; i < SIZE; i++)
	{
		int sum;
		sum = rand();

		if (sum <= 20000)
		{
			A[i] = sum;
		}
		else
		{
			A[i] = 0;
		}
	}


	cout << "��һ��Ϊ0��Ԫ���±�Ϊ" << Func(A) << endl;
	
	return 0;
}