// Given an array A[] of N numbers and another number x, determine whether or not there exist three elements in A[] whose sum is exactly x.

#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int n,x;
        cin>>n;
        cin>>x;
        vector<int> nums;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            nums.push_back(temp);
        }
        bool found=false;
        for(int i=0;i<n-1;i++)
        {
            unordered_set<int> s;
            for(int j=i+1;j<n;j++)
            {
                int a=nums[i];
                int b=nums[j];
                int c=x-(a+b);
                if(s.find(c)!=s.end())
                {
                    found=true;
                    break;
                }
                else
                {
                    s.insert(b);
                }
            }
            if(found) break;
        }
        if(found)
        {
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}
