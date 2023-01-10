// Remove spaces and add @40 in string

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removeSpaceAndAdd(string s){
    string newString = "";
    for(int i = 0 ; i < s.length(); i++){
        if(s[i] == ' '){
            newString.push_back('@');
            newString.push_back('4');
            newString.push_back('0');

        } else{
            newString.push_back(s[i]);
        }
    }
    return newString;
}

int main(){
    string s = "S u shant";
    string result = removeSpaceAndAdd(s);
    cout << result;
    return 0;
}