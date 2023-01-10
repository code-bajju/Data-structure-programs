#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void convertToLower(string &s){
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i] + 32;
            }
        }
}

string removeSpecialCharacters(string s){
    string newString = "";
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'){
            newString.push_back(s[i]);
        }
    }
    return newString;
}

string reverseString(string s){
    int start = 0;
    int end = s.length() - 1;
    string rString = s;

    while(start <  end){
        swap(rString[start], rString[end]);
        start++;
        end--;
    }
    return rString;
}

int main(){
    string s = "0P";
    convertToLower(s);
    string nString = removeSpecialCharacters(s);
    
    string rString = reverseString(nString);
    if(nString == rString) cout << "Palindrome";
    else cout << "Not Palindrome" << endl;
    
    return 0;
}