#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int decimal(int num)
{
    for (int i{2}; i * i <= num; ++i)
        {
            if (num % i == 0)
                return false;
        }
    return true;
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> num{};

    for (int i{m}; i <= n; ++i)
        {
            if (m == 1)
                m++;
                
            else if (m < 10000 and n < 10000 and m > n)
                return 0;
                
            else if (decimal(i))
                num.push_back(i);
        }
    int sum{};
    
    for (auto x : num)
            sum += x;
        
    if (num.size() == 0)
        cout<<-1<<endl;
    else
        cout<<sum<<endl<<*min_element(num.begin(), num.end())<<endl;

    return 0;
}
