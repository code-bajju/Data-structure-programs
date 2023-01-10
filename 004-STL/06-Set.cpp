#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;

    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(5);

    int size = s.size();

    for(auto i : s) cout << i << " ";

    set<int>::iterator it = s.begin();
    s.erase(it);

    cout << endl;
    cout << "After Erasing" << endl;

    for(auto i : s) cout << i << " ";

    return 0;
}