#include <iostream>

using namespace std;

int main()
{
	char a[7][10] = { {"Monday"},
				  {"Tuesday"},
				  {"Wednesday"},
				  {"Thursday"},
				  {"Friday"},
				  {"Saturday"},
				  {"Sunday"} };
	

	while (1)
	{
		int n;
		
		cin >> n;

		if (n > 7 || n < 0)
		{
			cout << "Illegal day" << endl;
			continue;
		}
		else
		{
			cout << *(a+(n-1)) << endl;
		}
	}
	return 0;
}