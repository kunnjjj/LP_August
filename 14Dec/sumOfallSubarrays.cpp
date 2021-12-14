#include<bits/stdc++.h>
using namespace std;
int brute_force(int A[],int n)
{   
    // int variable ke andar jo bhi sabse choti value aa sakti hai
    // that is INT_MIN; INT_MAX
    int total=0;
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
            // max_sum=max(max_sum,cur_sum);
            total+=cur_sum;
        }
    }
    return total;
    // return max_sum;
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
    int total=0;
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
            // max_sum=max(max_sum,cur_sum);
            total+=cur_sum;
        }
    }
    // return max_sum;
    return total;
}
int optimisedSol(int *A,int n)
{
    int total=0;
    for(int i=0;i<n;i++)
    {
        int R=(i+1),Y=(n-i);
        total+=A[i] * R * Y;
    }
    return total;
}
int main()
{

    int n; cin>>n;
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];



    cout<<brute_force(A,n)<<endl;
    cout<<prefix_sum(A,n)<<endl;

    cout<<optimisedSol(A,n)<<endl;




    return 0;
}