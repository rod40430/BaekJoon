#include <iostream>
using namespace std;


int main(void)
{
	int x;
	cin >> x;
	
	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j <= i; ++j)
			cout << "*";
		cout << endl;
	}
	
	return 0;
}
