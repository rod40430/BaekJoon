#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Afunction(vector<vector<int>>& arr);

int main(void)
{
	vector<vector<int>> arr1(9, vector<int>(9));
	
	Afunction(arr1);

	int max{}, maxindex{};
	for (int i{}; i < arr1.size(); ++i)
	{
		int max_em = *max_element(arr1[i].begin(), arr1[i].end());
		if (max < max_em)
		{
			maxindex = i;
			max = max_em;
		}
	}

	cout << max << endl;
	cout << maxindex + 1 << " " << int(max_element(arr1[maxindex].begin(), arr1[maxindex].end()) - arr1[maxindex].begin()) + 1;

	return 0;
}

void Afunction(vector<vector<int>>& arr)
{
	for (int i{}; i < arr.size(); ++i)
	{
		for (int j{}; j < arr[i].size(); ++j)
		cin >> arr[i][j];
	}

	return;
}
