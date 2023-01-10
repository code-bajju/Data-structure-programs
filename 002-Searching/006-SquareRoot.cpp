#include <iostream>
using namespace std;

int binarySearch(int x){
    int start = 0;
    int end = x;

    long long int ans = -1;
    long long int mid = start + (end - start) / 2;

    while(start <= end){
        long long int square = mid * mid;
        if(square == x){
            return mid;
        }
        if(square < x){
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){
    cout << binarySearch(8);
    return 0;
}