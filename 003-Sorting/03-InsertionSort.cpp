#include <iostream>
using namespace std;

int main(){
    int arr[] = {6, 4, 9, 1, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 1; i < size; i++){
        int temp = arr[i], j = i - 1;
        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j = j -1;
        }
        arr[j + 1] = temp;
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }

    return 0;
}