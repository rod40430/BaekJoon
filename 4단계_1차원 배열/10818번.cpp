#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
  int count;
  cin>>count;
  if (1 > count > 1000000)
  {
    return -1;
  }
  vector<int> item;

  for (int i = 0; i < count; ++i)
    {
      int x;
      cin>>x;
      item.push_back(x);
    }

  cout<<*min_element(item.begin(), item.end());
  cout<<" "<<*max_element(item.begin(), item.end());

  return 0;
}
