#include <iostream> //ʹ��c++ʵ�֣������Լ��������cʵ��
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

		if (sum >= 0 && sum <= 100) //У��
		{
			*(s + i) = sum;
			i++;
			m--;
		}
		else
			cout << "���ݲ��Ϸ�������������" << endl;
	}
}

void ans(float* t)
{
	for (int i = 0; i < 10 ; i++)  //��ͷ������Сֵ
	{
		if (*(t + i) == *(t + i + 1))  //��ͬ��������
		{
			cout << "�ɼ���͵�ѧ��Ϊ��" << i+1 << endl;
			cout << "�ɼ�Ϊ��" << *(t + i) << endl;
		}

		if (*(t + i) < *(t + i + 1)) //���һ����ͬ�����һ�κ�����
		{
			cout << "�ɼ���͵�ѧ��Ϊ��" << i+1 << endl;
			cout << "�ɼ�Ϊ��" << *(t + i) << endl;
			break;
		}
	}

	for (int i = 9; i > 0; i--) //��β�������ֵ 
	{
		if (*(t + i) == *(t + i - 1))  //ԭ����ͬ
		{
			cout << "�ɼ���ߵ�ѧ��Ϊ��" << i+1 << endl;
			cout << "�ɼ�Ϊ��" << *(t + i) << endl;
		}

		if (*(t + i) > *(t + i - 1))  
		{
			cout << "�ɼ���ߵ�ѧ��Ϊ��" << i+1 << endl;
			cout << "�ɼ�Ϊ��" << *(t + i) << endl;
			break;
		}
	}
}

int main()
{
	float a[10];
	read(a); //���뺯�������ݵ�ַ
	sort(a,a+10); //c++�Դ�����������c���Լ�ʵ������
	ans(a); //��ֵ�������

	return 0;
}