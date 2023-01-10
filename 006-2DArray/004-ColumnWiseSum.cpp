#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void colWiseSum(int arr[][3], int m, int n){
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum += arr[j][i];
        }
        cout << sum << endl;
    }
}

int main(){
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    colWiseSum(arr, 2, 3);
    return 0;
}