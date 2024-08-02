#include <iostream>

using namespace std;

int main()
{
    int a, b{1};
    cin >> a;
    for (int i{0}; 1; i++)
    {
        int num{ 6 };
        b += num * i;
        if (a > b)
        {
        }
        else
        {
            cout << i + 1;
            break;
        }
    }
}
