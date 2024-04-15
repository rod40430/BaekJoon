#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string word;
	

	while (getline(cin, word))
	{
		if (word[0] == ' ')
			exit(1);
		cout << word << endl;
	}

	if (word.size() > 100)
		exit(1);
	 
	cout << word;

	return 0;
}
