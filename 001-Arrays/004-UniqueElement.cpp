#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findUnique(int arr[], int size){
    sort(arr, arr + size);
    for(int i = 0; i < size; i += 2){
        if(arr[i] != arr[i + 1]){
            cout << arr[i] << endl;
        }
    }
}

int main(){
    int arr[] = {1, 2, 3, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    findUnique(arr, size);
    return 0;
}