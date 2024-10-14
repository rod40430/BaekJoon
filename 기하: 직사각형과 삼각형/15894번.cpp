#include <iostream>

using namespace std;

int main()
{
    unsigned long int num, sum{};
    cin >> num;

    for (int i{0}; i < num; ++i)
    {
        sum += 3;
    }

    cout << sum + num << endl;
    
    return 0;
}
