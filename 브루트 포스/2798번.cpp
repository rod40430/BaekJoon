#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;

    vector<int> num{};
    for (int i{ 0 }; i < n; ++i)
    {
        int a;
        cin >> a;
        num.push_back(a);
    }

    int sum, king{};
    for (int i{ 0 }; i < n - 2; ++i)
    {
        for (int j{ i + 1 }; j < n - 1; ++j)
        {
            for (int k{ j + 1 }; k < n; ++k)
            {
                sum = num[i] + num[j] + num[k];
                if (sum == m)
                {
                    king = sum;
                    break;
                }
                if (king < sum and sum <= m)
                {
                    king = sum;
                }
            }
        }
    }

    cout << king << endl;
    
    return 0;
}
