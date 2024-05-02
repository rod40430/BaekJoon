#include<iostream>
#include <vector>

using namespace std;

void Afunction(vector<vector<int>>& arr);

int main(void)
{
	int a, b;
	cin >> a >> b;

	vector<vector<int>> arr1(a, vector<int>(b));
	vector<vector<int>> arr2(a, vector<int>(b));
	
	Afunction(arr1);
	Afunction(arr2);

	for (int i{}; i < arr1.size(); ++i)
	{
		for (int j{}; j < arr1[i].size(); ++j)
			cout << arr1[i][j] + arr2[i][j] << ' ';
		cout << endl;
	}

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
