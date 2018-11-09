class Solution {  
public:  
    /** 
     * @param n, m: positive integer (1 <= n ,m <= 100) 
     * @return an integer 
     */  
    int uniquePaths(int m, int n) {  
        // wirte your code here  
        if (n == 1 || m == 1) return 1;  
        if (n == 2) return m;  
        if (m == 2) return n;  
        int dp[2][m];  
        for (int i = 0; i < m; i++){  
            dp[0][i] = i + 1;  
            dp[1][i] = i + 1;  
        }  
        for (int i = 3; i <= n; i++)  
            for (int j = 1; j < m; j++)  
                dp[i%2][j] = dp[(i-1)%2][j] + dp[i%2][j-1];  
        return dp[n%2][m-1];          
    }  
};
