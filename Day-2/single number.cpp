// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// Follow up: Could you implement a solution with a linear runtime complexity and without using extra memory?

class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i])!=s.end())
            {
                s.erase(nums[i]);
            }
            else
            {
                s.insert(nums[i]);
            }
            
        }
        int m=0;
        for(auto itr=s.begin();itr!=s.end();itr++)
        {
            m=*itr;
        }
        return m;
    }
};
