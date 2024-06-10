#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
	string arr;
    int n, sum{};

	cin >> arr >> n;

	for (int i{}; i < arr.length(); i++)
	{
        int tmp = arr[arr.length() - (i + 1)];
        if ('0' <= tmp && tmp <= '9')
        {
            tmp = tmp - '0';
        }
        else
        {
            tmp = tmp + 10 - 'A';
        }
        sum += (tmp * (int)pow(n, i));
	}

    cout << sum << endl;

	return 0;
}
