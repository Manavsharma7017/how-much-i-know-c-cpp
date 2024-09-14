#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum << endl;
     delete []arr;
    return 0;
}