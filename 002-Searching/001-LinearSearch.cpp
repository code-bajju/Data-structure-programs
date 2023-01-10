#include <iostream>
using namespace std;

bool isPresent(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[] = {4, 2, 6, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = isPresent(arr, size, 6);
    if(result){
        cout << "Number is Present";
    } else {
        cout << "Number is not Present";
    }
    return 0;
}