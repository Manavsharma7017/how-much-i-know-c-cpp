#include <iostream>
using namespace std;
void INSERTIONSORT (int arr[],int size){
      int i,temp, j;
    for (i = 1; i < size; i++) {
        temp = arr[i];
        j = i - 1;
      for (; j >= 0; j--){
          if(arr[j]>temp){
            arr[j + 1] = arr[j];
          }
          else{
            break;
          }
        }
        arr[j + 1] = temp;
    }
    /* for (int i = 1; i < n; i++) {
      int temp = arr[i];
       int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
          arr[j + 1] = arr[j];
          j = j - 1;
        }
        arr[j + 1] = temp;
    } */

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
INSERTIONSORT(arr, size_of_array);
cout << "your sorted array is" << endl;
  for (size_t i = 0; i < size_of_array; i++)
  {
    cout <<arr[i] << endl;

}
  return 0;
}