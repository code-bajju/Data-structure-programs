#include <iostream>
using namespace std;

int getPivot(int arr[], int size, int start, int end){
    int mid = start + (end - start) / 2;

    while(start < end) {
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        } else {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int binarySearch(int arr[], int size, int start, int end, int target){
    int mid = start + (end - start) / 2;
    while(start < end){
        if(arr[mid] == target){
            return mid;
        }
        if(target > arr[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}


int main(){
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pivotIndex = getPivot(arr, size, 0, size - 1);
    int target = 1;
    int result;

    if(arr[pivotIndex] <= target && target <= arr[size - 1]){
       result = binarySearch(arr, size, pivotIndex, size -1, target);
       cout << result;
    } else {
       result = binarySearch(arr, size, 0, pivotIndex -1, target);
       cout << result;
    }

    return 0;
}