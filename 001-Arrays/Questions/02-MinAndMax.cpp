#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 5, 2, 4, 8, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < size; i++) {
        if(min > arr[i]){
            min = arr[i];
        }
    }

    for (int i = 0; i < size; i++) {
        if(max < arr[i]){
            max = arr[i];
        }
    }

    cout << "max: " << max << " min: " << min << endl;

    return 0;
}