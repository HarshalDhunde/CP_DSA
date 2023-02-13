#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        unordered_map<int,int> um;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(um.find(x)==um.end()){
                // return {i,um[x]};
                um[nums[i]]=i;
            }
            else{
                return {um[x],i};
            }
        }
        return {-1,-1};
    }    
};