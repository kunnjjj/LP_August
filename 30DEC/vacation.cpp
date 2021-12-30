#include<bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/dp
int main()
{
    int n ; cin>>n;
    vector<vector<int>> A(n,vector<int> (3));
    // int A[n][3]
    // n x 3 ka 2D vector
    for(int i=0;i<n;i++)
    {
        cin>>A[i][0]>>A[i][1]>>A[i][2];
    }

    vector<vector<int>> dp(n,vector<int> (3));
    dp[0][0]=A[0][0];
    dp[0][1]=A[0][1];
    dp[0][2]=A[0][2];
    for(int i=1;i<n;i++)
    {

        dp[i][0]=A[i][0] + max(dp[i-1][1],dp[i-1][2]);
        // if i choose 0th element then from prev day i would have chose
        // 1st or 2nd, ill choose the one which ill give me better ans
        dp[i][1]=A[i][1] + max(dp[i-1][0],dp[i-1][2]);
        dp[i][2]=A[i][2] + max(dp[i-1][0],dp[i-1][1]);
    }
    cout<<max({dp[n-1][0],dp[n-1][1],dp[n-1][2]})<<endl;
    // cout<<max(max(dp[n-1][0],dp[n-1][1]),dp[n-1][2])<<endl;





    return 0;
}