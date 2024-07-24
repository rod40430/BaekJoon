#include <iostream>
#include <vector>

using namespace std;

class money
{
public:

	int Quarter{ 25 };
	int Dime{ 10 };
	int Nickel{ 5 };
	int Penny{ 1 };
};

int main()
{
	money m;
	vector<int> arr{};
	int num{};

	cin >> num;

	int coin;

	for (int i{}; i < num; ++i)
	{
		cin >> coin;
		if (coin > 500)
		{
			cout << "거스름 돈은 5$가 최대입니다." << endl;
			exit(1);
		}
		arr.push_back(coin);
	}

	for (const auto& x :arr)
	{
		vector<int> count(4,0);
		int c{ x };

		while (c >= m.Quarter)
		{
			c -= m.Quarter;
			count[0]++;
		}
		while (c >= m.Dime)
		{
			c -= m.Dime;
			count[1]++;
		}
		while (c >= m.Nickel)
		{
			c -= m.Nickel;
			count[2]++;
		}
		while (c >= m.Penny)
		{
			c -= m.Penny;
			count[3]++;
		}

		for (const auto& j : count)
			cout << j << " ";
		cout << endl;
	}
}
