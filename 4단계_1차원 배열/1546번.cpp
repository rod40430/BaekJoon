#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	unsigned int n;
	cin >> n;
	if (1000 < n)
		exit(1);
	vector<unsigned int> item(n);

	for (auto& x : item)
	{
		int i;
		cin >> i;
		if (100 < i)
			exit(1);
		x = i;
	}

	int max_point = *max_element(item.begin(), item.end());

	double sum{};

	for (const auto& x : item)
	{
		sum += x;
	}
	
	cout << (sum / max_point * 100) / item.size() << endl;
	

	return 0;
}
