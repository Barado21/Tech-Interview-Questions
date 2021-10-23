class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<bool> x(n,false);
        x[0]=true;
        for(int i=0;i<n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {   
                if(i<=j+nums[j] && x[j])
                {
                   x[i] = true;
                    break;
                }
            }
        }
        return x[n-1];
    }
};
