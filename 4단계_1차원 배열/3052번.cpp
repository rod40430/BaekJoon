#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> item(10);
	
	int count{1};
	for (auto &Item : item)
	{
		unsigned int x;
		cin >> x;
		if (x > 1000)
			exit(1);
		Item = x % 42;
	}
	sort(item.begin(), item.end());
	item.erase(unique(item.begin(), item.end()), item.end());

	cout << item.size() << endl;

	return 0;
}
