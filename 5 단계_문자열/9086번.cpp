#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int count{};
	cin >> count;
	if (count < 1 && count > 1000)
		exit(1);

	vector<string> item(count);
	string word;
	for (auto& x : item)
	{
		cin >> word;
		if (word.size() > 1000)
			exit(1);

		x = word;
	}
	for (const string x : item)
	{
		cout << *x.begin() << *(x.end() - 1) << endl;
	}

	
	return 0;
}
