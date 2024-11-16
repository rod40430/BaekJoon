#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(void)
{
    vector<int> a;

    for (int i{}; i < 5; ++i)
    {
        int k;
        cin >> k;

        a.push_back(pow(k, 2));
    }

    int sum{};

    for (auto x : a)
    {
        sum += x;
    }
    cout << sum % 10 << endl;
    
    return 0;
}
