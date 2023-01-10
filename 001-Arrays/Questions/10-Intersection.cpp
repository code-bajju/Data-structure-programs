#include <iostream>
using namespace std;

void intersection(int arrOne[], int arrTwo[], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arrOne[i] == arrTwo[j]){
                cout << arrOne[i] << " ";
            }
        }
    }
}

int main(){
    int arrOne[] = {1, 2, 3, 4, 5, 6};
    int arrTwo[] = {1, 2, 3};
    int m = sizeof(arrOne) / sizeof(arrOne[0]);
    int n = sizeof(arrTwo) / sizeof(arrTwo[0]);

    intersection(arrOne, arrTwo, m , n);
    return 0;
}