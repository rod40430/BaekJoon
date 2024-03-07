#include <iostream>
using namespace std;

int main(void)
{
	int sum{}, max;
	cin >> max;
	for (int i = 1; i <= max; ++i)
	{
		sum += i;
	}
	cout << sum << endl;

	return 0;
}
