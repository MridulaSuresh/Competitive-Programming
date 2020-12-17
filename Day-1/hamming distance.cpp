// The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
// Given two integers x and y, calculate the Hamming distance.

class Solution {
public:
    int hammingDistance(int x, int y) {
        int n=x^y;
        int count=0;
        while(n!=0){
            int rem=0;
            rem=n%2;
            if(rem!=0)
            {
                count++;
            }
            n=n/2;
        }
        return count;
        
    }
};
