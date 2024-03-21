#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string word;
	cin >> word;
	
	if (word.size() > 1000)
		exit(1);

	int member_count{};
	cin >> member_count;
	if (word.size() < member_count && member_count < 1)
		exit(1);

	cout << word[--member_count];

	return 0;
}
