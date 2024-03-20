#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	unsigned int n, m;
	cin >> n >> m;
	vector<int> item(n);

	int count{};
	for (auto& x : item)
	{
		x = ++count;
	}

	for (int a{}; a < m; ++a)
	{
		int i, j;
		cin >> i >> j;
		if (100 >= i <= 1 && 100 >= j < 1)
			exit(1);

		reverse(item.begin() + --i, item.begin() + j);
	}
	for (const auto x : item)
		cout << x << " ";
	
	return 0;
}
