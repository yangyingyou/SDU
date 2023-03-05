#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s[100];

	cin >> s;

	for (int i = 0; i < strlen(s); i++)
	{
		if (*(s + i) - '0' >= 0 && *(s + i) - '0' <= 9)
		{
			cout << *(s + i);
			if (*(s + i + 1) - '0' <= 0 || *(s + i + 1) - '0' >= 9)
			{
				cout << ' ';
			}
		}
	}
	return 0;
}