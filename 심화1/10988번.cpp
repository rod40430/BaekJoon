#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string word;
	cin >> word;

	if (word.size() < 1 && word.size() > 100)
		exit(1);

	int x{}, y = word.size() * 0.5;

	for (int i{}, j{1}; i < y; ++i, ++j)
	{
		if (*(word.begin() + i) == *(word.end() - j))
			x++;
	}
	if (x == y)
		cout << 1;
	else
		cout << 0;

	return 0;
}
