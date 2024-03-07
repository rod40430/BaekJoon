#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<pair<unsigned int, unsigned int>> item;
	int x, y;
	cin >> x >> y;
	item.push_back(make_pair(x, y));
	
	unsigned int sum{};
	for (int i = 1; i <= item[0].second; ++i)
	{
		cin >> x >> y;
		item.push_back(make_pair(x, y));
		sum += (item[i].first * item[i].second);
	}

	if (item[0].first == sum)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
