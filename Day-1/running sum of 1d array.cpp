// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
// Return the running sum of nums.

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        sum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            sum.push_back(sum[i-1]+nums[i]);
        }
        return sum;
    }
};
