// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

#include <iostream>
using namespace std;

void sort(int arr[], int size){
    int zeros = 0, ones = 0, twoes = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            zeros++;
        } else if(arr[i] == 1){
            ones++;
        } else if(arr[i] == 2){
            twoes++;
        }
    }
    
    int i = 0;

    while(zeros != 0){
        arr[i] = 0;
        i++;
        zeros--;
    }

    while(ones != 0){
        arr[i] = 1;
        i++;
        ones--;
    }

    while(twoes != 0){
        arr[i] = 2;
        i++;
        twoes--;
    }
}

int main(){
    int arr[] = {2, 0, 2, 1, 1, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
    return 0;
}