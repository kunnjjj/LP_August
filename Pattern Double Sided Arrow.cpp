#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n; cin>>n;
    int naya_n=(n+1)/2; // (n/2) + 1
    // n=(n+1)/2;
    // n=7
    // n=(n+1)/2
    // n=(8)/2
    // n=4
    // n=4
    // 11/2->5
    // 11/2->6
    for(int i=1;i<=naya_n;i++)
    {
        for(int j=1;j<=4 * (naya_n-i);j++) cout<<" ";
        // cout<<"kunj"<<endl;
        for(int j=i;j>=1;j--) cout<<j<<" ";
        for(int j=1;j<=(i-1)*4-2;j++) cout<<" ";
		if(i!=1)
		for(int j=1;j<=i;j++) cout<<j<<" ";
        // cout<<"kunj"<<endl;
		cout<<endl;
    }
    int spaces=4;
    for(int i=naya_n-1;i>=1;i--)
    {
        for(int j=1;j<=spaces;j++) cout<<" ";
        spaces=spaces+4;
        // cout<<"for2"<<endl;
		for(int j=i;j>=1;j--) cout<<j<<" ";
        for(int j=1;j<=(i-1)*4-2;j++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<j<<" ";
		cout<<endl;
    }    return 0;
}