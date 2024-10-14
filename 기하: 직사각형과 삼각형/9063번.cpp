#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>x, y;
    int count;
    cin >> count;

    for (int i{}; i < count; ++i)
    {
        int a, b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }
    if (count <= 1)
    {
        cout << 0 << endl;
        return 0;
    }

    int sum{};
    sum = (*max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end())) * (*max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end()));

    cout << sum << endl;
    
    return 0;
}
