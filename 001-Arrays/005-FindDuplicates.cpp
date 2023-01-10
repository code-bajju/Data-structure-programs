#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findDuplicate(int arr[], int size)
{
    sort(arr, arr + size);
    for (int i = 0; i < size; i += 2)
    {
        if (arr[i] == arr[i + 1])
        {
            cout << arr[i] << endl;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    findDuplicate(arr, size);
    return 0;
}