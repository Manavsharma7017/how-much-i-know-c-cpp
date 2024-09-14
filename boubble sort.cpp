#include <iostream>
using namespace std;
void boubblesort(int arr[], int size)
{
  // mistack loop runing more time
  for (int m = 0; m < size; m++)
  {
    int i = 0;
    int j = 1;
    while (i < size && j <= size)
    {
      if (arr[i] > arr[j])
      {
        swap(arr[j], arr[i]);
      }
      i++;
      j++;
    }
  }
  /* or
  right one

   for(int i=1;i<n;i++){
     bool swap =false;
 for( int j=0;j<n-1;j++){
   if(arr[j]>arr[j+1]){
     swap(arr[j+1],arr[j]);
     swap=true;
   }

 }
 if (swap == false){
   breah;
 }
}
*/
}

int main()
{
  int size_of_array;
  cout << "enter size of array" << endl;
  cin >> size_of_array; // 5  4  2  3  1
  int arr[size_of_array];
  cout << "enter your element" << endl;
  for (size_t i = 0; i < size_of_array; i++)
  {
    cin >> arr[i];
  }
  boubblesort(arr, size_of_array);
  cout << "your sorted array is" << endl;
  for (size_t i = 0; i < size_of_array; i++)
  {
    cout << arr[i] << endl;
    ;
  }
}