#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	vector<string> arr1(5);
	
	for (int i{}; i < arr1.size(); ++i)
	{
		cin >> arr1[i];
		if (arr1[i].size() > 15)
			exit(1);
	}

	for (int i{}; i < 15; ++i)
	{
		for (int j{}; j < arr1.size(); ++j)
			if (arr1[j].size() > i)
				cout << arr1[j][i];
	}

	return 0;
}
