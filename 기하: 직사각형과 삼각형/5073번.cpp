#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(void)
{
    while (1)
    {
        vector<unsigned int> num{};
        int a;

        for (int i{}; i < 3; ++i)
        {
            cin >> a;
            num.push_back(a);
        }

        if (accumulate(num.begin(), num.end(), int(0)) == 0)
            return 0;

        if (*max_element(num.begin(), num.end()) >= (accumulate(num.begin(), num.end(), int(0)) - *max_element(num.begin(), num.end())))
            cout << "Invalid" << endl;
            
        else if (count(num.begin(), num.end(), num[0]) == 3)
            cout << "Equilateral" << endl;

        else if (count(num.begin(), num.end(), num[0]) == 2 or count(num.begin(), num.end(), num[1]) == 2)
            cout << "Isosceles" << endl;

        else if (count(num.begin(), num.end(), num[0]) == 1 and count(num.begin(), num.end(), num[1]) == 1)
            cout << "Scalene" << endl;

    }

        return 0;
}
