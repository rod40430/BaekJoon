#include <iostream>
using namespace std;


int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int x;
	cin >> x;

	for (int i = 0; i < x; ++i)
	{
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}
	
	return 0;
}
