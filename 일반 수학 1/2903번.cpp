#include <iostream>

using namespace std;

int main()
{
	int n, num{ 2 };
	cin >> n;

	while (n--)
		num += (num - 1);
	cout << num * num;
}
