//70. Climbing Stairs

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
    // dp[i] := # of distinct ways to climb to i-th stair
    vector<int> dp(n + 1);
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; ++i)
      dp[i] = dp[i - 1] + dp[i - 2];

    return dp[n];
    }
};

int main()
{
    Solution s;
    int n = 3;
    cout<<s.climbStairs(n);
    return 0;
}