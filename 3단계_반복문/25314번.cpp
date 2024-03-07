#include <iostream>
using namespace std;

int main(void)
{
	int x;
	cin >> x;

	if (x >= 4)
		for (int i = 0; i < (x / 4); ++i)
		{
			cout << "long ";
		}
	cout << "int";

	
	return 0;
}
