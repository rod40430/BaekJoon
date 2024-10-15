#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<unsigned int> num{};

    for (int i{}; i < 3; ++i)
    {
        int a;
        cin >> a;
        if (a >= 180)
            return 0;
        num.push_back(a);
    }

    if (num[0] == 60 and num[1] == 60 and num[2] == 60)
    {
        cout << "Equilateral" << endl;
    }
    else if (accumulate(num.begin(), num.end(), int(0)) == 180)
    {
        if (count(num.begin(), num.end(), num[0]) == 2 or count(num.begin(), num.end(), num[1]) == 2)
            cout << "Isosceles" << endl;
        else if (count(num.begin(), num.end(), num[0]) == 1 and count(num.begin(), num.end(), num[1]) == 1)
            cout << "Scalene" << endl;

    }
    else if (accumulate(num.begin(), num.end(), int(0)) != 180)
    {
        cout << "Error";
    }
    else
        return 0;
}
