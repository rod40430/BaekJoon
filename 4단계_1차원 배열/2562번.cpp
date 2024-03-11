#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<int> item;
    int count{};

    for (int x{}; x < 9; ++x)
    {
        unsigned int i{};
        cin >> i;
        if (i > 100)
            break;
        item.push_back(i);
    }
    int max = *max_element(item.begin(), item.end());
    cout << max << endl;

    for (const int x : item)
    {
        if (x == max)
            break;
        count++;
    }
    cout << count + 1 << endl;


    return 0;
}
