#include <iostream>
using namespace std;

int sum(int n)
{
  int sum = 0;
  for (int k = 1; k <= n; ++k)
    sum++;
  return sum;
}

int main()
{
  int n = 5;
  sum(n);
}
// T(sum) = O(n)