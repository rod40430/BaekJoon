#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> number{a, b, c - a, d - b};

    cout<<*min_element(number.begin(), number.end())<<endl;
    
    return 0;
}
