#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>x, y;

    for (int i{}; i < 3; ++i)
    {
        int a, b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }

    for (auto z : x)
    {
        if (count(x.begin(), x.end(), z) == 1)
            cout << z;
    }

    for (auto z : y)
    {
        if (count(y.begin(), y.end(), z) == 1)
            cout << ' ' << z;
    }
    

    return 0;
}
