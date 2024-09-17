#include <iostream>
#include <vector>

using namespace std;

int function(int num)
{
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


int main()
{
    int a;
    cin >> a;
    vector<int> count;


    for (int i{ 1 }; i <= a; ++i)
    {
        int num{ a % i };

        if (num == 0 and i != 1)
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
                if (a != 1)
                    cout<<a<<endl;
                return 0;
            }
        }

    return 0;
}
