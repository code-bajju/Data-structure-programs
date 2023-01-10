#include <iostream>
using namespace std;

void mergerSortedArray(int arrOne[], int arrTwo[], int arrThree[], int m, int n){
    int i = 0, j = 0, k = 0;
    while(i < m && j < n){
        if(arrOne[i] < arrTwo[j]){
            arrThree[k++] = arrOne[i++];
        } else {
            arrThree[k++] = arrTwo[j++];
        }
    }

    while(i <= n){
        arrThree[k++] = arrOne[i++];
    }

    while(j <= m){
        arrThree[k++] = arrTwo[j++];
    }
}

int main(){
    int arrOne[4] = {1, 3, 5, 7};
    int arrTwo[3] = {2, 4, 6};
    int arrThree[7] = {};
    int size = sizeof(arrThree) / sizeof(arrThree[0]);

    mergerSortedArray(arrOne, arrTwo, arrThree, 4, 3);

    for(int i = 0; i < size; i++){
        cout << arrThree[i] << endl;
    }
    return 0;
}