
// O(n) solution using HASHING

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    map<int, int> mp;
    vector<int> res;
    for(int i = 0; i < nums.size(); i++) {
        int curr = nums[i];
        int x = target - curr;

        if(mp.find(x) != mp.end()) {
            res.push_back(i);
            res.push_back(mp[x]);
        }
        mp[curr] = i;
    }
    return res;
}