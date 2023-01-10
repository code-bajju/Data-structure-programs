#include <iostream>
using namespace std;

void swapAlternative(int arr[], int size){
    for(int i = 0; i < size; i += 2){
        if(i + 1 < size){
            swap(arr[i], arr[i + 1]);
        }
    }
} 


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    swapAlternative(arr, size);
    
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
    return 0;
}