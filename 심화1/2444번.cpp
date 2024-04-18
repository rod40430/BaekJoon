#include <iostream>
using namespace std;

int main(void)
{
	int N{};
	cin>>N;

	N = N * 2 - 1;
	int o = N / 2;

	for (int i = -o; i <= o; i++) {
		int k = 0;
		for (int j = 0; j < N - abs(i); j++) {
			cout << (k < abs(i) ? ' ' : '*');
			k++;
		}
		cout << endl;
	}

	return 0;
}
