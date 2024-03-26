#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main(void)
{
	int t{};
	cin >> t;
	if (t < 1 && t > 1000)
		exit(1);

	vector<pair<int, string>> item;
	for (int i{}; i < t; ++i)
	{
		string word;
		int r{};
		if (t < 1 && t > 8)
			exit(1);
		cin >> r;
		cin >> word;
		item.push_back(make_pair(r, word));
	}

	for (int i{}; i < item.size(); ++i)
	{
		string word{ item[i].second };
		for (const auto& x : word)
			for (int i{}; i < item[i].first; ++i)
				cout << x;

		cout << endl;
	}
		
	
	return 0;
}
