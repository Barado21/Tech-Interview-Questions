class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
            sum+=nums[i];
        // if sum odd, then no partition possible....
        if(sum&1)
            return false;
        
        // reducing it to problem: find subset such that sum of subset is k [= sum/2 ]........
        sum/=2;
        bool dp[n+1][sum+1];
        for(int i =0;i<=n;i++)
        {
            dp[i][0] = true;
        }
        for(int i =0;i<=sum;i++)
        {
            dp[0][i] = false;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(j-nums[i-1]>=0)
                {
                    dp[i][j] = (dp[i-1][j-nums[i-1]] or dp[i-1][j]);
                }
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
};
