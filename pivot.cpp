#include <iostream>
using namespace std;
int main()
{
    int arr[6]{9,10 , 19,2, 4, 5};
    int s = 0, e = 5;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            e = mid;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << arr[s] << endl;
    return 0;
}
