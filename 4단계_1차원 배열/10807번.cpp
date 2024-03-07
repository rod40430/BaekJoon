#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> item;
	int Count;
	cin >> Count;
	for (int i = 0; i < Count; ++i)
	{
		int a;
		cin >> a;
		item.push_back(a);
	}
	int b;
	cin >> b;
	cout << count(item.begin(), item.end(), b);

	return 0;
}
