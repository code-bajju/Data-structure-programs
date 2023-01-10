#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int kthLargest(int arr[], int size, int k){
    sort(arr, arr + size);
    return arr[k - 1];
}

int main(){
    int arr[] = {3, 2, 1, 5, 6, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << kthLargest(arr, size, 3);
    return 0;
}