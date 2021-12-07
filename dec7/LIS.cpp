#include<bits/stdc++.h>
using namespace std;
void print(vector<int> A)
{
    for(int x:A) cout<<x<<" ";
    cout<<endl;
}
int main()
{
    int n; cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    vector<int> dp(n,1);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(A[j] < A[i])
            {
                dp[i]=max(dp[i], 1+ dp[j]);
            }
        }
        // cout<<"i: "<<i<<endl;
        // print(dp);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,dp[i]);
    }
    cout<<ans<<endl;
    
    

    





    return 0;
}