class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i-1==-1 && j-1==-1)
                    dp[i][j] = 1;
                else if(i-1==-1)
                    dp[i][j] = dp[i][j-1];
                else if(j-1==-1)
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = (dp[i-1][j]+dp[i][j-1]);
            }
        }
        return dp[m-1][n-1];
    }
};