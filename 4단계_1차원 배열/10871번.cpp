#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> item;
	int Count, b;
	cin >> Count >> b;
	for (int i = 0; i < Count; ++i)
	{
		int a;
		cin >> a;
		item.push_back(a);
	}
	for (int i = 0; i < item.size(); ++i)
		if (item[i] < b)
			cout << item[i] << " ";

	return 0;
}
