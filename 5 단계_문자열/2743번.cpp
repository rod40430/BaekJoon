#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string word;
	cin >> word;
	
	if (word.size() > 100)
		exit(1);

	cout << word.size();

	return 0;
}
