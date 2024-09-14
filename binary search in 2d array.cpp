#include<iostream>
using namespace std;
int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
        int row = 3;
        int col = 3;
        int start = 0;
        int end = row * col -1;
        int mid = start + (end - start) / 2;
        int target;
        cin>>target;
        while (start <= end) {
            int element = matrix[mid / col][mid % col];
            if (target == element) {
                return 1;
            } else if (target > element) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return 0;
    }