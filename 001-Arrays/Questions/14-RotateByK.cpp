/*
Given an array, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotateByK(vector<int> nums, int k){
    vector<int> temp(nums.size());

    for(int i = 0; i < nums.size(); i++){
        temp[(i + k) % nums.size()] = nums[i];
    }
    for(int i = 0; i < temp.size(); i++){
        cout << temp[i] << " ";
    }
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    rotateByK(nums, 4);
    
    return 0;
}