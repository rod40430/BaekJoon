#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    
    for (int i{1}; i <= a; ++i)
        {
            int sum{i};
            int temp{i};
            for(;temp != 0;)
                {
                    sum += temp % 10;
                    temp /= 10;
                }
            
            if (sum == a)
            {
                cout<<i<<endl;
                return 0;
            }
        }
    
    cout<<0<<endl;
    
    return 0;
}
