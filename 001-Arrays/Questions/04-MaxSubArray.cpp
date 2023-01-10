// Find the maximum sum of sub array.

#include <iostream>
using namespace std;

int maxSumSubArray(int arr[], int size){
    int sum = 0;
    int max = arr[0];

    for(int i = 0; i < size; i++){
        sum += arr[i];
        if(sum < 0){
            sum = 0;
        }
        if(sum > max){
            max = sum;
        }
    }
    if(max >= 0) return max;
    return -1;
}

int main(){
    int arr[] = {4, -2, 1, 3, -10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << maxSumSubArray(arr, size);
    return 0;
}

<a href="https://google.com"> <img src="image.png"/></a>