#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	unsigned int n;;
	cin >> n;
	if (n > 100)
		exit(1);

	string item;
	cin >> item;

	int sum{};
	for (int i{}; i < n; ++i)
	{
		sum += item[i] - 48;
	}

	cout << sum;
	
	return 0;
}
