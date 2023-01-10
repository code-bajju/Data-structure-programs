#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> m;
    m.insert({"Name", "Sushant"});
    m.insert({"Address", "Panipat"});

    for(auto i : m) cout << i.first << " " << i.second << endl;
    return 0;
}