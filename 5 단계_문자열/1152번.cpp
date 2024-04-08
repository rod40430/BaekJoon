#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	string word{};
	getline(cin, word);

	int count{1};

	if (*word.begin() == ' ')
		count--;

	if (*(word.end() - 1) == ' ')
		count--;

	for (const auto& x : word)
	{
		if (x == ' ')
			count++;
	}

	cout << count;


	return 0;
}
