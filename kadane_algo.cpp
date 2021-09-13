// #include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
int brute_force(int A[],int n)
{   
    // int variable ke andar jo bhi sabse choti value aa sakti hai
    // that is INT_MIN; INT_MAX

    int max_sum= INT_MIN; //sochenge
    for(int L=0;L<n;L++)
    {
        for(int R=L;R<n;R++)
        {
            int cur_sum=0; 
            // L=0, R=n-1
            for(int i=L;i<=R;i++)
            {
                cur_sum+=A[i];
            }
            max_sum=max(max_sum,cur_sum);
        }
    }
    return max_sum;
}
int prefix_sum(int A[],int n)
{
    int prefix[n];  //time N^2
    prefix[0]=A[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1] + A[i];
    }
    int max_sum= INT_MIN; //sochenge
    // L=0 prefix[-1]
    for(int L=0;L<n;L++)
    {
        for(int R=L;R<n;R++)
        {
            int cur_sum; 
            // L=0, R=n-1
            // for(int i=L;i<=R;i++)
            // {
            //     cur_sum+=A[i];
            // }
            if(L>0)
            cur_sum=prefix[R]-prefix[L-1];
            else 
            cur_sum=prefix[R];
            max_sum=max(max_sum,cur_sum);
        }
    }
    return max_sum;
}
int t_n_squared_sp_1(int A[],int n)
{
    int max_sum= INT_MIN; //sochenge
    for(int L=0;L<n;L++)
    {
        int cur_sum=0;
        for(int R=L;R<n;R++)
        {
            cur_sum+=A[R];
            max_sum=max(max_sum,cur_sum);
        }
    }
    return max_sum;
}
int kadane_n(int A[],int n)
{
    int best[n];
    best[0]=A[0];
    for(int i=1;i<n;i++)
    {
        best[i]=max(A[i],              // we are starting new subarray
                    A[i] + best[i-1]); // we are continuing with old best subarray
    }
    int max_ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        max_ans=max(max_ans,best[i]);
    }
    return max_ans;
}

int kadane_1(int A[],int n)
{
   // n time , 1 space
   int old_best=A[0],max_ans=A[0];
    for(int i=1;i<n;i++)
    {   
        int cur_best=max(A[i],            // starting new
                    old_best + A[i]); // continuing old
        max_ans=max(max_ans,cur_best);
        old_best=cur_best;
    }
    return max_ans;
}
int main()
{
    // brute
    // space -> agar koi kaam baar baar horha hai then think of space
    // worse time -> avg time + avg space
    // n^3 -> n^2,n
    // space -> no space , lets say same complexity
    // start using old answers avg space + avg time
    // avg time + good space
    // think of an out-of-the-box algorithm + space use
    // ->  start using old answers  out of box algo + good space
    
    int n; cin>>n;
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];
    cout<<brute_force(A,n)<<endl;
    cout<<prefix_sum(A,n)<<endl;
    cout<<t_n_squared_sp_1(A,n)<<endl;
    cout<<kadane_n(A,n)<<endl;
    cout<<kadane_1(A,n)<<endl;
    

    // int B[10];
    // cout<<brute_force(B,sz)<<endl;







    return 0;
}