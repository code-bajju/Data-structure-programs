#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    cout << "Enter Elements: ";

    // Taking Input
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<2; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}