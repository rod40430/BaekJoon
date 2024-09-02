#include <iostream>

using namespace std;

int main()
{
    int a, b;

    for (; 1;)
    {
        cin >> a >> b;
        if (a + b == 0)
            return 0;

        if (b % a == 0)
            cout << "factor" << endl;
        else if (a / b * b == a)
            cout << "multiple" << endl;
        else 
            cout << "neither" << endl;
    }

    return 0;
}
