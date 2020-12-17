// Given an array of integers nums.
// A pair (i,j) is called good if nums[i] == nums[j] and i < j.
// Return the number of good pairs.

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto i:nums)
        {
            map[i]++;
        }
        int count=0;
        for(auto i:map)
        {
            int num=i.second;
            count+=(num*(num-1))/2;
        }
        return count;
    }
};
