#include <iostream>
using namespace std;

void sort(int *x, int n)
{
  for (int i = 0; i < n; i++)
    for (int j = 0; j < i; j++)
      if (x[j] > x[i])
        swap(x[i], x[j]);
}

void printArray(int x[], int n)
{
  for (int i = 0; i < n; i++)
    cout << x[i] << " ";
}

int main()
{
  int n = 5;
  int x[] = {30, 25, 40, 11, 7};
  sort(x, n);
  printArray(x, n);
}
// T(sort + print) = O(n + n ^ 2) = O(n ^ 2)