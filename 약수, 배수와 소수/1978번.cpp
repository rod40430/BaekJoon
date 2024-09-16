#include <iostream>

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
    int num, count{};
    cin >> count;
    int sum{};
    for (int i{}; i < count; ++i)
    {
        cin >> num;
        if (num == 1);
        else if (function(num))
            sum++;
    }
    cout << sum << endl;


    return 0;
}
