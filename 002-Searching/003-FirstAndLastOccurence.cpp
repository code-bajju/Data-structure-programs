#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int checkFirstOccurence(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;
    int first = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            first = mid;
            end = mid - 1;
        } else if(arr[mid] < target){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return first;
}

int checkLastOccurence(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;
    int last = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            last = mid;
            start = mid + 1;
        } else if(arr[mid] < target){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return last;
}

int main(){
    int arr[] = {1, 2, 3, 3, 3, 3, 3, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int first = checkFirstOccurence(arr, size, 3);
    int last = checkLastOccurence(arr, size, 3);
    cout << first << "," << last;
    return 0;
}