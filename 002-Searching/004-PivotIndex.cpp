#include <iostream>
using namespace std;

int pivot(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        } else {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main(){
    int arr[] = {8, 10, 17, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << pivot(arr, size);
    return 0;
}