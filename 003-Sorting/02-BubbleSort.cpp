#include <iostream>
using namespace std;

int main(){
    int arr[] = {6, 4, 9, 1, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }

    for(int i = 0; i < size; i ++){
        cout << arr[i] << endl;
    }
    return 0;
}