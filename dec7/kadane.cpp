#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n; cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int cur_best;
    int ans=INT_MIN;
    cur_best=A[0];
    ans=max(ans,cur_best);
    // last_best=cur_best;
    for(int i=1;i<n;i++)
    {
        cur_best=max(cur_best + A[i], // ye statement wala cur best represents the cur_best till last index
                        A[i]);
    //     dp[i]=max(dp[i-1] + A[i], // either i can continue in old subarray
    //                 A[i]); // i need to start a new subarray
        ans=max(ans,cur_best);
        // ans=max(ans,dp[i]);

        // last_best=cur_best;
    }
    // vector<int> dp(n);
	// int ans=INT_MIN;
    // dp[0]=A[0];
	// ans=max(ans,dp[0]);
    // for(int i=1;i<n;i++)
    // {
    //     dp[i]=max(dp[i-1] + A[i], // either i can continue in old subarray
    //                 A[i]); // i need to start a new subarray
	// 	ans=max(ans,dp[i]);
	// } 
	cout<<ans<<endl;
    

}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		solve();
	}
    

    return 0;
}