#include <iostream>
using namespace std;

int f(int n)
{
  int sum = 0;
  for (int k = 1; k <= n; k *= 2) // Do log(n) times
    for (int j = 1; j <= n; j++)  // Do n times
      sum++;
  return sum;
}

int main()
{
  int n = 5;
  f(n);
}

// T(f) = O(n * log(n))