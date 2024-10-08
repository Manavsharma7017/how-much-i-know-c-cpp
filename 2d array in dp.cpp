#include <iostream>
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m;
  int **arr = new int *[n];
  for (size_t i = 0; i < n; i++)
  {
    arr[i] = new int[m];
  }
  cout << endl;
  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < m; j++)
    {
      cin >> arr[i][m];
    }
  }
  int sum = 0;
  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < m; j++)
    {
      sum = sum + arr[i][m];
    }
  }
  cout << sum << endl;
  for (size_t i = 0; i < n; i++)
  {
    delete[] arr[i];
  }
  delete[] arr;

  return 0;
}