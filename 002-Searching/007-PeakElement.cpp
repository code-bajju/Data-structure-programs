#include <iostream>
using namespace std;

int binarySearch(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int result;

    while(start <= end){
        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
            return mid;
        }
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return result;
}

int main(){
    int arr[] = {1,2,1,3,5,6,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, size);
    cout << result;
    return 0;
}