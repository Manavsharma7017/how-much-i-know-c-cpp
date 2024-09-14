#include <iostream>
using namespace std;
int left(int arr[], int size, int k)
{
   int s = 0;
   int e = size - 1;
   int mid = s + (e - s) / 2;
   int a = -1;
   while (s <= e)
   {

      if (k == arr[mid])
      {
         a = mid;
         e = mid - 1;
      }
      else if (k > arr[mid])
      {
         s = mid + 1;
      }
      else if (k < arr[mid])
      {
         e = mid - 1;
      }
      mid = s + (e - s) / 2;
   }
   return a;
}
int right(int arr[], int size, int k)
{
   int s = 0;
   int e = size - 1;
   int mid = s + (e - s) / 2;
   int a = -1;
   while (s <= e)
   {

      if (k == arr[mid])
      {
         a = mid;
         s = mid + 1;
      }
      else if (k > arr[mid])
      {
         s = mid + 1;
      }
      else if (k < arr[mid])
      {
         e = mid - 1;
      }
      mid = s + (e - s) / 2;
   }
   return a;
}
int main()
{
   int arr[8]{0, 1, 2, 2, 2, 2, 3, 3};
   int c = left(arr, 8, 2);
   cout << c << endl;
   c = right(arr, 8, 2);
   cout << c << endl;
   return 0;
}