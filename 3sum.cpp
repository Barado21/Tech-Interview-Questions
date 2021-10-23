#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        if(nums.size()<=2)
            return v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums[i]>0)
                continue;
            if(i>0 && nums[i-1]==nums[i])
                continue;
            int low=i+1;
            int high=nums.size()-1;
            while(low<high)
            {
                if(nums[i]+nums[low]+nums[high]==0)
                {
                    vector<int> s;
                    s.push_back(nums[i]);
                    s.push_back(nums[low]);
                    s.push_back(nums[high]);
                     v.push_back(s);
                    low++;
                    high--;
                    while(low<high && nums[low]==nums[low-1])
                        low++;
                }
                else if(nums[i]+nums[low]+nums[high]>0)
                    high--;
                else
                    low++;
                //cout<<low<<" "<<high<<endl;
            }
        }
        return v;
    }
};
