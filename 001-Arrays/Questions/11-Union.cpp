#include <iostream>
using namespace std;

void getUnion(int arrOne[], int arrTwo[], int m, int n){
    int i = 0;
    int j = 0;
    while(i < m && j < n){
            if(arrOne[i] < arrTwo[j]){
                cout << arrOne[i] << " ";
                i++;
               
            } else if(arrTwo[j] > arrOne[i]) {
                cout << arrTwo[j] << " ";
                j++;
            }
    }
    while(i < m){
            cout << arrOne[i++] << " ";
    }
    while(j < n){
            cout << arrTwo[j++] << " ";
    }
}

int main(){
    int arrOne[] = {1, 2, 3, 4, 5, 6};
    int arrTwo[] = {1, 2, 3, 9, 33, 25};
    int m = sizeof(arrOne) / sizeof(arrOne[0]);
    int n = sizeof(arrTwo) / sizeof(arrTwo[0]);

    getUnion(arrOne, arrTwo, m , n);
    return 0;
}