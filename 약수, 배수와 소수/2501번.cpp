#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> count;

    
    for (int i{ 1 }; i <= a; ++i)
    {
        int num{ a % i };

        if (num == 0)
            count.push_back(i);

        if (count.size() == b)
            break;
    }

    if (count.size() != 0)
        cout << count[--b] << endl;
    else
        cout << 0 << endl;


    return 0;
}
