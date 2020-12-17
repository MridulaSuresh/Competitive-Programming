// Given an integer number n, return the difference between the product of its digits and the sum of its digits.

 class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1,sum=0,m;
        while(n!=0){
            m=n%10;
            product=product*m;
            sum=sum+m;
            n=n/10;
        } 
        return product-sum;        
    }
};
