#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rowWiseSum(int arr[][3], int m, int n){
    for(int i = 0; i < m; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

int main(){
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    rowWiseSum(arr, 2, 3);
    return 0;
}