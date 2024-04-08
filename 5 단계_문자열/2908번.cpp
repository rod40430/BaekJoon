#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	string a, b;
	cin >> a >> b;

	if (a.size() > 3 && b.size() > 3)
		exit(1);
	if (a.size() < 1 && b.size() < 1)
		exit(1);
	if (*a.begin() == '0' && *b.begin() == '0')
		exit(1);
	
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	
	a > b ? cout << a : cout << b;

	return 0;
}
