#include<bits/stdc++.h>
using namespace std;
bool cmp2(int a,int b)
{
    // return a < b; // normally ascending order mein sort kiya
    return a > b; // decreasing order
}
int main()
{
    int n; cin>>n;
    vector<int> C;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        C.push_back(x);
    }
    sort(C.begin(),C.end(),cmp2);
    for(int i=0;i<n;i++)
    {
        cout<<C[i]<<" ";
    }
    return 0;
}
