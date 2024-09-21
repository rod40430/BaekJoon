#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int function(int num)
{
    for (int i{2}; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int a;
    cin >> a;
    vector<int> count{};

    if (a == 1)
        return 0;
    
    for (int i{1};i <= (int)sqrt(a); ++i)
    {
        if (a % i == 0 and i != 1)
            count.push_back(i);
    }
    
    for (; 1;)
        {
            for(auto x : count)
                {
                    if (a % x == 0)
                    {
                        a /= x;
                        cout<<x<<endl;
                        break;
                    }
                }
            if (function(a))
            {
                cout<<a<<endl;
                return 0;
            }
        }

    return 0;
}
