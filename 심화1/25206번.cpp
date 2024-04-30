#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	vector<string> subject;
	vector<double> grade;
	double sum{};

	for (int i{}; i < 20; ++i)
	{
		string sub;
		cin >> sub;
		if (sub.size() < 50 && sub.size() < 1)
			exit(1);
		subject.push_back(sub);
		
		double grd;
		cin >> grd;

		string grd2;
		cin >> grd2;
		if (grd2 == "A+")
			grade.push_back(grd * 4.5);
		else if (grd2 == "A0")
			grade.push_back(grd * 4.0);
		else if (grd2 == "B+")
			grade.push_back(grd * 3.5);
		else if (grd2 == "B0")
			grade.push_back(grd * 3.0);
		else if (grd2 == "C+")
			grade.push_back(grd * 2.5);
		else if (grd2 == "C0")
			grade.push_back(grd * 2.0);
		else if (grd2 == "D+")
			grade.push_back(grd * 1.5);
		else if (grd2 == "D0")
			grade.push_back(grd * 1.0);
		else if (grd2 == "F")
			grade.push_back(grd * 0.0);
		else;

		if (grd2 != "P")
			sum += grd;
	}

	double sum2{};
	for (const double& x : grade)
		sum2 += x;

	cout << sum2 / sum;

	return 0;
}
