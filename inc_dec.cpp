#include<bits/stdc++.h>
using namespace std;
bool check_dec(int idx,int n,int arr[])
{
    // just before variable split
    for(int j=0;j<=idx-1;j++)
    {
        if(arr[j+1]>=arr[j]) return false;
    }
    // return false;
    return true;
}
bool check_inc(int split,int n,int arr[])
{
    for(int j=split;j<n-1;j++)
    {
        if(arr[j+1] <= arr[j]) return false; 
    }
    return true;
}
int main()
{
    int n; cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    

    for(int split=0;split<=n;split++)
    {
        if(check_dec(split-1,n,arr) && check_inc(split,n,arr))
        {
        //    cout<<"split done "<<split-1<<" , "<<split<<endl;
            // cout<<"badiya sequence"<<endl;
            cout<<"true"<<endl;
            return 0;
        }
        // cout<<"this implies we cant split "<<split-1<<" , "<<split<<endl;
    }
    // cout<<"ghatiya sequence"<<endl; 
    cout<<"false"<<endl;
    return 0;
}