#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[7]{0, 1, 2, 3, 4, 5, 6};
    int b;
    cin >> b;
    int index = binarysearch(arr, 7, b);
    cout << "index is:";
    cout << index << endl;

    return 0;
}