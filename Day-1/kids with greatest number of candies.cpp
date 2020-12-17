// Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.
// For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the greatest number of candies among them. Notice that multiple kids can have the greatest number of candies.

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int max=*max_element(candies.begin(),candies.end());
        vector<bool> v;
        for(int i=0;i<n;i++)
        {
            if((extraCandies+candies[i])>=max)
            {
                v.push_back(true);
            }
            else{
                v.push_back(false);
            }
         }
     return v;
    }
};
