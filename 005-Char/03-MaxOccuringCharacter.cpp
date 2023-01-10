#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char getMaxOccur(string s){
    int arr[26] = {0};
    int n = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            n = s[i] - 'a';
        } else {
            n = s[i] - 'A';
        }
        arr[n]++;
}
    

    int max = -1, ans = 0;
    for(int i = 0; i < 26; i++){
        if(arr[i] > max){
            ans = i;
            max = arr[i];
        }
    }
    return ans + 'a';
}

int main(){
    string name = "sushant";
    char ans = getMaxOccur(name);
    cout << ans << endl;
    return 0;
}