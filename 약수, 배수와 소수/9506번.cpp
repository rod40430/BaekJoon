#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    while(1)
    {
        int a, sum{};
        cin >> a;
        if (a < 2)
            break;
        vector<int> count;


        for (int i{ 1 }; i < a; ++i)
        {
           if (a % i == 0)
           {
               count.push_back(i);
               sum += i;
           }
        }
        if (sum != a)
        {
            cout << a << " is NOT perfect.";
        }
        else
        {
            cout<<sum<<" = ";
            for (auto x : count)
                {
                    cout << x;
                    if (x != count.back())
                        cout<<" + ";
                }
        }
        cout<<endl;
    }

    return 0;
}
