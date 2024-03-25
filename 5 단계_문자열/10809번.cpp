#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string word;
	cin >> word;
	if (word.size() > 100)
		exit(1);
	
	int i{};
	for (int a{ 'a' }; a <= 'z'; ++a)
	{
		cout << int (word.find(a)) << ' ';
	}
		
	
	return 0;
}
