#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	unsigned int n, m;
	cin >> n >> m;
	vector<int> item(n, 0);
	int a, b, c;

	if (item.size() <= 100)
		for (int i = 0; i < m; ++i)
		{
			cin >> a >> b >> c;
			for (int k = a - 1; a <= b; ++a)
				item[k++] = c;
		}
	else
		return 0;

	for (auto x : item)
		cout << x << " ";
	

	return 0;
}
