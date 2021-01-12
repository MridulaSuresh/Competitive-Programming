// Alice and Bob have candy bars of different sizes: A[i] is the size of the i-th bar of candy that Alice has, and B[j] is the size of the j-th bar of candy that Bob has.

// Since they are friends, they would like to exchange one candy bar each so that after the exchange, they both have the same total amount of candy.  (The total amount of candy a person has is the sum of the sizes of candy bars they have.)

// Return an integer array ans where ans[0] is the size of the candy bar that Alice must exchange, and ans[1] is the size of the candy bar that Bob must exchange.

// If there are multiple answers, you may return any one of them.  It is guaranteed an answer exists.

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sum1=accumulate(A.begin(),A.end(),0);
        int sum2=accumulate(B.begin(),B.end(),0);
        int final_=(sum1+sum2)/2;
        unordered_set<int> s;
        vector<int> result;
        for(int i=0;i<B.size();i++)
        {
            s.insert(B[i]);
        }
        for(int i=0;i<A.size();i++)
        {
            int required=final_-sum1+A[i];
            if(s.find(required)!=s.end())
            {
                result.push_back(A[i]);
                result.push_back(required);
                break;
            }
        }
        return result;
    
    }
};
