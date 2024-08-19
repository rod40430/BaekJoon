#include <iostream>

using namespace std;

int main()
{
    int num, i{ 1 };

    cin >> num;
    
    for (; num > i; i++)
    {
        num -= i;
    }

    if (i % 2 == 1)
        cout << i + 1 - num << '/' << num << endl;
    else
        cout << num << '/' << i + 1 - num << endl;

    return 0;
}
