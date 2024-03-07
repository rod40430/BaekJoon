#include <iostream>
using namespace std;


int main(void)
{
	int x;
	cin >> x;
	
	for (int i = 1; i <= x; ++i)
	{
		int a, b;
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << endl;
	}
	
	return 0;
}
