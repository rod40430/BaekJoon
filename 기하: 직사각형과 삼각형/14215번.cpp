#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(void)
{
  vector<unsigned int> tr{};
  for (int i{}; i < 3; ++i)
    {
      int a;
      cin>>a;
      tr.push_back(a);
    }
  int sum{accumulate(tr.begin(), tr.end(), int(0))};
  int max = *max_element(tr.begin(), tr.end());
  
  if (max >= (sum - max))
  {
    cout<<(sum - max) * 2 - 1<<endl;
  }
    
  else
    cout<<sum<<endl;

  return 0;
}
