#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> max;

    max.push(1);
    max.push(2);
    max.push(3);

    int size = max.size();

    for(int i = 0; i < size; i++) {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> min;

    min.push(1);
    min.push(2);
    min.push(3);

    size = min.size();

    for(int i = 0; i < size; i++) {
        cout << min.top() << " ";
        min.pop();
    }
    return 0;
}