#include <iostream>
using namespace std;

int findMax(int arr[], int size){
    int max = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size){
    int min = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, -1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Max: " << findMax(arr, size) << " Min: " << findMin(arr, size);    
    return 0;
}