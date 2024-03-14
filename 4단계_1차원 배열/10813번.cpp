#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	unsigned int n, m;
	cin >> n >> m;
	vector<int> item(n);
	int value{ 1 };
	for (auto &x : item)
	{
		x = value++;
	}

	int x, y;

	if (item.size() <= 100)
		for (int i = 0; i < m; ++i)
		{
			cin >> x >> y;
			swap(item[x - 1], item[y - 1]);
		}
	else
		return 0;

	for (const auto x : item)
		cout << x << " ";
	

	return 0;
}
