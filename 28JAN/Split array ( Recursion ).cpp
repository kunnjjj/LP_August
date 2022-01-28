#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void make_sets(vector<int> &A,int i,vector<int> &arr1,vector<int> &arr2,int sum1,int sum2)
{
    if(i==A.size())
    {
        if(sum1==sum2)
        {
            for(int i=0;i<arr1.size();i++)
            {
                cout<<arr1[i]<<" ";
            }
            cout<<"and ";
            for(int i=0;i<arr2.size();i++)
            {
                cout<<arr2[i]<<" ";
            }
            cout<<endl;
            cnt++;
        }
        return; 
    }

    // include A[i] in arr1 
    arr1.push_back(A[i]);
    make_sets(A,i+1,arr1,arr2,sum1+A[i],sum2);
    //backtrack
    arr1.pop_back();

    arr2.push_back(A[i]);
    make_sets(A,i+1,arr1,arr2,sum1,sum2 + A[i]);
    arr2.pop_back();
}
int main()
{

    int n; cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++) cin>>A[i];

    vector<int> arr1={},arr2={};

    make_sets(A,0,arr1,arr2,0,0);
    cout<<cnt<<endl;

    return 0;
}