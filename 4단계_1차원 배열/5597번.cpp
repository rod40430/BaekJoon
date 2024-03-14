#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

namespace
{
	const int student = 30;
}

int main(void)
{
	vector<int> item(student);

	int y{ 1 };
	for (auto &x : item)
	{
		x = y++;
	}

	for (int i{}; i < student - 2; ++i)
	{
		int a{};
		cin >> a;
		for (int j{}; j < item.size(); ++j)
			if (a == item[j])
			{
				item.erase(item.begin() + j);
			}
	}

	for (const auto x : item)
		cout << x << endl;

	return 0;
}
