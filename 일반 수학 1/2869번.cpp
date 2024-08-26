#include <iostream>

using namespace std;

int main()
{
    int a, b, v;
    int day{ 1 };
    cin >> a >> b >> v;

    day += (v - a) / (a - b);
    if ((v - a) % (a - b)) cout << ++day;
    else cout << day;

    return 0;
}
