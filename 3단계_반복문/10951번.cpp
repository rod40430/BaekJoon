#include <iostream>
using namespace std;

int main(void)
{
	unsigned int a, b;

	while(cin>>a>>b)
	{
		if (a > 10 && b > 10 && a < 0 && b < 0)
			break;

		cout << a + b << endl;
	}

	return 0;
}
