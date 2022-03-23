#include<bits/stdc++.h>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        int idx=0;
        for(auto el:nums)
            umap[el]=idx++;
        for(int i=0;i<nums.size();i++){
            if(umap.find(target-nums[i])!=umap.end() and i!=umap[target-nums[i]])
                return {i, umap[target-nums[i]]};
        }
        
        return {};
    }
};