#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	vector<string> croatia{ "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string word;
	cin >> word;
	int a = word.size();
	
	for (int i{}, j{}; i < word.size(); ++i)
	{
		for (const auto& x : croatia)
			if (word.substr(i, 2) == x)
				a--;
			else if (word.substr(i, 3) == x)
				a--;
	}

	cout << a;

	return 0;
}
