/*

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m + n - 1;
    int a = m - 1;
    int b = n - 1;

    while(a >= 0 && b >= 0){
        if(nums1[a] > nums2[b]){
            nums1[i] = nums1[a];
            a--;
        } else {
            nums1[i] = nums2[b];
            b--;
        }
        i--;
        }

    while(a >= 0) nums1[i--] = nums1[a--];

    while(b >= 0) nums1[i--] = nums2[b--];
}

int main(){

    return 0;
}