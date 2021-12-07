#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int n; cin>>n;
    vector<int> dp(n+1);
    int M=1e9+7; 
    dp[0]=1;
    dp[1]=1; // fake jump
    int k=6;
    // cout<<1<<" ";
    for(int i=2;i<=n;i++)
    {
        dp[i]=(((dp[i-1]%M + dp[i-1]%M)%M - ((i-k-1>=0)?dp[i-k-1]:0)%M)+M)%M;
        // cout<<dp[i]<<" ";
    }

    
    cout<<dp[n]<<endl;
    return 0;
}